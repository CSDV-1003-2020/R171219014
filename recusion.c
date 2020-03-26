#include <stdio.h>

int main()
{
    
   int i,a,num,sum=0;
   
   printf("enter a number");
   scanf("%d",&num);
   
   for(i=0;i<num;i++)
   {
        a=num%10;
        sum=sum+a;
        num=num/10;
   }
   
   printf(" non recursion %d \n",sum);
   
   printf(" recursion %d ",recc(num));
   
   return 0;
}

int recc(int num)
{
    //int sum=0;
    num=num/10;
    if(num==0)
     return sum;
    
    return sum=sum+(recc(num%10));
    //sum=num%10+(recc(num/10));
    //return sum;
}
