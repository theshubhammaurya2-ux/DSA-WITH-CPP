#include<iostream>
#include<climits>
#include <vector>
using namespace std;


// //binary to decimaal
// int binarytodecimal(string &binary){
//     int n=binary.size();
//     int result=0;
//     for(int i=n-1;i>=0;i--){
//         char ch=binary[i];
//         int num=ch-'0';
//         result=result+num*(1<<(n-i-1));
//     }
//     return result;
// }
// int main(){
//    string str="001011";
//    cout<<binarytodecimal(str)<<"\n";
//    return 0;
//     } 



//decimal to binary
// string decimaltobinary(int num){
//    string result="";
//    while(num>0){
//     if(num%2==0){
//         result='0'+result;
//     }

//     else{
//         result='1'+result;
//     }
//     num=num/2;
//    }
//    return result;
// }
// int main(){
//     int n=4;
//     cout<<decimaltobinary(n);
// }



// count set bits  by inbuilt function
// int main(){
//     int n=4;
//     cout<<__builtin_popcount(8);
// }

// count setbits by logic method
// int countsetbits(int n){   //enterd n is in binary form
//     int count=0;
//     while(n>0){
//         count++;
//         n=(n&(n-1));
//     }
//     return count;
// }
// int main(){
//     int n=3;
//     cout<<countsetbits(3);
//     return 0;
// }



// given an integer n find the maximum power of two that is less than n
// //90 --> 64

// by normal method
// int main(){
//     int n=90;
//     int temp;
//     while(n>0){
//         temp=n;
//         n=n&n-1;
//     }
//     cout<< (temp);
// }



// by logical mwthod
// int maxpowerof2(int n){
    // n=n|n>>1;
    // n=n|n>>2;
    // n=n|n>>4;
    // n=n|n>>8;
    // n=n|n>>16;
//     cout<<((n+1)>>1);  // n+1/2
// }
// int main(){
//     int n=90;
//     maxpowerof2(n);
// }





// given an integer n flip all its bits like if given 1 then convert it into 0
// and vicaversa

// int flipbits(int n){
//     int temp=n;
//      n=n|n>>1;
//     n=n|n>>2;
//     n=n|n>>4;
//     n=n|n>>8;
//     n=n|n>>16;
//     return temp^n;
 
// }
// int main()
// {
//     int n=8;
//     cout<< flipbits(n);
// }


// calculate the minimum number of bit flips to convert from one number to another
// 5-->0101
// 11-->1011 so three flips required to convert 5 to 11
// int main(){
//     int x=23;
//     int y=32;
//     cout<<__builtin_popcount(x^y)<<endl;
//     return 0;
// }

//given an integer array where every element occurs twice
// except one occurs only once find that unique element
// int main(){
//     int arr[]={1,2,3,3,2,4,4,1,4,5,5,6,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int res=0;
//     for(int i=0;i<n;i++){
//         res=res^arr[i];
//     }
//     cout<<res<<endl;
//     return 0;
// }


// sare number two times aa rahe but two aise number hai jo ek times aa rahe
// void findunique(int *arr,int n){
//         int res=0;
//         for(int i=0;i<n;i++)  {res=res^arr[i];}
//         int temp=res;
//         int k=0;
//         while(true){
//             if((temp & 1)==1){
//                 break;
//             }
//             k++;
//         }
//         int retval=0;
//         for(int i=0;i<n;i++){
//             int num=arr[i];
//             if(((num >>k) & 1)==1) retval^=num;

//         }
//         cout<<retval<<endl;
//         res=retval^res;
//         cout<<res<<" ";
// }
// int main(){
//     int arr[]={1,1,2,2,3,4,5,5,6,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     findunique(arr,n);
// }



// given an integer array find the length of longest subarray
// which has maximum possible bitwise AND value
// int main(){
// int arr[]={1,2,3,4,4,5,5,5,6,6,6,7,6,6,6,18,18,18};
// int n=sizeof(arr)/sizeof(arr[0]);
// int ans=0;
// int count=0;
// int maxelement=INT_MIN;
// for(int i=0;i<n;i++){
//     if(arr[i]>maxelement){ maxelement=arr[i]; count +=1;}
//     else if(arr[i]==maxelement){  count++;}
//     ans=max(ans,count);
// }
// cout<<ans<<"\n";
// return 0;
// }



// modulo operator(%)

