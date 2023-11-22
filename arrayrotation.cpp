#include<iostream>
using namespace std;
void rotatearray(int arr[],int n,int d){
    int temp[d];
  for (int i = 0; i <d; i++)
  {
    temp[i]=arr[i];
  }
  for (int i = d; i < n; i++)
  {
    arr[i-d]=arr[i];
  }
  for (int i = n-d; i < n; i++)
  {
    arr[i]=temp[i -(n-d)];
  } 
}
int main(){
    int n,d;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array"<<endl;
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    cout<<"Enter the position from where you want to rotate"<<endl;
    cin>>d;
  rotatearray(arr,n,d);
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }  
  return 0;
}