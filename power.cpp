#include<iostream>
using namespace std;
int power(int m,int n){
    if (n==1)
    {
        return n;
    }
    int ans=n*power(m,n-1);
    return ans;
}
int main(){
    int m,n;
    cout<<"Enter the number and its power"<<endl;
    cin>>m>>n;
    int ans=power(m,n);
    cout<<"Answer is "<<ans<<endl;
    return 0;
}