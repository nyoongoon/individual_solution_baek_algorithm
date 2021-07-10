# include <stdio.h>

int main(void)
{
    int a, b ,c , n , l = 0;
    int v = 100;
    scanf("%d", &n);
    if(n < 100) { //100보다 작은 수는 모두 한수
        printf("%d\n", n);
    }
    else {
        while(v <= n) // n까지 loop을 돌려야 함. 그러므로 v를 설정해서 n까지 올림.
        {
            a = v / 100; // 100 의자리
            b = (v % 100) / 10; // 10의 자리
            c = (v % 100) % 10; // 1의 자리
            if((b-a) == (c-b))
                l++;
            v++;
        }
        printf("%d\n",l+99);
    }
    return 0;
}
