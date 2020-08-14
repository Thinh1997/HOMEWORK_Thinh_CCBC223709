#include <stdio.h>
#include "sapxep.h"

int main()
{
    
    int arr[] = { 0, 23, 14, 12, 9 };
    int n = sizeof(arr) / sizeof(int);
    sapxep(n, arr);

    return 0;
}