#include<stdio.h>
#include<stdlib.h>
int n;
void display(int a[]){
    int i;
    printf("\n");
      for(i=0; i<n; i++)e
        printf("%d ",a[i]);
}
void quicksort(int a[] , int first , int last){
    int i , j , temp , pivot;
    if(first < last){
        display(a);
        pivot = first;
        i = first , j = last;
        while(i<j){
            while(a[i]<=a[pivot] && i<last)
            i++;
            while(a[j]>a[pivot])
            j--;
        if(i<j){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }    
        }
           temp = a[pivot];
           a[pivot] = a[j];
           a[j] = temp;

        quicksort(a , first , j-1);
        quicksort(a , j+1 , last);   
    }
}
int main(){
    int a[25] , i;
    printf("how many element enter:");
    scanf("%d",&n);
    for(i=0 ; i<n; i++)
       a[i] = rand()%100+1;

    quicksort(a , 0 , n-1);
    printf("\nafter quick sort:");
    display(a);   
}