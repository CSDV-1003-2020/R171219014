#include<stdio.h>
  int a; 
  while(1)
  {  
  printf("\npress \n 1 for insertion\n 2 for deletion \n 3 to exit \n 4 for display");
  scanf("%d",&a);

  switch(a)
  {
    case 1: insert(); break;
	case 2: delete(); break;
	case 3: exit(0);
	case 4: display(); break;
	default : printf("INVALID INPUT");  
  }
  }
}  

insert()
{
	  if(top==5)
		    printf("STACK IS FULL ");
	    else
		      {
			          printf("enter the the value to be inserted :");
				      scanf("%d",&item);
				          top=top+1;
					  	stack[top]=item;
							printf("the entered value : %d has been inserted succesfully",item);
							  }
	      

}


void display()
{
    if (top==-1)
    printf("STACK IS EMPTY");
    else
    {
        for(int i=0;i<=top;i++)
        {
            printf("%d\n",stack[i]);
        }
    }
}


