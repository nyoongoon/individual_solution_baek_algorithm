#include <stdio.h>
void hanoi_tower(int n, char from, char tmp, char to);

int main(void)
{
    int n;
    scanf("%d", &n);
    hanoi_tower(n ,'a','b','c');
    return 0;
}

void hanoi_tower(int n, char from, char tmp, char to)
{
    if(n == 1)
        printf("원판 1을 %c에서 %c로 옮긴다.\n", from, to);
    else
    {
        hanoi_tower(n-1, from, to, tmp);
        printf("원판 %d를 %c에서 %c로 옮긴다.\n", n, from, to);
        hanoi_tower(n-1, tmp, from, to);
    }
}

//#include <stdio.h>
//int factorial(int n)
//{
////    n * (n-1) * (n-2) ...2 * 1 / 1이 될때 탈출!
//    if(n == 1)
//        return 1;
//    return n*factorial(n-1);
//}
//
////5*(factorial(4))
////5*4*(factorial(3))
////5*4*3*(factorial(2))
////5*4*3*2*(factorial(1))
////5*4*3*2*1
//
//int main(void)
//{
//    int n;
//    scanf("%d", &n);
//    printf("%d! = %d\n", n, factorial(n));
//    return 0;
//}
