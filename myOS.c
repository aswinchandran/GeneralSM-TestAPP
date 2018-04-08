#include "GenSM.h"

SM_HANDLE os_memoryAlloc (SM_UINT32 Length)
{
	return malloc (Length);
}

void os_memoryZero ( void* pMemPtr, SM_UINT32 Length)
{
	memset (pMemPtr,0,Length);
}

void os_memoryFree ( void* pMemPtr, SM_UINT32 Length)
{
	free (pMemPtr);
}

void os_memoryCopy (void* pDstPtr, void* pSrcPtr, SM_UINT32 Size)
{
   memcpy (pDstPtr,pSrcPtr,Size);
}
