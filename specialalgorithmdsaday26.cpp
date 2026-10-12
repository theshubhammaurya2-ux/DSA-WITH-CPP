#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){


    // sliding window 
     

    //maximum sun subarray of size k

    // /method 1
    // int arr[9]={7,1,2,5,8,4,9,3,6};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // int k=3;
//     int maxsum=INT_MIN;
//     int maxidx=-1;
//     for(int i=0;i<=n-k;i++){
//         int sum=0;
//         for(int j=i;j<k+i;j++){
//             sum+=arr[j];
//         }
//         if(sum>maxsum){ maxsum=sum; maxidx=i;}
//     }  
//      cout<<maxsum<<endl<<maxidx;
// }

//method 2 sliding window algorithm
//     int arr[9]={7,1,2,5,8,4,9,3,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int k=3;
//   int maxsum=INT_MIN;
//   int prevsum=0;
//   int maxidx=0;
//     for (int i=0;i<k;i++){
//         prevsum+=arr[i];
//     }
// int i=1;
// int j=k;
// maxsum=prevsum;

// while(j<n){
//    prevsum=prevsum-arr[i-1]+arr[j];
//     if(prevsum>maxsum){ maxsum=prevsum; maxidx=i;}

//     i++;
//     j++;
    
// }
// cout<<maxsum<<endl<<maxidx;
// }


// TIMECOMPLEXITY o(n)



//leetcode 1052
// grumpy bookstore owner
//  vector<int>customer;
//  customer.push_back(1);
//  customer.push_back(0);
//  customer.push_back(1);
//  customer.push_back(2);
//  customer.push_back(1);
//  customer.push_back(1);
//  customer.push_back(7);
//  customer.push_back(5);

//   vector<int> grumpy;
// grumpy.push_back(0);
// grumpy.push_back(1);
// grumpy.push_back(0);
// grumpy.push_back(1);
// grumpy.push_back(0);
// grumpy.push_back(1);
// grumpy.push_back(0);
// grumpy.push_back(1);

// int minutes=3;
// int k=minutes;
// int n=customer.size();
// int prevloss=0;
// for(int i=0;i<k;i++){
//     if (grumpy[i]==1) {prevloss+=customer[i];}
// }  

// int maxloss=prevloss;
// int maxidx=0;
// int i=1;
// int j=k;
// while(j<n){
//     int currloss=prevloss;
//     if(grumpy[j]==1) currloss+=customer[j];
//     if(grumpy[i-1]==1)  currloss-=customer[i-1];
//     if(currloss>maxloss) {maxloss=currloss; maxidx=i;}
//     prevloss=currloss;
//     i++;
//     j++;
// }
// //filling zero in grumpy array 
// for(int i=maxidx;i<(maxidx+k);i++){
//     grumpy[i]=0;
// }

// //sum of satisfication
// int sum=0;
// for (int i=0;i<n;i++){
//     if(grumpy[i]==0) sum+=customer[i];
// }

// cout<<sum;
// }



//first negative number in windows of size k
//wrong in it
// int arr[]={2,-3,4,4,-7,-1,4,-2,6};
// int n=sizeof(arr)/sizeof(arr[0]);
// int k=4;
// int p=-1;
// int v[n-k+1];

// for(int i=0;i<k;i++){
//    if(arr[i]<0)
//    { p=i;
//    break;}
// }

// if(p==-1) v[0]=1;
// else v[0]=arr[p];
// int i=1;
// int j=k;
// while(j<n){
//   if(p>=i){ v[i]=arr[p];}
//   else {
//     p=-1;
//     for(int x=i;x<=j;x++){
//         if(arr[x]<0)   p=x; break;
//     }
//     if(p!=-1) v[i]=arr[p];
//     else v[i]=1;  
// }
//  i++;
//  j++;

// }

// for(int l=0;l<n-k+1;l++)
// {
//     cout<<v[l];
// }

// }
        

//leetcode 209
//  minimum size subarray sum
// vector<int> nums;
// nums.push_back(2);
// nums.push_back(3);
// nums.push_back(1);
// nums.push_back(2);
// nums.push_back(4);
// nums.push_back(3);

// int target=7;


// int n= nums.size();
// int i=0;
// int j=0;
// int minlen=INT_MAX;
// int len;
// int sum=0;

// while(j<n){
//     sum+=nums[j];
//     while(sum>=target){
//         len=j-i+1;
//         minlen=min(minlen,len);
//         sum-=nums[i];
//         i++;
//     }
//     j++;
// }
// if(minlen==INT_MAX) cout<<0;
// else cout<<minlen;

//leetcode 1004
//max consecutive one 
// vector<int> nums;
// nums.push_back(1);
// nums.push_back(1);
// nums.push_back(1);
// nums.push_back(0);
// nums.push_back(0);
// nums.push_back(0);
// nums.push_back(1);
// nums.push_back(1);
// nums.push_back(1);
// nums.push_back(1);
// nums.push_back(0);

// int k=2;
// int n=nums.size();
// int i=0;int j=0;
// int flips=0;
// int maxlen=INT_MIN;
// int len=INT_MIN;
// while(j<n){
//     if(nums[j]==1) j++;
    
    
//     else //(nums[j]==0)
//      {
//         if(flips<k) {  flips++;  j++;}
     
//          else {  //flips==k;
//                len=j-i;
//                 maxlen=max(maxlen,len);
       
//                  // i ko jusst ek ussese age wale zero se ek idx aage le jaoo 
//                   while(nums[i]==1) i++; // after this nums[i]=0
//                      i++;
//                     j++;
//                }
//     }          
// }     
// len=j-i;
// maxlen=max(maxlen,len);
//  cout<< maxlen;



// leetcode 1493
vector<int> nums;
nums.push_back(1);
nums.push_back(1);
nums.push_back(1);
nums.push_back(0);
nums.push_back(0);
nums.push_back(0);
nums.push_back(1);
nums.push_back(1);
nums.push_back(1);
nums.push_back(1);
nums.push_back(0);

int k=1;
int n=nums.size();
int i=0;int j=0;
int flips=0;
int maxlen=INT_MIN;
int len=INT_MIN;
while(j<n){
    if(nums[j]==1) j++;
    
    
    else //(nums[j]==0)
     {
        if(flips<k) {  flips++;  j++;}
     
         else {  //flips==k;
               len=j-i;
                maxlen=max(maxlen,len);
       
                 // i ko jusst ek ussese age wale zero se ek idx aage le jaoo 
                  while(nums[i]==1) i++; // after this nums[i]=0
                     i++;
                    j++;
               }
    }          
}     
len=j-i;
maxlen=max(maxlen,len);
 cout<< maxlen-1;




}

