#include<iostream>
using namespace std;

int factorial(int n)
{
  int fact=1;
  //cout<<n<<fact<<endl;
  if(n>1)
  {
    fact=n*factorial(n-1);
  }
  return fact;
}

int main()
{ 
  int n;
  cin>>n;
  int fact=factorial(n);
  cout<<"factorial of "<<n<<" is :"<<fact<<endl;
  return 0;
}