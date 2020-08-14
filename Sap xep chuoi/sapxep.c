#include "sapxep.h"
#include "hoanvi.h"

void sapxep(int *arr, int size) {
    for (int i = 0; i < size-1; i++)
    {

        for (int j = i + 1; j < size-1; j++)
        {
            
            if (*(arr+i) > *(arr+j))
            {
				hoanvi( arr+i , arr+j );
            }

        }

    }
}
