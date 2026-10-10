#include<iostream>
#include<vector>
using namespace std;



//cyclesort
// int main(){
//     int arr[]={4,1,6,2,5,3,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int i=0;
//     while(i<n){
//         int correctidx=arr[i]-1;
//         if(i==correctidx)  i++;
//         else swap(arr[i],arr[correctidx]);

//     }
//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

// }



// leetcode 268
//missing number

//method1
// n==3 0 to 3 0,1,2,3,,4,5
// int main(){
//     int arr[]={0,1,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//    cout<<endl;

//     vector<bool> check(n+1,false);
//     for(int i=0;i<n;i++){
//         int ele=arr[i];
//         check[ele]=true;

//     }
//    for(int i=0;i<=n;i++){
//     if(check[i]==false) cout<<"missing number"<<i;
//    }
//    return 100;
// }

// metthod2;
// int main(){
//     int arr[]={0,1,2,3,5,6,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int i=0;
//     while(i<n){
//         int correctidx=arr[i];
//         if(correctidx==i || arr[i]==n)  i++;
//         else swap(arr[i],arr[correctidx]);

//     }
//     for (int i=0;i<n;i++){
//         if(arr[i]!=i) cout<<i<<" ";
//     }
//     cout<<endl;     
// }



// given an array one to n only one repeated element find it
// int main(){
//     int arr[]={1,3,2,4,5,6,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int i=0;
//     while(i<n){
//         int correctidx=arr[i];
//         if(arr[correctidx]==arr[i]) { cout<<arr[i]; break;}
//         else swap(arr[i],arr[correctidx]);

//     }
  
//     cout<<endl;

// }

//more than one element is repeting
// int main() {
//     int arr[] = {1,2,3,4,2,3,7,8};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     int i = 0;
//     while(i < n){
//         int correctidx = arr[i] - 1;

//         if(arr[i] == arr[correctidx] || i == correctidx)
//             i++;
//         else
//             swap(arr[i], arr[correctidx]);
//     }

//     vector<int> ans;

//     for(int i = 0; i < n; i++){
//         if(arr[i] != i + 1)
//             ans.push_back(arr[i]);   // duplicate elements
//     }

//     cout << "Repeating elements: ";
//     for(int x : ans)
//         cout << x << " ";
// }



// first positive missing number
// int main(){
//     int arr[]={1,-1,4,2};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int i=0;
//     while(i<n){
//         int correctidx=arr[i]-1;
//         if(arr[correctidx]==i+1 ||arr[i]==i+1|| arr[i]<=0 || arr[i]>n   ) i++  ;
//         else swap(arr[i],arr[correctidx]);

//     }
//     for (int i=0;i<n;i++){
//         if(arr[i]!=i+1) cout<<i+1;
//    }
   
// }