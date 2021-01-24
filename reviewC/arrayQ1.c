#include <stdio.h>

int main()
{
    int decimal = 0;
    int binary[4] = { 1, 1, 0, 1 };    // 1101 순서대로 저장됨

    int pos = 0;
    for(int a = sizeof(binary) / sizeof(int;a >= 0;a--))
    {
        if(binary[a] == 1)
        {
            decimal += 1 << pos;
        }
        pos++;
    }

    printf("%d\n", decimal);

    return 0;
}
