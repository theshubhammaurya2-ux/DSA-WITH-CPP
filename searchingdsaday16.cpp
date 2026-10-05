#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
// int main(){


//peak index in mountain array //first increase then decrease
// method 1 take more time
// int arr[5]={1,3,5,4,2}; 
//      int n=5;
//        int idx=-1;
//        for(int i=1;i<n-1;i++){
//                 if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
//                     idx=i;
//                     break;
//                 }
//        } cout<< idx ;
//     }              

// //method 2
// int arr[5]={1,3,5,4,2}; 
// int n=5;
// int li=0;
// int ui=n-1;
// while(li<=ui){
//     int mid=li+(ui-li)/2;
//     if(arr[mid]>arr[mid+1]&& arr[mid]>arr[mid-1]){
//         cout<<mid;
//         break;

//     }
//     else if(arr[mid]>arr[mid+1]) ui=mid-1;
//     else li=mid+1;
// }




// search in rotated sorted array
//  sorted array {1,3,4,5,20,28,33}
// rotated array {28,33,1,3,4,5,20}   rotated by two steps
// int nums[7] {28,33,1,3,4,5,20};
// int target=3;
//  int n=7;
//         int li=0;
//         int ui=n-1;
//         int pivot=-1;
//         while(li<=ui){
//             int mid=li+(ui-li)/2;
//             if(nums[mid]<nums[mid+1]&&nums[mid]<nums[mid-1]){  
//                 pivot=mid;
//                 break;
//             }
//     else if(nums[mid]>nums[mid+1]&&nums[mid]>nums[mid-1]){ 
//         pivot=mid+1;
//         break;
//                 }
//     else if(nums[mid]>nums[ui]){ li=mid+1;}
//     else {ui=mid-1;}
// } 
// if(target>=nums[0] && target<=nums[pivot-1]){
//     li=0;
//     ui=pivot-1;
//     while(li<=ui){
//         int mid=li+(ui-li)/2;
//         if(nums[mid]==target) { cout<<  mid;  break;}
//         else if(nums[mid]>target) ui=mid-1;
//         else li=mid+1;
//     }
//     }
//     else {  
//     li=pivot;
//     ui=n-1;
//     while(li<=ui){
//         int mid=li+(ui-li)/2;
//         if(nums[mid]==target)  {cout<<  mid; break;}
//         else if(nums[mid]>target) ui=mid-1;
//         else li=mid+1;
//     }} 
// }


// fin k closest element to an element
// arr 11,2,3,4,6
// x=5
// k=3;
// closest 4,3,6

// int arr[7]={1,2,3,4,5,7,8};
// int x=2;
// int k=4;
//  int n=7;
//  vector <int> v(k);


//  if(arr[0]>x){
//     for(int i=0;i<k;i++){
//         v[i]=arr[i];
//     }
//     for(int i=0;i<k;i++){
//     cout<<v[i];}
//  }

//  if(x>arr[n-1]){
//     int i=n-1;
//     int j=k-1;
//    while(j>=0){
//         v[j]=arr[i];
//         i--;
//         j--;
//     }
//     for(int i=0;i<k;i++){
//     cout<<v[i];
//     }
//  }


//     int idx=0; // representing index of v
//     int mid=-1;
//     int li=0;
//     int ui=n-1;
//     bool flag =false;  //if x is present
//     //binary search;
//     while(li<=ui){
//          mid=li+(ui-li)/2;
//         if(arr[mid]==x){
//             flag=true;  //present
//             v[idx]=arr[mid];
//             idx++;
//             break;
//         }
//         else if(arr[mid]>x){ ui=mid-1;}
//         else {li=mid+1;}
    
//     }

//        int lb=ui;
//        int ub=li;
//        if(flag==true){
//         lb=mid-1;
//         ub=mid+1;
//        }
//        while(idx<k && lb>=0 && ub<=n-1){
//         int d1 = abs(x-arr[lb]);
//         int d2= abs(x-arr[ub]);
//         if(d1<=d2){  v[idx]=(arr[lb])  ; idx++; lb--;}
//         else {v[idx]=arr[ub]; idx++; ub++;}
//        }
//        if(lb<0){
//         while(idx<k){
//             v[idx]=arr[ub];
//              idx++;
//               ub++;
//             }
//        }
//        if(ub>n-1){
//         while(idx<k){  v[idx]=(arr[lb])  ; idx++; lb--;}
//        } 
//     sort(v.begin(),v.end());
//     for (int i=0;i<k;i++){
//     cout<<v[i];
//     }

// }

// sum of square number
// c=61;
// a=6;
// b=5;
// class Solution {
// public:
bool isperfectsquare(int n){
  int root =sqrt(n);
  if(root*root==n)  return true ;
  else return false;
}
bool judgeSquareSum(int c) {
        int x= 0;                     
        int y = c;
        while(x<=y){
            if(isperfectsquare(x) && isperfectsquare(y)){
                return true; 
            }
            else if(!isperfectsquare(y)){
                y=(int)sqrt(y)*(int)sqrt(y);
                x=c-y;
            }
            else {
                x=((int)sqrt(x)+1)*((int)sqrt(x)+1);
                y=c-x;
            }
        }
        return false;
    }




// #include <iostream>
// #include <cmath>
// using namespace std;

// bool judgeSquareSum(int c) {
//     long long left = 0;
//     long long right = sqrt(c);

//     while (left <= right) {
//         long long sum = left * left + right * right;

//         if (sum == c) {
//             return true;
//         }
//         else if (sum < c) {
//             left++;
//         }
//         else {
//             right--;
//         }
//     }

//     return false;
// }

// int main() {
//     int c;
//     cin >> c;

//     if (judgeSquareSum(c))
//         cout << "true" << endl;
//     else
//         cout << "false" << endl;

//     return 0;
// }


    
























