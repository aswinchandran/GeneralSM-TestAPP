

typedef enum
{
    SM_STATE_1 = 0,
    SM_STATE_2,
    SM_STATE_3,
    SM_STATE_4,
    SM_STATE_5,
    SM_STATE_6,
    SM_NUMBER_OF_STATES
} ESmeSmStates;

typedef enum
{
    SM_EVENT_1 = 0,
    SM_EVENT_2,
    SM_EVENT_3,
    SM_EVENT_4,
    SM_EVENT_5,
    SM_EVENT_6,
    SM_NUMBER_OF_EVENTS
} ESmeSmEvents;

void myFunc(void* hMySm);

typedef struct
{
    void*       hOS;
    void*       hGenSm;
    int         bRunning;

} TmySm;

void* sme_Create (void* hOS);
void sme_Destroy (void* hMySm);
void sme_SetDefaults (void* hMySm);
void sme_SmEvent(SM_UINT32 uEvent, void* hMySm);
