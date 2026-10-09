#include<iostream>
#include<vector>
#include<string>
using namespace std;

//    int arr[]={1,2,3,4};
//      int n=sizeof(arr)/sizeof(arr[0]);
//      for(int i=0;i<n;i++){  //start of subarray
//         for(int k=i;k<n;k++){
//             for(int j=i;j<=k;j++){
//                 cout<<arr[j];;
//             } cout<<endl;
//         }
//     }

//subsequence subset in order  mmens continuous
//subsequence of subarray  element  must unique

// void subArray(vector<int>v,int arr[],int n,int idx){
//     if(idx==n){
//         for(int i=0;i<v.size();i++){
//             cout<<v[i];
//         }
//         cout<<endl;
//         return;
//     }
//     subArray(v,arr,n,idx+1);
//     if(v.size()==0){
//     v.push_back(arr[idx]);
//     subArray(v,arr,n,idx+1);
// }
//     else if (arr[idx-1]==v[v.size()-1]  ){
//           v.push_back(arr[idx]);
//     subArray(v,arr,n,idx+1);
//     }
// }
// int main(){
//  vector<int> v;
// int arr[]={1,2,3,4};
// int n=sizeof(arr)/sizeof(arr[0]);
// subArray(v,arr,n,0);
// }


// palindrome using recursion
// bool pallindrome(int i,int j,string str){
//     if(i>j) return true;
//         if(str[i]==str[j ]){
//            return pallindrome(i+1,j-1,str);
//         }
//         else return false;
//     }
// int main(){
//  string str="sos";
//  cout<<pallindrome(0,str.length()-1,str);
// }



// greatest common divisor
// int gcd(int a,int b){
//     for(int i=min(a,b);i>=2;i--){
//         if(a%i==0 && b%i==0){
//             return i;
//         }
//     }
//     return 1;
// } 
// int main(){
//     int a=20;int b=60;
//    cout<< gcd(a,b);
// }
 
// gcd by euclid division method  time complexity o(log(a+b))
// int gcd(int a,int b){
//   if (a==0) return b;
//     else return (b%a,a);
// }
// int main(){
//     int a=27;
//     int b=45;
//     cout<<gcd(min(a,b),max(a,b));
// }

//binary number but consecutive one is not there
// void genratebin(string s,int n){
//     if(n==0){
//     cout<<s<<endl;
//     return;
//   }
//   genratebin(s+'0',n-1);
//   if(s=="" || s[s.length()-1]=='0'){
//   genratebin(s+'1',n-1);}
// }
//  int main(){
//   int n=3;
//   genratebin("",n);
//  }
     
// leetcode 39
//combination sum
// input candidate [2,3,6,7]  target=[7]  (repetition  allowed)
// so ans=[2,2,3] ,[7]

// void combnsum(vector<int> c,vector<int>v,int t,int idx){
//   int n=v.size(); 
//   if (t==0){
//     for(int i=0;i<c.size();i++){
//       cout<<c[i];   
//     }cout<<endl; return;
//    }
//   if(t<0)  return;
//   for(int i=idx;i<n;i++){
//     c.push_back(v[i]);
//     combnsum(c,v,t-v[i],i);
//     c.pop_back();
// } }

// int main(){
//   vector<int> v={2,3,5};
//   int t=8;
//   vector<int> c;
//   combnsum(c,v,t,0);
// }


// // //generate parenthesis
// void parenthesis(string str,int countr,int countL,int maxbracket){
//     if(countr==maxbracket && countL==maxbracket) {
//         cout<<str<<endl;
//         return;
//     }
//     if(countr>maxbracket || countL>maxbracket)  return;
//     if(countr<maxbracket){
//     parenthesis(str+'(',countr+1,countL,3);}
//     if(countL<countr){    
//     parenthesis(str+')',countr,countL+1,3);
// }}
// int main(){
//     parenthesis(" ",0,0,3);
// }


// kth symbol of grammmer
// 0 is replaced by 0 and 1;
// similary 1 is replaced by 1 and 0;
// int kthgrammer(int n,int k){
//     if(n==1) return 0;
//     if(k%2==0){
//         int prevans=kthgrammer(n-1,k/2);
//         if(prevans==0) return 1;
//         else return 0;
//     }
//     else {
//          int prevans=kthgrammer(n-1,k/2);
//          return kthgrammer(n-1,k/2+1);
//     }
// }
// int main(){
   //     int n=3;
//     int k=3;
//     cout<<kthgrammer(n,k);
// }

// leetcode 38
//count and say
// string  cas(int n){
//     if(n==1) return "1";
//     string str=cas(n-1);
//     string ztr="";
//     int freq=1;
//     char ch=str[0];
//     for(int i=0;i<str.length();i++){
//        char  dh=str[i];
//         if(ch==dh){
//             freq++;
//         }
//         else {
//             ztr+=(to_string(freq)+ch);
//             freq=1;
//                 ch=dh;
//         }
//     }
//      ztr+=(to_string(freq)+ch);
//     return ztr;

// }
// int main(){
//     int n=4;
//     cout<<cas(n);
// }

// leetcode 60
// permutation sequence
void permutation(vector<string>&v,string ans,string original){
    if(original==""){
        v.push_back(ans);
        return;
    }
    for(int i=0;i<original.length();i++){
        char ch=original[i];
        string left=original.substr(0,i);
        string right=original.substr(i+1);
        permutation(v ,ans+ch,left+right);
    }
}

// // get kth permutation
string getpermutation(int n,int k){
    string str="";
    for(int i=0;i<=n;i++){  
        str+=to_string(i);
    }
    vector<string> v;
    permutation(v,"",str);
    return v[k-1];
}
  
int main(){
    string str="123";
    vector<string> v;
    permutation(v,"",str);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}
//
//
//
//