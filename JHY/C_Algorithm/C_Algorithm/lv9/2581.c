#include <stdio.h>

int main(void)
{
    int N, M, i = 0, l = 0, sum = 0, order = 0, min = 0; // order 순서.
    scanf("%d %d", &N, &M);
    for(i = N; i <= M; i++)
    {
        for(l = 2; l < i; l++)
        {
            if(i % l == 0) //소수는 1과 자기자신을 제외하곤 나뉘어지면 안됨! 즉 중간에 나뉘어지는게 있으면 소수가 아니므로 break!
                break;
        }
        if(l == i)
        {
            order++; // 소수가 하나 나올때마다 숫자를 증가시킴. 즉 첫번째 나온 소수가 최솟값!
            sum += l;
            if(order == 1)
                min = l;
        }
    }
    if(order == 0) // 소수가 나올 때 마다 order를 증가시키는데, order가 0이면 소수가 하나도 안나왔다는 말.
        printf("-1\n");
    else
    {
        printf("%d\n", sum);
        printf("%d\n", min);
    }
    return 0;
}
