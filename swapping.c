#include<stdio.h>
int main(){
    int  a[5] , n , i , x;
    printf("enter n:");
    scanf("%d",&n);

    for(i=0 ; i<n ; i++){
        printf("enter a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("\n swapping number \n");
    for(i=0 ; i<n ; i++){
          x = a[0];
           a[0] = a[n-1];
           a[n-1] = x;
    }
     printf("\n");
     for(i=0 ; i<n ; i++){
     printf("%d ", a[i]);
    }
}