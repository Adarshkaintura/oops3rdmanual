//factorial using pointer function;
#include<iostream>
using namespace std;
int fact(int n){
    if (n==0||n==1)
    {
        return 1;
    }
    int res=n*fact(n-1);
    return res;
}
int main(){
int (*factorial)(int);
factorial=fact;
int result=factorial(4);
cout<<"the factorial is::"<<result<<endl;
return 0;
}