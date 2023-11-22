#include<iostream>
using namespace std;
int main(){
    int a,n,rev=0;
    cin>>a;
    n=a;
    while (n!=0)
    {
        rev=(rev*10)+(n%10);
        n=n/10;
    }
   if (rev==a)
   {
    cout<<"PALINDROME"<<endl;
   }
   else{
    cout<<"NOT PALINDROME"<<endl;
   }
   return 0;
    
}