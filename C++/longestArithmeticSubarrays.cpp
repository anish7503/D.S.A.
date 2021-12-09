#include <iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter the size of an array : ";
    cin>>N;

    int arr[N];
    cout<<"Enter the elenents of an array : ";
    for(int i=0;i<N;i++)
          cin>>arr[i];
    
    int pd,curr=0,maxl=0;
    for(int i=0;i<N-1;i++){
        int diff=arr[i+1]-arr[i];
        if(diff==pd){
            curr+=1;    
        }
        else{
            curr=1;
            pd=diff;
            
        }
        
        if(curr>maxl)
            maxl=curr;
    }
    cout<<maxl+1<<endl;
}
