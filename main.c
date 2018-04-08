#include "GenSM.h"

int main()
{
    int a=1;
    TmySm    *pMySm;
    printf("Hello World\n");

    pMySm=sme_Create(&a);
    if (pMySm)
    {
        printf("Hello World");
        sme_SetDefaults(pMySm);
        sme_SmEvent(1, pMySm);
    }
    return 0;
}
