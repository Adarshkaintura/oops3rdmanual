#include<iostream>
using namespace std;
int factorial(int a){
  if (a==0)
  {
    return 1;
  }
  int fact=a*factorial(a-1);
  return fact;
}
int main(){
    int a,f;
    cout<<"Enter the number"<<endl;
    cin>>a;
    f=factorial(a);
    cout<<"The factorial of "<<a<<" is "<<f<<endl;
    return 0;
}