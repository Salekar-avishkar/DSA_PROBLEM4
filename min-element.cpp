// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     cout<<"enter size of array"<<endl;
//     int n; cin>>n;
//     int arr[n];
//     cout<<"array inputa"<<endl;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     sort(arr , arr+n);
//     cout<<"min number in array is"<<endl;
//     cout<<arr[0]<<endl;
// }

//usin for loops

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n-1; j++){
            if(arr[i]>arr[j]){
                arr[i] = arr[j];
            }
        }
    }
    cout<<"Minimum number in array is:"<<arr[0];

}


