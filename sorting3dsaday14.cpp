#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;



int main(){
  // check majority element present grater than n/2 times
  // this code is correct but time limit exceded  
//     int arr[7];
//     for (int i=0;i<7;i++){
//         cin>>arr[i];
//     }

// for(int i=0;i<7;i++){
//   int  count=1;
//    for(int j=i+1;j<7;j++){
//     if(arr[i]==arr[j]) count++;
//    }
//    if(count>(7/2)) cout<<arr[i];
// }

// easy way 
// vector<int> v;
// v.push_back(2);
// v.push_back(2);
// v.push_back(1);
// v.push_back(1);
// v.push_back(1);
// v.push_back(2);
// v.push_back(2);
// int n=v.size();
// sort(v.begin(),v.end());
// cout<<v[n/2];

// print like sortest element replaced by 0 and continuous -1 -2 -3 -4 
// 0 1 2 3 4 6 9 
// 0 -1 -2 -3 -4 -5 -6 
// vector<int> v;
// v.push_back(2);
// v.push_back(6);
// v.push_back(1);
// v.push_back(9);
// v.push_back(0);
// v.push_back(3);
// v.push_back(4);
// int n=v.size();
// for(int i=0;i<=n-1;i++){
//   for(int j=i+1;j<=n-1;j++){
//     if(v[i]>v[j]){
//       int temp=v[i];
//       v[i]=v[j];
//       v[j]=temp;

//     }
//   }
// }
// for (int i=0;i<=n-1;i++){
//   cout<<v[i]<<" ";
// }
// int a=0;
// for(int i=0;i<n;i++){
//   v[i]=a;
//   a--;
// }
// cout<<endl;
// for (int i=0;i<=n-1;i++){
//   cout<<v[i]<<" ";
// }


// }
// // 19 12 23 8 16
// // 3  1  4  0  2
// int arr[]={19,12,23,8,16};
// for(int i=0;i<5;i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// vector<int> v(5,0);
// int n=5;
// int x=0;
// for(int i=0;i<n;i++){
//   int min=INT_MAX;
//   int mindx=-1;
//   for(int j=0;j<=n-1;j++){
//       if(v[j]==1) continue;
//       else {
//             if(min>arr[j]){
//                 min=arr[j];
//                  mindx=j;
//                      }
//             }
//         }
//   arr[mindx]=x;
//   v[mindx]=1;
//   x++;
// }
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// }
// leetocde 455
// cookies and children   greed array 10 9 8 7 cooky araay 5 6 7 8
// vector<int> v;
//  v.push_back(2);
//  v.push_back(6);
//  v.push_back(1);
//  v.push_back(9);
//  v.push_back(5);
//  v.push_back(3);
//  v.push_back(4);
// vector<int> g;
// g.push_back(2);
// g.push_back(2);
// g.push_back(1);
// g.push_back(3);
// g.push_back(2);
// g.push_back(2);
// g.push_back(1);
// sort(v.begin(),v.end());
// sort(g.begin(),g.end());
// int i=0;
// int j=0;
// int count=0;
// while(i<g.size() && j<v.size()){
//   if (v[j]>=g[i]){
//     count++;
//     i++;
//     j++;
//     }
//     else j++;
// }
// cout<< count;

// }
// question 
// sort the array by subtracting some constant k from each element
 float max (float a,float b){
  if(a>=b) return a;
  else return b;

 }
float min(float a,float b){
  if(a<=b) return a;
  else return b;
  
 }


int main(){
int arr[]={5,3,10};
 int n=3;
 for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";

 }

 cout<<endl;

 float kmin=(float)( INT_MIN);
 float kmax=(float)(INT_MAX);
 bool flag=true;
 for(int i=0;i<n-1;i++){
  if(arr[i]>=arr[i+1]){ // kkmin
     kmin=max(kmin,(arr[i]+arr[i+1])/2.0);
    }
  else{
    kmax=min(kmax,(arr[i]+arr[i+1])/2.0);

  }
  if (kmin>kmax){
    flag=false;
    break;
  }
 }

 if(flag==false){
  cout<<-1;

}
else if (kmin==kmax){
  if(kmin-(int)kmin==0){
    cout<<"there is only one value of k"<<kmin;
  }
  else cout<<-1;
}
else{
  if(kmin=-(int)kmin>0){
    kmin=(int)kmin+1;
  }
  cout<<"range of k is  "<<kmin<<" "<<(int)kmax;

}



}
}