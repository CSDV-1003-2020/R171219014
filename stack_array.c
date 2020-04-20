#include<stdio.h>
int stack[6],top=-1,item=0;
main()
{
  int a; 
  while(1)
  {  
  printf("\npress \n 1 for insertion\n 2 for deletion \n 3 to exit ");
  scanf("%d",&a);

  switch(a)
  {
    case 1: insert(); break;
	case 2: delete(); break;
	case 3: exit(0);
	default : printf("INVALID INPUT");  
  }
  }
}  

