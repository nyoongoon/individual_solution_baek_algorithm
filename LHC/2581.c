#include<stdio.h>

int main(){    
    int x,y,min;
    int sum=0;
    scanf("%d %d",&x,&y);
    for(;x<=y;x++) {
        int check=1;
        for(int j=2;j<=x/2;j++) {
            if(x%j == 0){
                check=0;
                break;
            }
        }
        if(check==1) {
            if (min>x)
                min=x;
            sum+=x;
        }
    }
    if(sum==0)
        printf("-1");
    else {
        printf("%d\n%d\n",sum,min);
    }
    return 0;
}