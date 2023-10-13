#include<stdio.h>
int main(){
    int a[5] , b[5], c[10] , i ,j;
     
     for(i=0 ; i<5 ; i++)
     {
        printf("enter value a[%d]",i);
        scanf("%d ",&a[i]);
        c[i] = a[i];
     }
     printf("\n");
     for(j=0; j<5 ; j++){
        printf("enter value b[%d]",j);
        scanf("%d ",&b[j]);
        c[i] = b[j];
        i++;
     }
     printf("merge value c:\n");
     for(i=0 ; i<10 ; i++){
        printf("%d ",c[i]);
     }
}