#include <stdio.h>

#define max 6

// conquer = 서열정리
void merge(int a[], int low, int mid, int high) {
    int b[1000];
    int i = low;
    int j = mid + 1;
    int k = 0;
    
    // 왼쪽과 오른쪽을 싸움붙이는 애. 한쪽이 전멸할 때 까지
    while(i <= mid && j <= high) {
        if(a[i] <= a[j]) {
            b[k] = a[i];
            k++;
            i++;
        } else {
            b[k] = a[j];
            k++;
            j++;
        }
    }
        
    // 왼쪽이 살아있다면.
    while(i <= mid)
    {
        b[k] = a[i];
        k++;
        i++;
    }
    
    // 오른쪽이 살아있다면.
    while(j <= high)
    {
        b[k] = a[j];
        k++;
        j++;
    }
        
    k--;
    // 문서작성
    while(k >= 0) {
        a[low + k] = b[k];
        k--;
    }
    
};

//divide = 대진표 작성
void mergeesort(int a[], int low, int high){
    
    // exit condition
    
    if(low < high) {      //대진할 애가 없는 경우 나가게 됨.
        int m = (low + high) / 2;
        // left
        mergeesort(a, low, m);
        //right
        mergeesort(a, m+1, high);
        //fight
        merge(a, low, m, high);
    } else {
        return ;
    }
    
    // 실제로 대진표 작성
    
}

int main() {
    int a[max] = {20, 10, 70, 80, 40, 90};
    int i = 0;
    printf("\nbefore merge");
    for(i = 0; i < max; i++)
    {
        printf(" %d",a[i]);
    }
    
    mergeesort(a, 0, max-1);
    printf("\nAfter merge");
    for(i = 0; i < max; i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n");
}
