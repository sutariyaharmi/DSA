#include<stdio.h>
int main(){
    int  a[5] , n , i , x;
    printf("enter n:");
    scanf("%d",&n);

    for(i=0 ; i<n ; i++){
        printf("enter a[%d]",i);
        scanf("%d",&a[i]);
        x = a[0];
    }
    printf("\n swapping number \n");
    for(i=0 ; i<n ; i++){
        printf("%d",a[i]);
        a[i] = a[i+1];
    }
     printf("\n");
     for(i=0 ; i<n ; i++){
        a[4] = x;
     printf("%d ", a[i]);
    }
}