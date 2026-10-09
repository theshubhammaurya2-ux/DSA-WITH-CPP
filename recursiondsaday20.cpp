#include<iostream>
#include<climits>
#include<vector>
#include<string>
using namespace std;


// // // tower of hanoi
// void toh(int n,char s,char h,char d){
//     if(n==0) return ;
//     toh(n-1,s,d,h);
//     cout<<s<<"->>"<<d<<endl;
//     toh(n-1,h,s,d);
// }
// int main(){
//     int n=2;
//     toh(n,'a','b','c');
// }


// // display array by recursion
// void displayarr(int arr[],int n,int idx){
//     if(idx==n) return;
//     cout<<arr[idx]<<" ";
//     displayarr(arr,n,idx+1);
// }
//  int main(){
//      int arr[]=
//      {1,2,3,4,5};
//      int n=5;
//      int idx=0;
//      displayarr(arr,n,idx);
//  }

// max value of array
// int maxarr(int arr[],int n,int idx,int max){
//     if(n==idx){
//         cout<<max;
//     }
//    if(max<arr[idx]) max=arr[idx];
//    return maxarr(arr,n,idx+1,max);
// }
// int main(){
//     int arr[]={1,2,33,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int idx=0;
//     int max=INT_MIN;
//     maxarr(arr,n,idx,max);

// }


// remove character from string and print as it is
// shubham maurya 
// shubhm mury
// void(char s){

// }


// /method1
// int main(){
//     string str="shubham maurya ";
//     string str2="";
//     for (int i=0;i<str.length();i++){
//         if(str[i]!='a') str2+=str[i];

//     }
//         cout<<str2;
    
// }


// method2
// void removechar(string ans ,string giv){
//     if(giv.length()==0){
//         cout<<ans;
//         return;
//     }
//     char ch=giv[0];
//     if(ch=='h') removechar(ans,giv.substr(1));
//     else removechar(ans+ch,giv.substr(1));
// }
// int main(){
//     string str="physics wallah";
//     removechar(" ",str);
// }



// printing subset of string
// void substring(string ans ,string original){
//     if(original==""){
//         cout<<ans<<" ";
//         return ;
//     }
//    char ch=original[0];
//     substring(ans+ch,original.substr(1));
//     substring(ans,original.substr(1));
// }
// int main(){
//     string str="abc";
//     substring("",str);
// }



// storing subset of string
// void substring(string ans ,string original,vector<string> &v){
//     if(original==""){
//        v.push_back(ans);
//         return ;
//     }
//    char ch=original[0];
//     substring(ans+ch,original.substr(1),v);
//     substring(ans,original.substr(1),v);
// }
// int main(){
//     string str="abc";
//     vector<string> v;
//     substring("",str,v);
//    for(string ele: v){
//     cout<<ele<<endl;
//    }
// }



// //printing subset of array
// void substring(int arr[],int n,int idx,vector<int> v){
//     if(idx==n){
//       for (int i=0;i<v.size();i++){
//             cout<<v[i]<<" ";
//       }
//       cout<<endl;
//       return;
//     }
//     int ans=arr[idx];
//     substring(arr,n,idx+1,v);
//     v.push_back(ans);
//     substring(arr,n,idx+1,v);
// }

// int main(){
//    int arr[]={1,2,3};
//     vector<int> v;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int idx=0;
//     substring(arr,n,idx,v);
// }


//dubliicate  element subset
// void storesubset(string ans,string original,vector<string> &v,bool flag){
//    if(original==""){
//       v.push_back(ans);
//       return;
//    }
//    char ch=original[0];
//    if(original.length()==1){
//       if(flag==true) storesubset(ans+ch,original.substr(1),v,true);
//       storesubset(ans,original.substr(1),v,true);
//       return;
//    }
//    char dh=original[1];
//    if(ch==dh){
//       if(flag==true)storesubset(ans+ch,original.substr(1),v,true);
//       storesubset(ans,original.substr(1),v,false);
//    }
//    else{
//        if(flag==true)storesubset(ans+ch,original.substr(1),v,true);
//       storesubset(ans,original.substr(1),v,true);
//    }
// }
// int main(){
//    string str="aab";
//    vector<string> v;
//    storesubset("",str,v,true);
//    for(int i=0;i<v.size();i++){
//       cout<<v[i]<<endl;
//    }
// }

// print all increasing subsequence of length k from first n narural number



// // permutation

void permutation(string ans,string original ){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<original.length();i++){
        char ch=original[i];
        string left=original.substr(0,i);
        string right=original.substr(i+1);
        permutation(ans+ch,left+right);

    }
}
int main(){
    string  str="abc";
    permutation("",str);
}













