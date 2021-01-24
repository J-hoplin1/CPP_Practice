#include <stdio.h>

int main()
{
    int numArr[10] = {11,22,33,44,55,66,77,88,99,1010};

    printf("%d\n",*numArr); 
    // 배열또한 포인터의 일종이다. 그리고 배열의 주소는 배열의 첫번쩨 요소를 가르키고 있다. 그렇기 때문에 배열이름으로 배열 이름 역참조를 하면 첫번째 요소가 나온다.
    printf("%d\n",numArr[1]);
    printf("%d\n",numArr[7]);
}
