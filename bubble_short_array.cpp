#include<iostream>
using namespace std;
int main()
{
    int n,k,count=1;
    cout<<"enter the number of elements you want to entre: ";
    cin>>n;
    int arr[n];
    cout <<"now enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // sorting of the array
    while(count<=n-1){
          for(int i=0;i<=n-count;i++){
                 if(arr[i]>arr[i+1])
                 {
                      k=arr[i+1];
                     arr[i+1]=arr[i];
                     arr[i]=k;
                    }
            } 
            count++;
         }
    
     for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
     }    
    return 0;
}