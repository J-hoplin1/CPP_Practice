#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int numArr[5];
    int smallestNumber;

    scanf("%d %d %d %d %d", &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4]);

    for(int a = 0; a < 5;a++)
    {
        if(a == 0)
        {
            smallestNumber = numArr[a];
        }
        else
        {
            if(smallestNumber > numArr[a])
            {
                smallestNumber = numArr[a];
            }
            else
            {
                continue;
            }
        }
    }
    
    printf("%d\n", smallestNumber);

    return 0;
}
