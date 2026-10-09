#include<iostream>
#include<vector>
using namespace std;


// merge two sorted array and resultant is also sorted
// void merge(vector<int>&a,vector<int> &b,vector<int> &res){
//    int i=0;
//    int j=0;
//    int k=0;
//    while(i<a.size() && j<b.size()){
//     if(a[i]<b[j]) res[k++]=a[i++];  // res[k]=a[i]  i++ k++  similar to this
//     else        res[k++]=b[j++];  // res[k]=b[j]  k++; j++;
        
// }

//     if(i==a.size())  while(j<b.size())  res[k++]=b[j++];
//     if(j==b.size())  while(i<a.size())   res[k++]=a[i++];
   
// }
// int main(){
//    int arr[]={1,3,5,7,9};
//    int n1=sizeof(arr)/sizeof(arr[0]);
//    int brr[]={2,4,8,12,14};
//    int n2=sizeof(brr)/sizeof(brr[0]);
//    vector<int> a(arr,arr+n1);
//    vector<int> b(brr,brr+n2);
//    vector<int> res(n1+n2);
//    merge(a,b,res);
//    for(int i=0;i<res.size();i++){
//     cout<<res[i]<<endl;
//    }
// }
   
 // merge sort algorithm
// void merge(vector<int>&a,vector<int> &b,vector<int> &res){
//    int i=0;
//    int j=0;
//    int k=0;
//    while(i<a.size() && j<b.size()){
//     if(a[i]<=b[j]) res[k++]=a[i++];  // res[k]=a[i]  i++ k++  similar to this
//     else        res[k++]=b[j++];  // res[k]=b[j]  k++; j++;    
// }
//     if(i==a.size())  while(j<b.size())  res[k++]=b[j++];
//     if(j==b.size())  while(i<a.size())   res[k++]=a[i++];
// }
// void mergesort(vector<int>&v){
//     int n=v.size();
//     if(n==1) return;
//     int n1=n/2,n2=n-n/2;
//     vector<int> a(n1),b(n2);
//     for(int i=0;i<n1;i++){
//         a[i]=v[i];
//     }
//      for(int i=0;i<n2;i++){
//         b[i]=v[i+n1];
//      }
//      mergesort(a);
//      mergesort(b); 
//     merge(a,b,v);
//     a.clear();
//     b.clear();
// }
// int main(){
//     int arr[]={5,1,3,0,4,9,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     vector <int> v(arr,arr+n);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" " ;
//     }
//     cout<<endl;

//     mergesort(v);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" "; 
//     }
// }



// count inversion pair 
// 5 1 3 0 4 9 6  inversion pair 5 1  5 3 5 4  9 6  1 0 3 0


// method 1
// int main(){
// int arr[]={ 5, 1, 3 ,0 ,4 ,9 ,6};
// int n=sizeof(arr)/sizeof(arr[0]);
// vector<int> v(arr,arr+n);
// for(int i=0;i<v.size();i++){
//   cout<< v[i]<<" ";
// }
// cout<<endl;
// int count=0;
// for(int  i=0;i<n-1;i++){
//     for(int j=i+1;j<n;j++){
//         if(v[i]>v[j]) count++;
//     }
// }
// cout<<count;
// }

  //method2
  int count=0;
  int inversion(vector<int> &a,vector<int>b){
    int i=0,j=0,counts=0;
    while(i<a.size() && j<b.size()){
            if(a[i]>b[j]) {counts+=(a.size()-i); j++;}
            else i++;
    }

    return counts;

  }

  void merge(vector<int> &a,vector<int>&b,vector<int>& res){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j])  res[k++]=a[i++];
        else  res[k++]=b[j++];
    }
    if(i==a.size())  while(j<b.size())  res[k++]=b[j++];
    if(j==b.size())   while(i<a.size())  res[k++]=a[i++];
  }

  void mergesort(vector<int>&v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2,n2=n-n/2;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
     for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
     }
     mergesort(a);
     mergesort(b); 
     count+=inversion(a,b);
    merge(a,b,v);
    a.clear();
    b.clear();
}

int main(){
    int arr[]={5,1,3,0,4,9,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergesort(v); 
  for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<count;
}
