#include<iostream>
using namespace std;
int findNo(int arr[],int size, int a){
    for(int i=0;i<size;i++){
        if(a == arr[i]){
            return i;
        }
    }
    return -1;


}
int main(){
    int target = 8;
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(auto i:arr){
        cout<<i;
    }
    cout<<endl;
    int ans = findNo(arr,5,target);
    cout<<"target index "<<ans;

}