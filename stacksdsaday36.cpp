#include<iostream>
#include<vector>
#include<stack>
using namespace std;


// void revdisplay(stack<int> st){
//     stack<int> tstk;
//     while(st.size()>0){
//         cout<<st.top()<<" ";
//         int x=st.top();
//        st.pop();
//          tstk.push(x);  //or tstk(st.top());
// }
// }


// void display(stack<int>st){
//    stack<int> tstk;
//    stack<int> sstk;
//     while(st.size()>0){
//     int x=st.top();
//      st.pop();
//      tstk.push(x);  
//     }
//     while(tstk.size()>0){
//         cout<<tstk.top()<<" ";
//         tstk.pop();
//     }
// }

// void displayrecrev(stack<int> &st){
//    if(st.size()==0) return;
//    int x=st.top();
//    cout<<x<<" ";
//    st.pop();
//    displayrecrev(st);
//    st.push(x);
// }


// void displayrec(stack<int> &st){
//    if(st.size()==0) return;
//    int x=st.top();
//    st.pop();
//    displayrec(st);
//    cout<<x<<" ";
//    st.push(x);


// }

// void pushbottom(stack<int>&st,int val){
//    stack<int> v;
//     while(st.size()>0){
//     int x=st.top();
//      v.push(x);
//      st.pop();
//  }
//  st.push(23);
//  while(v.size()>0){
//     int x=v.top();
//     st.push(x);
//     v.pop();
//  }
//  cout<<st.size();
// }


// void pushatanyindex(stack<int>&st,int val,int idx){
//    stack<int> v;
//    while(st.size()>idx){
//     int x=st.top();
//      v.push(x);
//      st.pop();
//    }
//    st.push(val);
//    while(v.size()>0){
//      int x=v.top();
//     st.push(x);
//       v.pop();
//    }

//    cout<<st.size();
// }



// void pushbottomrec(stack<int>&st,int val){
//    if(st.size()==0){ st.push(val); return;}
//    int x=st.top();
//    st.pop();
//    pushbottomrec(st,val);
//    st.push(x);
// }

// void reverse(stack<int>&st){
//    if(st.size()==1) return;
//    int x= st.top();
//    st.pop();
//    reverse(st);
//    pushbottomrec(st,x);
// }



// // create your own stack
// class Stack{
//    public:
//     int arr[5];
//     int idx;                                 
//     Stack(){
//      idx=-1;
//        }
//     void push(int val){
//       if(idx==4){ cout<<"stack is full"; return;}
//       idx++;
//       arr[idx]=val;
//     }

//     void pop(){
//        if(idx==-1){ cout<<"stack is empty"; return;}
//       idx--;
//     }

//    int top(){
//        if(idx==-1){ cout<<"stack is empty"; return;}
//       return arr[idx];
//     }

//     int size(){
//       return idx+1;
//     }
// };


// //own vector stack;
// class stackvector{
//  public:
//  vector<int> arr;
//     int idx;
//     stackvector(){
//      idx=-1;
//        }

//     void push(int val){
//      arr.push_back(val);
//     }

//     void pop(){
//        if(arr.size()==0){ cout<<"stack is empty"; 
//          return;}
//       idx--;
//     }

//    int top(){
//        if(arr.size()==0){ cout<<"stack is empty"; return -1;}
//       return arr[arr.size()-1];
//     }

//     int size(){
//       return arr.size();
//     }
// };

class node{
   public:
   int val;
   node* next;
   node(int val){
   this->val=val;
  this->next=NULL;
   }
    
};

class Stack{
   public:
   node*head;
   int size;
   Stack(){
      head=NULL;
      size=0;
   }
   void push(int val){
      node* temp =new node(val);
      temp->next=head;
      head=temp;
      size++;
      
   }

   void pop(){
      if(head== NULL) cout<<":STACK IS EMPTY "; return;
      head=head->next;
      size--;
   }

   int top(){
      if(head== NULL) cout<<":STACK IS EMPTY "; return -1;
      return head->val;
   }


   //reverse printing
   void displayrev(){
      node* temp=head;
      while(temp!=NULL){
         cout<<temp->val<<" ";
         temp=temp->next;
      }
      cout<<endl;   }



      //normal printing 
      void print( node* temp){
        if(temp==NULL) return;
        print(temp->next);
        cout<<temp->val<<" ";
      }
      void display(){
         node*temp=head;
         print(temp);
         cout<<endl;
      
      }
};

int main(){
     
   //  stack<int> st;
   //  st.push(10);
   //  st.push(20);
   //  st.push(30);
   //  st.push(40);
    // cout<<st.size()<<endl;
    // st.pop();
    // cout<<st.size()<<endl;


   
//  pushatanyindex(st,23,2);
//  cout<<endl;
// display(st);
//  cout<<endl;
// displayrecrev(st);
//  cout<<endl;
// displayrec(st);
//  cout<<endl;
//  pushbottomrec(st,43);
//  cout<<endl;
// displayrec(st);
// reverse(st);
//  cout<<endl;
// displayrec(st);


//own stack;
// Stack stk;
// stk.push(10);
// stk.push(20);
// stk.push(30);
// stk.push(40);
// stk.push(30);
// stk.push(40);
// cout<<stk.size();
// stk.pop();
// cout<<endl;
// cout<<stk.size();
// cout<<endl;
// cout<<stk.top();


// //own vector stack;
// stackvector stk;
// stk.push(10);
// stk.push(20);
// stk.push(30);
// stk.push(40);
// stk.push(30);
// stk.push(40);
// cout<<stk.size();
// stk.pop();
// cout<<endl;
// cout<<stk.size();
// cout<<endl;
// cout<<stk.top();

// linked list stacks
Stack stk;
stk.push(20);
stk.push(10);
stk.push(20);
stk.push(30);
stk.push(40);
stk.push(30);
stk.push(40);
stk.pop();
cout<<endl;
cout<<endl;
cout<<stk.top();
stk.display();
}