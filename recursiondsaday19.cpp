#include<iostream>
#include<math.h>
#include<string>
using namespace std ;


// fibnocci series by recursion
// int fib(int n){
//     if(n==2 || n==1) return 1;
//      else return (fib(n-1)+fib(n-2));
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//    cout<< fib(i)<<" ";
//     }
// }
//time complexity of fibnocci series by recursion
//





// factorial of n;
// int fact(int n){
//     if(n==0) return 1;
//     else return (n*fact(n-1));
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<fact(n);
// }


// question of recursion
//method 1
// // power function (logarithmic)
// int pow(int a,int n){
//     if(n==0) return 1;
// else return (a*(pow(a,n-1)));
// }
// int main(){
//     int n,a; 
//     cin>>a;
//     cin>>n;
//    cout<< pow(a,n);
// }


// method 2;
// int pow(int a,int n){
//     if(n%2==0){
//     if(n==1) return a;
//     int ans =pow(a,n/2)*pow(a,n/2);
//      return ans;
// }
// else 
// {
//    if(n==1) return a;
//     int ans =pow(a,n/2)*pow(a,n/2)*a;
//      return ans;
// }}
// int main(){
//     int n,a; 
//     cin>>a;
//     cin>>n;
//    cout<< pow(a,n);
// }



// stair case
// one step or two step or either  combination 
//  int  stair(int n){
//     if (n==2) return 2;
//     if(n==1) return 1;
//     return stair(n-1)+stair(n-2);
//  }
// int main(){
//     cout<<stair(5);
// }


// maze path 
// only move left and right 
// write for 3 cross 3
// int mz(int sr,int sc,int er,int ec){
//     if (sr>er || sc>ec) return 0 ;
//      if (sr==er &&sc==ec) return 1;
//    int rightways=mz(sr,sc+1,er,ec);
//    int downways =mz(sr+1,sc,er,ec);
//    int totalways=rightways+downways;
//    return totalways;
// }
// int main(){
//     cout<<mz(1,1,3,3);
// }


// //printing maze path 
// int mz(int sr,int sc,int er,int ec){
//     if (sr>er || sc>ec) return 0 ;
//      if (sr==er &&sc==ec) return 1;
//    int rightways=mz(sr,sc+1,er,ec);
//    int downways =mz(sr+1,sc,er,ec);
//    int totalways=rightways+downways;
//    return totalways;
// }
// void printpath(int sr,int sc,int er,int ec,string s){
//     if (sr>er || sc>ec) return  ;
//      if (sr==er && sc==ec){
//         cout<<s<<endl;
//         return ;
//      }
//     printpath(sr,sc+1,er,ec,s+'r'); //right
//     printpath(sr+1,sc,er,ec,s+'d'); //down 
// }
// int main(){
//     printpath(1,1,3,3,"");
// }



// maze question by reverse method
// int mz(int sr,int sc){
//     int er=1,ec=1;
//     if (sr<er || sc<ec) return 0 ;
//      if (sr==er &&sc==ec) return 1;
//    int rightways=mz(sr,sc-1);
//    int downways =mz(sr-1,sc);
//    int totalways=rightways+downways;
//    return totalways;
// }
// int main(){
//     cout<<mz(3,3);
// }



// pre in post
// very very important
//kaam -> pre
// call
// kaam --> post
// call
// void pip(int n){
//     if(n==0) return;
//     cout<<"pre"<<n<<endl;
//     pip(n-1);
//     cout<<"in"<<n<<endl;
//     pip(n-1);
//     cout<<"post"<<n<<endl;
// }
// int main(){
//     pip(7);
// } 


//print zig-zag
// 1    111
// 2    211121112
// 3    3211121112321112111232111211123211121112
// void pip(int n){
//     if(n==0) return;
//     cout<<n;
//     pip(n-1);
//     cout<<n;
//     pip(n-1);
//     cout<<n;
// }
// int main(){
//     pip(1);
// } 













































