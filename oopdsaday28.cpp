#include<iostream>
#include <vector>
#include<cmath>
#include<climits>
using namespace std;


// by maths method
// bool checkprime(int n){ 
// if (n==1) return false;
//     for(int i=2;i<=sqrt(n);i++){
//        
//         if(n%i==0) return false;
//     }
//     return true;
// }

// }
// int  main(){
//   cout<<checkprime(40);
// }


// check prime in 2d array diagonal and find largest prime no
// wrong
// int isprime(int n){
//         if(n==1) return false;
//         for(int i=2;i<sqrt(n);i++){
//             if(n%i==0) return false;
//         }
//         return true;
// }

// int mxprime(int arr){
//     int mx=0;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         if(isprime(arr[i][i])){
//             mx=max(mx,arr[i][i]);
//         }
//         if(isprime(arr[i][n-i-1])){
//             mx=max(mx,arr[i][n-i-1]);
//         }
//     }
// }

// int main(){
// int brr[3][3]={(1,2,3),(2,3,4),(5,6,7)}; 

// cout<<mxprime(brr[3][3]);

// }



// print factors by reducing time complexity'
// int main(){
//     int n=60;
//     for(int i=1;i<sqrt(n);i++){
//       if(n%i==0) cout<<i<<endl;
// }
//    for(int i=sqrt(n);i>=1;i--){
//        if(n%i==0){
//             if(n!=sqrt(n)){
//             cout<<n/i<<endl;}}
//     }
// }



// perfect number leetcode 507
//  28= sumof its factor  1+2+4+7+14

 
//     int main(){  
//     int n=28;
//     int sumoffactors=0;

//     for(int i=1;i<sqrt(n);i++){
//       if(n%i==0) {sumoffactors+=i;}
// }
//    for(int i=sqrt(n);i>=1;i--){
//        if(n%i==0){
//             if(n!=sqrt(n)){
//             sumoffactors+=n/i;}
//     }
//  }
//  cout<<sumoffactors;
//     if((sumoffactors-n)==n) cout<<"perfect number";
//     else  cout<<"not perfect number";
//     }

// smallest value after replacing with sum of prime number
//letcode 2507
// bool checkprime(int n){
//     if (n==1) return false;
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0) return false;
//     }
//     return true;
// }

// int smallestvalue(int n){
//     if(checkprime(n)) return n;
//     int sum=0;
//     for(int i=1;i<sqrt(n);i++){
//     if(n%i==0 && checkprime(i)){
//         int m=n;
//         while(m%i==0){
//             sum+=i;
//             m/=i;
//         }
//     }
// }
//    for(int i=sqrt(n);i>=1;i--){
//        if(n%i==0  && checkprime(n/i)){
//         int m=n;
//         while(m%(n/i)==0){
//             sum+=(n/i);
//             m/=(n/i);
//         }
//     }
//  }
//  if(sum==n) return n;
// return smallestvalue(sum);

// }
// int main(){
//     int n=60;
//     cout<<smallestvalue(15);

// }

//count primes
// leetcode 204


//correct but time limit exceeded
// bool checkprime(int n){
//     if (n==1) return false;
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0) return false;
//     }
//     return true;
// }

// int countprimes(int n){
//     int count=0;
//     for(int i=2;i<n;i++){
//         if(checkprime(i)) count++;
//     }
//     return count;
// }
// int main(){
//     int n;
//     cout<<countprimes(10);
// }



// sieve of eratosthenesis
//given an integer n return number of prime strictly less than n
// void fillsieve(vector<bool>&sieve){
//     int n=sieve.size()-1;
//     for(int i=2;i<sqrt(n);i++){
//             for(int j=i*2;j<=n;j+=i){
//                 sieve[j]=0;
//             }
//     }
// }
// int countprimes(int n){
//     if(n==2) return 0;
//     n=n-1;
//     int count=0;
//     vector<bool> sieve(n+1,1);  // 1 means prime 0 means not prime
//     fillsieve(sieve);
//     sieve[0]=0;
//     sieve[1]=0;
//     for(int i=2;i<=n;i++){
//         if(sieve[i]==1) count++;
//     }
//     return count;
// }
// int main(){
//     cout<<countprimes(10);
// }


// leetcode 2521
// input arr=[2,4,3,7,10,6]
// product 2*4*3*7*10*6=10080 and find prime 2^5 * 3^2 * 5 *7
// then number of distinct prime number is 4
// output 4

// void fillsieve(vector<bool>&sieve){
//     int n=sieve.size()-1;
//     for(int i=2;i<sqrt(n);i++){
//             for(int j=i*2;j<=n;j+=i){
//                 sieve[j]=0;
//             }
//     }
// }
// int  distinctprimefactors(vector<int> &nums){
//   int n=nums.size();
//     int mx=-1;
//     for(int i=0;i<n;i++){
//         mx=max(mx,nums[i]);
//     }
//     vector<bool> sieve(mx+1,1);   //1 means prime
//     if(mx+1>0) sieve[0]=0;
//   if(mx+1>1)  sieve[1]=0;
//   fillsieve(sieve);
//   vector<int> primes;
//   for(int i=2;i<=mx;i++){
//     if(sieve[i]==1)  primes.push_back(i);
//   }
//   vector<bool> taken(primes.size(),0);
//   for(int i=0;i<nums.size();i++){
//     int ele=nums[i];
//     for(int j=0;j<taken.size();j++){
//         if(primes[j]>nums[i]) break;
//         if(ele%primes[j]==0)  taken[j]=1;
//     }
//   }
//      int count =0;
//      for(int i=0;i<taken.size();i++){
//         if(taken[i]==1) count++;
//      }
//      return count;
// }
// int main(){
//    vector <int> arr={2,3,4,7,10,6};
//     cout<<distinctprimefactors(arr);
// }




// leetcode 650
//two keys keyboard