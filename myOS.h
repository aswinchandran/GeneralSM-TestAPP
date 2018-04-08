typedef void*				SM_HANDLE;
typedef char                SM_CHAR;
typedef signed char         SM_INT8;
typedef unsigned char       SM_UINT8;
typedef signed short        SM_INT16;
typedef unsigned short      SM_UINT16;
typedef signed int          SM_INT32;
typedef unsigned int        SM_UINT32;
typedef signed long long    SM_INT64;
typedef unsigned long long  SM_UINT64;
typedef unsigned int 		SM_BOOL;

#define SM_TRUE  1
#define SM_FALSE 0


typedef enum
{
    LOG_LEVEL_NONE           =  0,
	LOG_LEVEL_INIT           =  1,
	LOG_LEVEL_INFORMATION    =  2,
	LOG_LEVEL_WARNING        =  3,
	LOG_LEVEL_ERROR          =  4,
	LOG_LEVEL_FATAL_ERROR    =  5,
	LOG_LEVEL_MAX            =  6,
} ELogLevel;


#define SM_PRINT(level, args ...) \
    do {if ((int)level >= LOG_LEVEL_INIT) printf(args);} while(0)

