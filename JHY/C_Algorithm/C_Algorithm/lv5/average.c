#include <stdio.h>

int main(void) {
    int num, i;
    double arr[1000], M = 0, avg = 0;
    scanf("%d", &num);
    for (i = 0; i < num; i++){
        scanf("%lf", &arr[i]);
        
        if (M < arr[i])
            M = arr[i];
    }
    
    for (i = 0; i < num; i++){
        arr[i] = arr[i]/M*100.0;
        avg += arr[i];
    }
    
    printf("%.2lf", (avg/(double)num));
}
