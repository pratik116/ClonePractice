#include<bits/stdc++.h>
using namespace std;
int secondlargest(int arr[],int size){
    int first=0;
    int second=0;
    int third=0;
   
    for(int i=0;i<size;i++){
        if(arr[i]>=first){
            third=second;
            second=first;
            first=arr[i];
        }
        else if(arr[i]>=second){
            third=second;
            second=arr[i];
        }
        else if(arr[i]>=third){
            third=arr[i];
        }
        // cout<<first<<" "<<second<<endl;

    }
    return third;
}
int main()
{
    int v[5]={12,11,14,18,20};
    cout<<secondlargest(v,5);
    return 0;
}