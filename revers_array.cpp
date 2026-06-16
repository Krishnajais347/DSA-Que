#include <iostream>
using namespace std;
int reverse_array(int length,int arr[])
{
    int start,end,tmp;
    start=0;
    end=length-1;
   while(start<end){
    
    tmp=arr[start];;
    arr[start]=arr[end];
    arr[end]=tmp;start++;end--;
}

    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<" ";
    }

}


int main(){
   
int arr[]={43,1,57,78,90};
int length=sizeof(arr)/sizeof(arr[0]);
cout<<reverse_array(length,arr);

}