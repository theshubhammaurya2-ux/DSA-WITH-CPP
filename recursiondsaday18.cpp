#include<iostream>
using namespace std;

// int product(int a,int b){
//     return a*b;  // means function khtam
// }
// void sm(){
//     cout<<"shubham";
//     return;  // no need of return function in void
// }
// void sm(){
//     return;  // return functon ke niche koi printing kaam nhi  kare ga ffunction ends here
//     cout<<"shubham";   
// }
// int main(){
//     int a=2;int b=3;
//     cout<<product(a,b);

// }


// // infinite loop by recursion
// functiion calling itself
// void fun(){
//     cout<<"hello world";
//     fun();
// }
// int main(){
//     fun();
// }



//question function call itself
// prrint good morning n times by recursive
// void fact(int n){
//     if(n==0) return;
//     cout<<"good morning\n";
//     fact(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//    fact(n);
// }





// //print n to 1
// int numb(int n){
//   cout<<n<<endl;
//   if(n==1) return 1;
//   else return (numb(n-1));
// }
// int main(){
//   int n=7;
//   numb(n);
// }
// method 2  in void we can return nothing but not in int function
// void numb(int n){ 
//   if(n==0) return; 
//   cout<<n<<endl;
//   (numb(n-1));
// }
// int main(){
//   int n=7;
//   numb(n);
// }


// printing 1 to n
// void numb(int i,int n){
//   if(i>n) return;
//   cout<<i<<endl;
//    (numb(i+1,n));
// }
// int main(){
//   int n=7;
//   numb(1,n);
// }




// factorial by using recursion 
// int fact(int n){
//   if( n==1 || n==0) return 1;  // base case 
//     return n*(fact(n-1));  // recursive call   
// }
// int main(){
//     int n=5;
//    cout<< fact(n);
// }


// // sum from 1 to n; parametrised
//  void  suma(int sum,int n){
//   if(n==0) {cout<<sum<<endl; return;}
//   suma(sum+n,n-1);
// }
// int main(){
//   int n=5;
//  suma(0,n);
// }


// // // sum from 1 to n return type
// int suma(int n){
//   if(n==0||n==1) return 1;
//   else return(n+suma(n-1));
// }
// int main(){
//   int n=5;
//   cout<< suma(n);
// }



// // create a function which claculate a raised to power b
// int pow(int a,int b){
//   if(b==0) return 1;
//   else return (a*pow(a,b-1));
// }
// int main(){
//   int a=2;
//   int b=4;
//   cout<<pow(a,b);
// }

// // time and complexity by notes of recursion