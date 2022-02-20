#include<iostream>
using namespace std;
int binarysearch(int arr[], int n,int ch){
    int mid;
    int s=0;
    int en=n;  
     while(s<=en){
         mid=(s+en)/2;
        if(arr[mid]==ch){
            return mid;
        }
        else if(arr[mid]>ch){
            en=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int linearsearch(int arr[] ,int n,int ch){
    for(int i=0;i<n;i++){
        if(arr[i]==ch){
            return i;
        }
    }
    return -1; 
}
int main()
{
    int n,ch,i;
    cout<<"enter how many elemant you want to enter :";
    cin>>n;
    int arr[n];
    cout<<endl<<"now enter the elements:"<<endl;
    for (i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    // searching of elements
     cout<<"enter the elements you wants to search: ";
     cin>>ch;
     cout<<linearsearch(arr,n,ch);
     cout<<binarysearch(arr,n,ch);
     
 return 0;
}