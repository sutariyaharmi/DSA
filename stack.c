//stack -> LIFO

#include<stdio.h>
#define n 5
int a[n] , top = -1;
int display(){
    if(top<0){
        printf("array is enpty...");
    }
    else{
        for(int i=0; i<=top; i++ )
        printf("%d ",a[i]);
    }
}
int insertend(int val){
    if(top >=n-1){
        printf("stack is overflow \n");
    } 
    else{
        top++;
        a[top] = val;
    }
}
 int delete(){
    if(top >n-1){
        printf("stack is overflow \n");
    }
    else{
        top--;
    }
 }
int main(){
   
    insertend(10);
    insertend(20);
    insertend(30);
    insertend(40);
    insertend(50);
   // insertend(60);
   delete();
   delete();
  delete();
  // delete();
   display();
}