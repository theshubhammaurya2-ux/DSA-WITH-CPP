#include<iostream>
#include<vector>
#include<stack>
#include<climits>
using namespace std;


// balanced brackets
// bool isbalancedbrackets(string str){
//     stack<char> st;
//     for(int i=0;i<str.length();i++){
//         if(str[i]=='('){ st.push(str[i]); }

//         else{ //str[i]!=')'
//             if(st.size()==0) return false;
//             else st.pop();
//         }

//     }
//  if(st.size()==0) return true;
//  else return false;
// }

// int main(){
//     string s1="()()()";
//     string s2="(())()";
//     string s3="((()))()()";
//    cout<<isbalancedbrackets(s3);
// }



// remove consecutive dublicate
//   void removeconsecutivedub(string str){
//     stack<char> st;
//     for(int i=0;i<str.length();i++){
//         if(st.size()==0){
//             st.push(str[i]);
//         }

//         else{
//             if(str[i]==st.top()) continue;
//             else(st.push(str[i]));
//         }
//     }
//  // display after removing character   
// stack <char> tst;
//     while(st.size()!=0){
//         tst.push(st.top());
//         st.pop();
//     }
//     while(tst.size()!=0){
//      cout<<tst.top()<<" ";
//      tst.pop();
//     }
//   }


// int main(){
//     string s1="aaabbccddefgg";
//     string s2="aabcdddpdpdpdpjj";
//     string s3="aabcdffgrft";
//   removeconsecutivedub(s1);
// }



// next greater element
// arr = 3 1 2 5 4 6 2 3
// ans = 5 2 5 6 6 -1 3 -1
// normal method
// int main(){
//     int arr[]={ 3 ,1 ,2 ,5 ,4 ,6 ,2 ,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     // next greater element  // tc=o(n^2)  sc=o(1)
//     int nge[n];
//     for(int i=0;i<n;i++){
//         nge[i]=-1;
//          for(int j=i+1;j<n;j++){
//             if(arr[j]>arr[i]){
//                 nge[i]=arr[j];
//                 break;
//             }
//         }
//     }
// for(int i=0;i<n;i++){
//         cout<<nge[i]<<" ";
//     }
// }

// method 2
// using stack  // sc=o(n)  tc=o(n)
// int main(){
//     stack<int> st;
//      int arr[]={ 3 ,1 ,2 ,5 ,4 ,6 ,2 ,3};
//      int n=sizeof(arr)/sizeof(arr[0]);
//      int ans[n];
//      ans[n-1]=-1;
//      st.push(arr[n-1]);
//      for(int i=n-2;i>=0;i--){
//            // pop all element samller than arr[i]
//             while(st.size()>0 && st.top()<=arr[i]){
//                 st.pop();
//             }
//             //mark the ans in ans array
//             if(st.size()==0){
//                 ans[i]=-1;
//             }
//             else ans[i]=st.top();
//             // push the arr[i]
//             st.push(arr[i]);
//    }

//    for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }
// }


// // previous greater element
// int main(){
//     stack<int> st;
//      int arr[]={ 3 ,1 ,2 ,5 ,4 ,6 ,2 ,3};
//      int n=sizeof(arr)/sizeof(arr[0]);
//      int ans[n];
//     ans[0]=-1;
//     st.push(arr[0]);
//     for(int i=1;i<n;i++){
//           // pop all element
//         while(st.size()>0 && st.top()<=arr[i]){
//             st.pop();
//         }

//         // reporting ans
//         if(st.size()==0) {
//             ans[i]=-1;
//         }
//         else{
//             ans[i]=st.top();
//         }
      
//         //filling stack
//        st.push(arr[i]);

//     }
 
//    for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }
// }


// stock span problem
// input {100,80,60,70,60,75,85}
//output  {1,1,1,2,1,4,6}

// int main(){
//     int arr[]={100,80,60,81,70,60,75,85};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int pgi[n];
//      stack<int> st;
   
//      pgi[0]=-1;
//      st.push(0);
//      for(int i=1;i<n;i++){
//            // pop all element
//          while(st.size()>0 && arr[st.top()]<=arr[i]){
//              st.pop();
//          }
//          // reporting ans
//          if(st.size()==0) {
//              pgi[i]=-1;
//          }
//          else{
//              pgi[i]=st.top();
//          }
    
//          //filling stack
//         st.push(i);
//      }
//    vector<int> v;
//    for(int i=0;i<n;i++){
//          v.push_back(i-pgi[i]);
//    }


//     for(int i=0;i<n;i++){
//          cout<<arr[i]<<" ";
//      }
//      cout<<endl;
//  for(int i=0;i<n;i++){
//          cout<<v[i]<<"  ";
//      }
//  }


// largest rectangle in histogram
// leetcode 84
// int main(){

//  int arr[]={2,1,5,6,2,3};
//  int n=sizeof(arr)/sizeof(arr[0]);

// //next smaller index
//   stack<int> st;
//   int nsi[n];
//   nsi[n-1]=n;
//   st.push(n-1);
//   for(int i=n-2;i>=0;i--){
//    while( st.size()>0 && arr[st.top()]>=arr[i]){  st.pop();
//        }
//     if(st.size()==0) { nsi[i]=n; }
//     else{ nsi[i]=st.top(); }
//     st.push(i);
//   }


//   //previous smalller index
//   stack<int> gt;
//   int psi[n];
//   psi[0]=-1;
//   nsi[0]=-1;
//   st.push(0);
//   for(int i=1;i<n;i++){
//     while(gt.size()>0 && arr[gt.top()]>arr[i]){
//    gt.pop();}


//     if(gt.size()==0)  psi[i]=-1;
//     else psi[i]=gt.top();
//     gt.push(i);
//   }



// int maxarea=0;
// for(int i=0;i<n;i++){
//     int height=arr[i];
//     int breadth=nsi[i]-psi[i]-1;
//     int area=height*breadth;
//     maxarea=max(maxarea,area);
// }

// cout<<maxarea;
//  }




