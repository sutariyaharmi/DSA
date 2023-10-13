#include<stdio.h>
#include<stdlib.h>
#define n 10

int linearsearch(int a[], int x){
    for(int i=0 ; i<n; i++){
        if(a[i]==x){
            return i+1;
        }
    }
    return -1;
}
int main(){
    int a[n] , element , i;
    for(i=0; i<n; i++){
        a[i]=rand()%100+1;
    }
    for(i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    printf("\nenter search element:");
    scanf("%d",&element);

    int m = linearsearch(a , element);
    if(m==-1){
        printf("element is not found of array....");
    }
    else{
        printf("search element of found at %d position",m);
    }
}
