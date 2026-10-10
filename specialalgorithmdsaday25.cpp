 #include<iostream>
 #include <vector>
 #include<climits>
using namespace std;

// prefix sum
int main(){
  int arr[]={1,2,3,4,5,5,10};
  int n=sizeof(arr)/sizeof(arr[0]);
  for (int i=1;i<n;i++){
     arr[i]+=arr[i-1];
  }
  bool flag=false;
  int idx=-1;
 for (int i=1;i<n;i++){
  if(2*arr[i]==arr[n-1]){
      flag=true;
      idx=i;
        break;
  }
  }
  if(idx!=-1)  cout<<"yes it can be partioned at"<<" "<<idx;
  else cout<<"cannot be partioned";
}

// int n=sizeof(arr)/sizeof(arr[0]);
// int pd=1;
// int p2=1;
// int noz=0;
// for (int i=0;i<n;i++){
//    if(arr[i]==0) noz++;
//    pd*=arr[i];
//    if(arr[i]!=0) p2*=arr[i];
// }
// if(noz>1) p2=0;
// for (int i=0;i<n;i++){
//    if(arr[i]==0) arr[i]=p2;
//    else arr[i]=pd/arr[i];
// }
// for (int i=0;i<n;i++){
// cout<<arr[i]<<" ";}
// }

//by prefix sum
// input 1,2,3,4
// output 24 12 8 6 
// int main(){
// vector<int> v;
// v.push_back(1);
// v.push_back(2);
// v.push_back(3);
// v.push_back(4);
// // v.push_back(9);
// int n=v.size();
// vector<int> pre(n);
// vector<int> surf(n);
// int p=v[0];
// pre[0]=1;
// for(int i=1;i<n;i++){
//    pre[i]=p;
//    p*=v[i];
// }
// p=v[n-1];
// for(int i=n-2;i>=0;i--){
//    pre[i]*=p;
//    p*=v[i];
// }
// for (int i=0;i<n;i++){
//   cout<<pre[i]<<" ";}
// }


// minimum penalty for a shop
// int main(){
// string customer="yyny";
// int n=customer.length();
// int pre[n+1];
// int suf[n+1];
//  pre[0]=0;
//  for (int i=0;i<n;i++){
//    pre[i+1]=(pre[i]+((customer[i]=='n')?1:0));
//  }
//  suf[n]=0;
//   for(int i=n-1;i>=0;i--){
//   suf[i]=(suf[i+1]+((customer[i]=='y')?1:0));
//   }
// int minpen=n;
// for(int i=0;i<=n;i++){
//    pre[i]+=suf[i];
//    int pen=pre[i];
//    minpen=min(minpen,pen);
// }
// for(int i=0;i<n;i++){
//    int pen=pre[i];
//    if(pen==minpen) cout<<i<<endl;
// }
// }


// leetcode 1402
// reducing dishes
// input satisfication [-1,-8,0,5,-9]
// output 14 = -1*1+0*2+5*3  (descarding the wrost dishes like -8 and -9 and count from 1)

// void sorta(vector<int> &v){
//     for(int i=0;i<v.size();i++){
//         for(int j=0;j<v.size()-1;j++){
//             if(v[j]>v[i]){
//               int  temp=v[i];
//               v[i]=v[j];
//               v[j]=temp;

//             }
//         }
//     }
// }

// int main(){
//     vector<int> v;
//     v.push_back(-1);
//     v.push_back(-8);
//     v.push_back(-2); 
//     v.push_back(-5);
//     v.push_back(-9);
//     int n=v.size();
//     sorta(v);
//     int suf[n];
//     suf[n-1]=v[n-1];
//     for(int i=n-2;i>=0;i--){
//         suf[i]=suf[i+1]+v[i];
//     }
    
//     // find the pivot index
//     int idx=-1;
//     for(int i=0;i<n;i++){
//         if(suf[i]>=0){
//             idx=i;
//             break;
//         }
//     }
//     if(idx==-1) cout<< 0;
//     // max ssum of like time coefficient 
//     else{
//     int x=1;
//     int maxsum=0;
//     for(int i=idx;i<n;i++){
//         maxsum+=v[i]*x;
//         x++;
//     }
//   cout<<maxsum<<" ";
// }
// }





// longest subsequence with limited sum
// leetcode 2389
// int main(){
//     vector<int> nums;
//     nums.push_back(4);
//     nums.push_back(5);
//     nums.push_back(2); 
//     nums.push_back(1);

//     vector<int> queries;
//    queries.push_back(3);
//    queries.push_back(10);
//    queries.push_back(21);    
//     int n1=nums.size();
//     int n2=queries.size();

//     vector<int> ans(n2);


//     for (int i=1;i<n1;i++){
//     nums[i]+=nums[i-1];
//     }

//     for(int i=0;i<n2;i++){
//         int len=0;
//         for (int j=0;j<n1;j++){
//                 if(nums[j]>queries[i])  break;
//                  len++;
//             }

//         ans[i]=len;
//     }
//     for(int i=0;i<n2;i++){
//         cout<<ans[i]<<" ";
//     }
// }


