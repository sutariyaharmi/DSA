//stack -> FIFO

#include<stdio.h>
#define n 5
int a[n] , top = -1;
int display(){
    if(top<0){
        printf("array is empty...");
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
 int firstin(int val){
    if(top>=n-1){
        printf("stack is overflow \n");
    }
    else{
        top++;
        for(int i=top ; i>=0; i--){
        a[i] = a[i-1];
        }
        a[0] = val;
        }
 }
    int firstdel(){
           
          if(top <0){
            printf("stack is overflow \n");
          }
          else{
             
            for(int i=0; i<top; i++){
              a[i] = a[i+1];
            }
            top--;
                }

    }

 int main(){
    int ch;
    printf("1.display");
    printf("\n2. array insert end");
    printf("\n3.delete array end");
    printf("\n4. insert array first");
    printf("\n5.delete array first");
    printf("\n0.end program");

    do{
        printf("\n enter your choice:");
        scanf("%d",&ch);
        int val;
        switch(ch){
            case 1:
               display();
               break;

            case 2:
               printf("enter your array:");
               scanf("%d",&val);
               firstin(val);
               break;

            case 3:
               firstdel();
               break;

            case 4:
               printf("enter your array:");
               scanf("%d",&val);
               insertend(val);
               break;

            case 5:
              delete();
              break;

            case 0:
               printf("program is closed");
               break;

            default:
               printf("your enter wrong choice:");
               break;                    
            }
         }
         while (ch!=0);
         return 0;
    }
  
