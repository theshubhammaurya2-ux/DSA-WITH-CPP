#include<iostream>
#include<vector>
#include<climits>
using namespace std;



// //capcity of ship packages within d days
//test case 3 2 2 4 1 4   day 3  wlimt =5; find min capcity to 3 days
//  bool check(int mid, vector<int>& weight, int days) {
//         int m=mid;  // m denote current capacity mid  denote full capcity of a day
//         int n=weight.size();
//         int count=1;    // from first day
//         for(int i=0;i<n;i++){
         
         
         
//             if(m>=weight[i]){
//                 m=m-weight[i];
//             }
//             else {
//                 count++;
//                 m=mid;
//                 m=m-weight[i];
//             }
//         }
//         if(count>days) return false;
//         else return true;
//     }
  

// int main(){
//    vector <int> weights;
//    weights.push_back(3);
//    weights.push_back(2);
//    weights.push_back(2);
//    weights.push_back(4);
//    weights.push_back(1);
//    weights.push_back(4);
    
//    // no of days takes to complete task
//    int days;
//    cout<<"enter the number of days";
//    cin>>days;
//    //weight ship takes in single round
//    int wlimit;
//    cout<<"enter the weight limit";
//    cin>>wlimit;
//  int max=INT_MIN;
//    int n= weights.size();
//    int sum=0;
//  for(int i=0;i<n;i++){
//         if(max<weights[i]) max=weights[i];
//              sum+=weights[i];
        
//  }
//  int li =max;
//  int ui=sum;
//  int mincapacity=sum;
//  while(li<=ui){
//     int mid=li+(ui-li)/2;
//     if(check(mid,weights,days)){
//         mincapacity=mid;
//         ui=mid-1;
//     }
//     else li=mid+1;
//  }
//  cout<< mincapacity;
// }








// leetcode 875;
// koko  eating bananas 
//  bananas 16
// time if given 8 hour utilize full time 
// and find minimum eating speed k
// one time it enters in one container or pile and eat banana

// method 1
// class Solution {
// // public:
// bool check(int speed,vector<int>& piles,int h){
//  int count=0;
//  int n=piles.size();
//  for(int i=0;i<n;i++){
// if(count>h) return false;
//     if(speed>=piles[i]) { count+=1;}
//     else if(piles[i]%speed==0){ count+=(piles[i]/speed) ; }
//     else  count+=(piles[i]/speed ) +1; //vimp
//  }
   

// if(count>h) return false;
// else return true;
// }

// int main(){
// vector<int> bannana;
// bannana.push_back(30);
// bannana.push_back(11);
// bannana.push_back(23);
// bannana.push_back(4);
// bannana.push_back(20);
// int h=8;

 
//         int n=bannana.size();
//          int mx=-1;
//          for(int i =0;i<n;i++){
//             mx=max(mx,bannana[i]);

//          }
//          int li=1;
//          int ui=mx;
//          int ans=-1;
//          while(li<=ui){
//             int mid=li+(ui-li)/2;
//             if(check(mid,bannana,h)==true){
//                 ans=mid;
//                 ui=mid-1;
//             }
//             else li=mid+1;
//          }
//          cout<<ans;
//     }
       


// // second method
// class Solution {
// public:
// bool check(int speed,vector<int>& piles,int h){
//  long long count=0;
//  int n=piles.size();
//  for(int i=0;i<n;i++){
//     if(speed>=piles[i]) { count+=1;}
//     else if(piles[i]%speed==0){ count+=(long long)(piles[i]/speed) ; }
//     else  count+=(long long)(piles[i]/speed ) +1; //vimp
//  }
   

// if((long long)count>h) return false;
// else return true;
// }
//     int minEatingSpeed(vector<int>& piles, int h) {
//         int n=piles.size();
//          int mx=-1;
//          for(int i =0;i<n;i++){
//             mx=max(mx,piles[i]);

//          }
//          int li=1;
//          int ui=mx;
//          int ans=-1;
//          while(li<=ui){
//             int mid=li+(ui-li)/2;
//             if(check(mid,piles,h)==true){
//                 ans=mid;
//                 ui=mid-1;
//             }
//             else li=mid+1;
//          }
//          return ans;

//     }          
// };

// minimum time to complete trips
// delhi chandigarh dehradun   manali      
bool check(long long mid ,vector<int> & time,int totalTrips){
    long long trips=0;
    int n=time.size();
    //1 2 3  midhours=2
    for(int i=0;i<n;i++){
        trips+=mid/(long long )time[i];
    }
    if(trips<(long long)totalTrips) return false;
    else return true;
}
int main(){

vector<int>time;
time.push_back(1);
time.push_back(2);
time.push_back(3);
 int totalTrips=5;
 
        int n=time.size();
        long long li=1;  
        int mx=-1;
        for(int i=0;i<n;i++){
            mx=max(mx,time[i]);
        }
        long long ui=(long long)mx*(long long)totalTrips;
        long long ans=-1;   
      
        while(li<=ui){
            long long mid=li+(ui-li)/2;
            if(check(mid,time,totalTrips)==true){
                ans=mid;
                ui=mid-1;
            }
            else li=mid+1;
        }
        cout<< ans;

    }

















































