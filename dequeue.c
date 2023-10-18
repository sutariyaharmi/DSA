#include<stdio.h>
#define n 10
int a[n], f=-1 , r=-1;
int display(){
    if( f<0){
        printf("queue is empty");
    }
    else{
        for(int i=f; i<=r; i++)
            printf("%d ", a[i]); 
    }
}
int lastinsert(){
    int data;
    printf("enter data:");
    scanf("%d",&data);
     if(r> n-1){
        printf("queue overflow");
    }
    if(f<0){
        f=r=0;
        a[r]=data;
    }
    
   else{
    r++;
    a[r]=data;
   }
}
int firstdelete(){
    if(f<0){
       printf("empty......");
    }
    else{
      if(f==r){
        f= -1;
        r = -1;  
    }
    else{
        f++;
    }
    printf("\nvalue deleted");
    }   
}
int firstinsert(){
    int data;
    printf("enter data:");
    scanf("%d",&data);
    if(f==0){
        printf("do not insert again...");
    }
    if(f<0){
        f=r=0;
        a[f]=data;
    }
    else{
        --f;
        a[f]=data;
    }
}
int lastdelete(){
     if(f<0){
       printf("empty......");
    }
    else{
      if(f==r){
        f= -1;
        r = -1;  
    }
    else{
        --r;
    }
    printf("\nvalue deleted");
    }   
   
}
int main(){
   int ch;  
   printf("1.display\n");
   printf("2.lastinsert\n");
   printf("3.firstdelete\n");
   printf("4.firstfinsert\n");
   printf("5.lastdelete\n");
   printf("6.The end\n");
   do{
    printf("\nenter your ch:");
    scanf("%d",&ch);
    int data;
    switch(ch){

        case 1:
         display();
         break;

        case 2:
          lastinsert();
          break;

        case 3:
           firstdelete();
           break;

        case 4:
           firstinsert();
           break;

        case 5:
           lastdelete();
           break;      

        case 0:
           printf("close");
           break;

        default:
        printf("wrong ch:");
        break;        
    }
}
  while(ch!=0);
}