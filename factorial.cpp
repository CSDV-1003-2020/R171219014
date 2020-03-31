
// to find the factorial of a number using oops language(c++)

#include<iostream>
using namespace std;

class fact
{
    int x,prod=1;
    public :
    fact(){}
    
    fact(int a)
    {
      cout<<"\nThe factorial of the number is : "<<factorial(a);
    }
    
    int factorial(int a)
    {
        prod=prod*a;
        if(a==1)
        {
            return prod;
        }
        if(a==0)
        {
            return 1;
        }
        else
        {
            return factorial(a-1);
        }
    }
    ~fact(){}
};

int main()
{
    
    int a;
    cout<<"Enter a number to find its factorial : ";
    cin>>a;
    fact ob(a);
  
    return 0;
}
