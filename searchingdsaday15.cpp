#include<iostream>
#include<algorithm>
using namespace std;
int main(){

// normal method time complixity is o(n) 
//  int arr[7]={1,2,3,4,5,6,7};
//  int x;
//  cin>>x;
//   bool flag =false;
//  for (int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
//     if(arr[0]==x){
//         flag=true;
//     } }
//     if(flag=true) cout<<"present";
//     else  cout<<"not present";





   // bineary search algorithm better time complixity than o(n)  i.e  o(logn) 
   // applicable only in sorted sorted
//   int arr[7]={1,2,3,4,45,66,88};
//   int n=7; //sizeof(arr)/sizeof(arr[0]);
//   int target=66;
//  int li=0;
// int ui=n-1;
//  while(li<=ui){
//    int mid=li+(ui-li)/2;
//    if(arr[mid]==target) { cout<< mid ; break;}
//    else if(arr[mid]>target)  ui=mid-1;
//    else li=mid+1;         
// }        
//  }


// given an sorted array and a element given give its lower bound
// 1,2,34,45,67   element 39
// lower bound is 34
// int arr[7]={1,2,3,4,34,55,45};
// int target =45;
// int n=sizeof(arr)/sizeof(arr[0]);
// for(int i=0;i<n;i++){
//    if(arr[i]>target){ cout<<arr[i-1]; break;}
// }
// }

// method 2  // explanation is must take notes from notes
//   int arr[7]={1,2,3,4,45,66,88};
//   int n=7; //sizeof(arr)/sizeof(arr[0]);
//   int target=4;
//  int li=0;
// int ui=n-1;
// bool flag =false;
//  while(li<=ui){
//    int mid=li+(ui-li)/2;
//    if(arr[mid]==target) { 
//       flag=true;
//       cout<< arr[mid-1] ; break;}
//    else if(arr[mid]>target)  {ui=mid-1 ;} 
//    else li=mid+1;         
// }        
// if(flag==false) cout<<arr[ui];
//  }


// find first occurence in sorfted array

// int arr[12]={1,2,3,4,5,5,5,5,6,7,8,9};
// int target=5;
// int n=sizeof(arr)/sizeof(arr[0]);
// int li=0;
// int ui=n-1;

// bool flag=false;
// while(li<=ui){
//    int mid=li+(ui-li)/2;
//    if(arr[mid]==target) {
     //       if(arr[mid-1]!=target){
//           flag=true;
//           cout<<mid;
//           break;
//       }
//       else{
//          ui=mid-1;
//       }
//       }
//    else if(arr[mid]>target){ ui=mid-1;}
//    else li=mid+1;
// }
// if (flag==true)  cout<<"found";
// else cout<<"not found";




// in a sorted array of non negative number find smallest missing number

// by linear search
//  int arr[12]={0,1,2,3,4,6,7,8,9};
//  int n=12;
//  for(int i=0;i<12;i++){
//    if(i!=arr[i]){ cout<<i; break;}
//  }


// by binery search
// int arr[12]={0,1,2,3,4,6,7,8,9,10,11,12};
// int n=12;
// int li=0;
//  int ui=n-1;
//  int ans=-1;
//  while(li<=ui){
//    int mid=li+(ui-li)/2;
//    if(arr[mid]==mid) li=mid+1;
//    else{
//        ans=mid;
//       ui=mid-1;
//    }
//  }
//  cout<<ans;


// sqrt(x);
// if sqrt is presenrt
int arr[12]={0,1,2,3,4,6,7,8,9,10,11,12};
int x=121;
int li=0;
int ui=11;
while(li<=ui){
   int mid=li+(ui-li)/2;
  if(mid*mid==x) {cout<<arr[mid-1]; break;}
   
else if(mid*mid>x) {ui= mid-1;}
 else{  li=mid+1;
 }
}}
//int arr[2]={1,2,3,4,}




































































