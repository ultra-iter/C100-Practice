#include "c001_010.h"

void show_001(void)
{
    uint8 i, j, k;

    for (i = 1; i < 5; i++)
    {
        for (j = 1; j < 5; j++)
        {
            for (k = 1; k < 5; k++)
            {
                if ((i != j) && (j != k) && (i != k))
                {
                    printf("%d%d%d ", i, j, k);
                }
            }
        }
    }
    printf("\n");
}

void show_001_2(void)
{
    uint8 num[4] = {1, 2, 3, 4};

}
