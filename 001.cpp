#include<iostream>
using namespace std;
namespace name1{
    int x=5;
    double m=3;
    namespace name2{
        int y=8;
    }
}
namespace{ //unnamed namespace
    int m=4;
}
int main(){
    cout<<"x="<<name1::x<<endl;
    cout<<"m="<<name1::m<<endl;
    cout<<"m="<<m<<endl;
    cout<<"y="<<name1::name2::y<<endl;
    return 0;
}