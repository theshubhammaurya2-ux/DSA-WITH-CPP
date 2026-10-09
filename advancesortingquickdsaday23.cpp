#include <iostream>
using namespace std;


// quick sort
// time complexity is o(nlogn)
// int partition(int arr[],int si ,int ei){
//     int pivotelement=arr[si];
//     int count=0;
//     for(int i=si+1;i<=ei;i++){
//         if(arr[i]<=pivotelement) { count++;}
//     }
//     int pivotidx=count+si;
//     swap(arr[si],arr[pivotidx]);
//     int i=si;
//     int j=ei;
//     while(i<pivotidx && j>pivotidx){
//         if(arr[i]<=pivotelement) i++;
//         if(arr[j]>pivotelement) j--;
//         else if(arr[i]>pivotelement && arr[j]<=pivotelement){
//             swap(arr[i],arr[j]);
//             i++;j--;
//         }

//     }
//     return pivotidx;
// }

// void quicksort(int arr[],int si,int ei){
//     if(si>=ei)  return;
//     // 5,1,8,2,7,6,3,4
//     int pi= partition(arr,si,ei);
//     //4,1,3,,2,5,7,8,6
//     quicksort(arr,si,pi-1);
//     quicksort(arr,pi+1,ei);

// }
// int main(){
//      int arr[]={5,1,8,2,7,6,3,4}; 
//      int n=sizeof(arr)/sizeof(arr[0]);
//      for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//      }
//      cout<<endl;
    
//      quicksort(arr,0,n-1);
//         for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//      }
//     }





// // quick sort algorithm 
// handling wrost case  o(n2) 

// int partition(int arr[],int si ,int ei){
//     int pivotelement=arr[(si+ei)/2];
//     int count=0;
//     for(int i=si;i<=ei;i++){
//         if(i==((si+ei)/2)) continue;
//         if(arr[i]<=pivotelement) { count++;}
//     }
//     int pivotidx=count+si;
//     swap(arr[(si+ei)/2],arr[pivotidx]);
//     int i=si;
//     int j=ei;
//     while(i<pivotidx && j>pivotidx){
//         if(arr[i]<=pivotelement) i++;
//         if(arr[j]>pivotelement) j--;
//         else if(arr[i]>pivotelement && arr[j]<=pivotelement){
//             swap(arr[i],arr[j]);
//             i++;j--;
//         }

//     }
//     return pivotidx;
// }

// void quicksort(int arr[],int si,int ei){
//     if(si>=ei)  return;
//     // 5,1,8,2,7,6,3,4
//     int pi= partition(arr,si,ei);
//     //4,1,3,,2,5,7,8,6
//     quicksort(arr,si,pi-1);
//     quicksort(arr,pi+1,ei);

// }
// int main(){
//      int arr[]={5,1,8,2,7,6,3,4}; 
//      int n=sizeof(arr)/sizeof(arr[0]);
//      for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//      }
//      cout<<endl;
    
//      quicksort(arr,0,n-1);
//         for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//      }
//     }




// kth smallest element of array
int partition(int arr[],int si ,int ei){
    int pivotelement=arr[(si+ei)/2];
    int count=0;
    for(int i=si;i<=ei;i++){
        if(i==((si+ei)/2)) continue;
        if(arr[i]<=pivotelement) { count++;}
    }
    int pivotidx=count+si;
    swap(arr[(si+ei)/2],arr[pivotidx]);
    int i=si;
    int j=ei;
    while(i<pivotidx && j>pivotidx){
        if(arr[i]<=pivotelement) i++;
        if(arr[j]>pivotelement) j--;
        else if(arr[i]>pivotelement && arr[j]<=pivotelement){
            swap(arr[i],arr[j]);
            i++;j--;
        }

    }
    return pivotidx;
}

int kthsmallest(int arr[],int si,int ei,int k){
    // 5,1,8,2,7,6,3,4
    int pi= partition(arr,si,ei);
    //4,1,3,,2,5,7,8,6
  if(pi+1==k) return arr[pi];
  else if(pi+1<k)   return   kthsmallest(arr,pi+1,ei,k);
  else  return  kthsmallest(arr,si,pi-1,k);
}
int main(){
     int arr[]={5,1,8,21,7,6,3,4}; 
     int k=4;
     int n=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
    
    cout<<kthsmallest(arr,0,n-1,k);
    }


 