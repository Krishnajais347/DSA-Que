#include <iostream>
using namespace std;
int max_number(int length,int arr[])
{

    int tmp=0;
    for(int i=0;i<length;i++)
    {
       if(tmp<arr[i]){
        tmp=arr[i];
       }
    }
    return tmp;
}

int main(){
   
int arr[]={43,1,57,78,90};
int length=sizeof(arr)/sizeof(arr[0]);
cout<<max_number(length,arr);

}