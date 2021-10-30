/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int n,key;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   cout<<"ENTER KEY ";
   cin>>key;
   int start=0,end=n;
   while(start<=end){
       int mid=(start+end)/2;
       if(key==arr[mid]){
           cout<<mid;
           return 0;
       }else if(key>arr[mid]){
           start=mid+1;
       }else{
           end=mid-1;
       }
   }
   
    cout<<"KEY NOT FOUND";
    return 0;
}
