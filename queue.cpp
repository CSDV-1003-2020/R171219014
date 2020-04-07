#include <iostream>
#define MAX 20

using namespace std;

class Queue
{
      int f,r;
      int queue[MAX];
 
      public:
  
      Queue()
      {
        f=r=-1;
      }
 
       void insert(int temp)
       {
              if(r==MAX-1)
             {
                cout<<"\noverflow";
             }
             else if(f==-1 && r==-1)
             {
                f=r=0;
                queue[r]=temp;
                cout<<"\ninserted "<<temp;
             }
             else
             {
                r++;
                queue[r]=temp;
                cout<<"\ninserted "<<temp;
             }
	   }
	   
	   void qdelete()
       {
              int temp;
  
              if(r==-1)
             {
                cout<<"\nunderflow";
             }
             else if(f==0 && r==0)
             {
                       temp=queue[f];
                       f=r=-1;
                       cout<<"\n\ndeleted succesfully"<<temp;
             }
             else
             {
                      temp=queue[f];
                      f++;
                      cout<<"\n\ndeleted succesfully "<<temp;
             }
       }
	   
	   void traverse()
       {
              if(f==-1)
              {
                      cout<<"\n\nempty\n";
              }
              else
              {
                      cout<<"\n\nempty\n";
                      for(int i=f;i<=r;i++)
                      {
                               cout<<queue[i]<<" ";
                      }
                      cout<<endl;
              }
        }
};

int main()
{
      Queue q;
      
      int s,a;
      cout<<"Enter \n1 to insert\n2 to delete\n3 to display";
      cin>>s;
      
      switch(s)
      {
          case 1:
          {
            cout<<"Enter a number to insert"; 
            cin>>a;
            q.insert(a);
          }
          case 2:
          {
            q.qdelete();
          }
          case 3:
          {
            q.traverse();
          }
          default: cout<<"invalid input";
      }
  
      return 0;
}
