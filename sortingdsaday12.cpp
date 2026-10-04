#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//  int main(){
  //   // sorting
  //   vector<int> v(5);
  //   for (int i=0;i<5;i++){
  //       cin>>v[i];
  //   }
  //  sort(v.begin(),v.end());
  //      for (int i=0;i<5;i++){
  //       cout<<v[i]<<" ";
  //   }
  //   cout<<endl;
  //  reverse(v.begin(),v.end());
  //   for (int i=0;i<5;i++){
  //       cout<<v[i]<<" ";
  //   }
  // }










                                                                                                                                                                                                                                                                  
     // sort algorithm
    //  void display(vector<int>&v){
    //     for(int i=0;i<v.size();i++){
    //           cout<<v[i]<<" ";
    //     }
           
    //  }
//      void sorta(vector<int>&v){
//         for(int i=0;i<=v.size()-1;i++){
//             for(int j=0;j<=v.size()-1;j++){
//                 if(v[j]>v[i]){
//                     int temp=v[i];
//                     v[i]=v[j];
//                     v[j]=temp;
//                 }
//             }
//         }
//      }
// int main(){
//       vector<int> v(5);
//     for (int i=0;i<5;i++){
//         cin>>v[i];}
//         display(v);
//         sorta(v);
//         display(v);
// }



  // bubble sort algorithm // worst coding it work but not good
//    void display(int arr[]){
//         for(int i=0;i<6;i++){
//               cout<<arr[i]<<" ";
//         }
//     }     
//   int main(){
//   int arr[]={5,4,6,3,0,1};
//   for(int j=0;j<6;j++){
//     int temp=arr[j];
//              arr[j]=arr[j+1];
//              arr[j+1]=temp;
//             //  swap(arr[j],arr[j+1]); it also do same thing 
//       }
    
  
// display(arr);
  
// }






  // bubble sort algorithm //  best coding it work 

//    void display(int arr[]){
//         for(int i=0;i<6;i++){
//               cout<<arr[i]<<" ";
//         }
//     }     
//   int main(){
//   int arr[]={5,4,6,3,0,1};
//      for(int i=0;i<6-1;i++){
//         for(int j=0;j<6-i-1;j++){  //only change here
//             if(arr[j]>arr[j+1]){
//             int temp=arr[j];
//              arr[j]=arr[j+1];
//              arr[j+1]=temp;
//             //  swap(arr[j],arr[j+1]); it also do same thing 
//       }
//     }
//   }
// display(arr); 
// }





// if already sorted than what we do
//    void display(int arr[]){
//         for(int i=0;i<6;i++){
//               cout<<arr[i]<<" ";
//         }
//     }     
//   int main(){
//   int arr[]={1,6,3,4,5,6};
//  bool flag=true;
//  for (int i=0;i<6-1;i++){
//     if(arr[i]>arr[i+1]){
//         flag=false;
//         break;
//     }
//  }
//  if (flag==false){
//      for(int i=0;i<6-1;i++){
//         for(int j=0;j<6-i-1;j++){  //only change here
//             if(arr[j]>arr[j+1]){
//             // int temp=arr[j];
//             //  arr[j]=arr[j+1];
//             //  arr[j+1]=temp;
//              swap(arr[j],arr[j+1]);// it also do same thing 
//       }
//     }
//   }

// }
// display(arr);
// }


// further optimize this code best case ever
//    void display(int arr[]){
//         for(int i=0;i<6;i++){
//               cout<<arr[i]<<" ";
//         }
//     }     
//   int main(){
//   int arr[]={1,6,3,4,5,6};

//      for(int i=0;i<6-1;i++){ 
//          bool flag=true;
//         for(int j=0;j<6-i-1;j++){  //only change here
//             if(arr[j]>arr[j+1]){
//              swap(arr[j],arr[j+1]); 
//              flag=false;
//       }
//     }
//    if (flag==true){
//     // swap  not happen
//     break;
//    }

// }
// display(arr);
// }

// // sort the array of string remove the element less then x;
// int main(){
//     string s="azxyzbcc";
//     string str;
//     for(int i=0;i<s.length();i++){
//     if(s[i]>='x'){
//         str.push_back(s[i]);

//     }
// }
// cout<<str<<endl;
// sort(str.begin(),str.end());
// cout<<str;
// }


//push zero to end e=while maintaining the relative order

   void display(int arr[]){
        for(int i=0;i<6;i++){
              cout<<arr[i]<<" ";
        }
    }     
  int main(){
  int arr[]={5,0,1,2,0,0,4,0,3};
     for(int i=0;i<6-1;i++){ 
         bool flag=true;
        for(int j=0;j<6-i-1;j++){  
            if(arr[j]==0){//only change here
             swap(arr[j],arr[j+1]); 
             flag=false;
      }
    }
   if (flag==true){
    // swap  not happen
    break;
   }

}
display(arr);
}








































