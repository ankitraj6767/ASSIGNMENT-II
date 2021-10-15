#include<stdio.h>
int main(){
 while(1){
  int choice;
 
  printf("Select choice: \n 1.add \n 2.Multiply\n3.exit\n");
  printf("Enter choice");
  scanf("%d",&choice);
  if(choice==1){
   long int n1,n2;
   printf("Enter two number:\n ");
   scanf("%ld %ld",&n1,&n2);
   long int sum=n1+n2;
   printf("Sum is %ld\n",sum);
  }
  else if(choice==2){
   long int n1,n2;
   printf("Enter two number:\n ");
   scanf("%ld %ld",&n1,&n2);
   long int mult=n1*n2;
   printf("multtiply  is %ld\n",mult);
  }
  else{
   printf("exit");
   break;
  }
 }
 return 0;
}