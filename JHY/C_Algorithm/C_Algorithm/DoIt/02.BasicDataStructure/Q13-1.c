#include <stdio.h>

typedef struct {
    int y;
    int m;
    int d;
} Date;

Date DateOf(int y, int m, int d)
{
    Date date;
    date.y = y;
    date.m = m;
    date.d = d;
    return date;
}

int main(void)
{
    int y = 2021, m = 8, d = 15;
    Date date ={.y = 0, .m = 0, .d = 0};
    date = DateOf(y, m, d);
    printf("%d - %0d - %d\n", date.y, date.m, date.d);
    return 0;
}
