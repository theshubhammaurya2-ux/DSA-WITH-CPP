#include<iostream>
using namespace std;



// delete node in a linked list
// if head node and target node is given
//  class node{
//     public:
//     int val;
//     node* next;
//     node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
//  };

// void display(node* head){
//     while(head!=NULL){
//         cout<<head->val<<" ";
//        head= head->next;
//     }
//     cout<<endl;
// }

// // void deletenode(node*head,node*target){ // you cannot delete head node
// //         node* temp=head;
// //         while(temp->next!=target){
// //             temp=temp->next;
// //         }
// //         temp->next=temp->next->next;
// // }


// node* hideletsnode(node*head,node*target){ // it also can delete head node 
//     if(head==target){
//         head=head->next;
//         return head;
//     }   
//     node* temp=head;
//         while(temp->next!=target){
//             temp=temp->next;
//         }
//         temp->next=temp->next->next;
//         return head;
// }

//  int main(){
//     node* a= new node(10);
//     node* b= new node(20);
//     node* c= new node(30);
//     node* d= new node(40);
//     node* e=new node(50);
//     a->next=b;
//     b->next=c;
//     c->next=d;
//     d->next=e;


//     // display(a);
//     // deletenode(a,d) ; // head node and node you want to delete
     
//     node*head=a;
//     display(head);
//     head=hideletsnode(a,b) ;
//     display(head);
//  }




// delete node in a linked list leetcode 237
// target  is given

// class node{
//     public:
//     int val;
//     node* next;
//     node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
//  };

// void display(node* head){
//     while(head!=NULL){
//         cout<<head->val<<" ";
//        head= head->next;
//     }
//     cout<<endl;
// }

// void hideletsnode(node*target){ // it also can delete head node 
//     target->val=target->next->val;
//     target->next=target->next->next;
// }

//  int main(){
//     node* a= new node(10);
//     node* b= new node(20);
//     node* c= new node(30);
//     node* d= new node(40);
//     node* e=new node(50);
//     a->next=b;
//     b->next=c;
//     c->next=d;
//     d->next=e;

//     node*head=a;
//     display(head);
//    hideletsnode(b) ;
//     display(head);
//  }



// leetcode-876
// middle of the linked list
// class node{
//     public:
//     int val;
//     node* next;
//     node(int val ){
//         this->val=val;
//         this->next=NULL;
//     }
// };

//  void display(node* head){
//      while(head!=NULL){
//          cout<<head->val<<" ";
//         head= head->next;
//      }
//      cout<<endl;}

// node* middlenode(node* head){
//     node*temp=head;
//     int n=0;
  
//     while(temp!=NULL){
//        n= n+1;
//         temp=temp->next;
//     }

//     int midindex=n/2;
//     node* mid=head;
//     for(int i=1;i<=midindex;i++){
//         mid=mid->next;
//     }
//     return mid;
// }

// int main(){
//   node* a= new node(10);
//   node* b= new node(20);
//   node* c= new node(30);
//   node* d= new node(40);
//   node* e=new node(50);
//   a->next=b;
//   b->next=c;
//   c->next=d;
//   d->next=e;
//   node*head =a;
//  head=middlenode(a);
//  display(head);
// }


// method 2
// class node{
//     public:
//     int val;
//     node* next;
//     node(int val ){
//         this->val=val;
//         this->next=NULL;
//     }
// };

// void display(node * head){
//     while(head!=NULL){
//         cout<<head->val<<" ";
//         head=head->next;
//     }
//     cout<<endl;
// }

// node* middleofll(node * head){
//     node*fast=head;
//     node*slow=head;
//     while(fast!=NULL  && fast->next!=NULL ){  // if condition swap then it create error
//         slow=slow->next;
//         fast=fast->next->next;
//     }
//    return slow;
// }

// int main(){
//   node* a= new node(10);
//   node* b= new node(20);
//   node* c= new node(30);
//   node* d= new node(40);
//   node* e=new node(50);
//   a->next=b;
//   b->next=c;
//   c->next=d;
//   d->next=e;
//   node* head=a;
//   head=middleofll(a);
//   display(head);
// }


// // get nth node from end 
// class node{
//     public:
//     int val;
//     node* next;
//     node(int val ){
//         this->val=val;
//         this->next=NULL;
//     }
// };

// void display(node * head){
//     while(head!=NULL){
//         cout<<head->val<<" ";
//         head=head->next;
//     }
//     cout<<endl;
// }

// node* removenthnode(node* head,int n){
//     node* temp=head;
//     int len=0;
//     while(temp!=NULL){
//         len++;
//         temp=temp->next;
//     }
//     //nth from end
//    int m=len-n+1;
//    int idx=m-1;  // idx of node to be deleted
 
//    // get nth element from last
//    temp=head;
//    for(int i=1;i<=idx;i++){
//      temp=temp->next;      
//    }
//    cout<<temp->val<<" ";
//    cout<<endl;
// }

// int main(){
//   node* a= new node(10);
//   node* b= new node(20);
//   node* c= new node(30);
//   node* d= new node(40);
//   node* e=new node(50);
//   a->next=b;
//   b->next=c;
//   c->next=d;
//   d->next=e;
//   int n=3;
//   node*head=a;
//   head=removenthnode(a,n);
//   display(head);
// }

// remove the nth node from end and return its head
// leetcode19
// class node{
//     public:
//     int val;
//     node* next;
//     node(int val ){
//         this->val=val;
//         this->next=NULL;
//     }
// };

// void display(node * head){
//     while(head!=NULL){
//         cout<<head->val<<" ";
//         head=head->next;
//     }
//     cout<<endl;
// }

// node* removenthnode(node* head,int n){
//     node* temp=head;
//     int len=0;
//     while(temp!=NULL){
//         len++;
//         temp=temp->next;
//     }

//     if(n==len) 
//     {return head= head->next; return head;}
  

//     //nth from end
//    int m=len-n+1;
//    int idx=m-1;  // idx of node to be deleted
 

//    // delete element from nth node from last node
//     temp=head;
//    for(int i=1;i<=idx-1;i++){
//     temp=temp->next;      
//    }
//    temp->next=temp->next->next;
//    return head;


// }

// int main(){
//   node* a= new node(10);
//   node* b= new node(20);
//   node* c= new node(30);
//   node* d= new node(40);
//   node* e=new node(50);
//   a->next=b;
//   b->next=c;
//   c->next=d;
//   d->next=e;
//   int n=3;
//   node*head=a;
//   head=removenthnode(a,n);
//   display(head);
// }

// method 2
// class node{
//     public:
//     int val;
//     node* next;
//     node(int val ){
//         this->val=val;
//         this->next=NULL;
//     }
// };

// void display(node * head){
//     while(head!=NULL){
//         cout<<head->val<<" ";
//         head=head->next;
//     }
//     cout<<endl;
// }

// node* removenthnode(node* head,int n){
//     node* temp=head;
//     int len=0;
//     while(temp!=NULL){
//         len++;
//         temp=temp->next;
//     }
   
//     node*fast=head;
//     node* slow=head;
//     for(int i=1;i<=n+1;i++){
//         if(fast==NULL) return head->next;
//         fast=fast->next;
//     }
//     while(fast!=NULL){
//         slow=slow->next;
//         fast=fast->next;
//     }
//   slow->next=slow->next->next;
//   return head;
// }

// int main(){
//   node* a= new node(10);
//   node* b= new node(20);
//   node* c= new node(30);
//   node* d= new node(40);
//   node* e=new node(50);
//   a->next=b;
//   b->next=c;
//   c->next=d;
//   d->next=e;
//   int n=3;
//   node*head=a;
//   head=removenthnode(a,n);
//   display(head);
// }



// intersection of two linked lists  //screenshot
//leetcode 160
// we have to find common element of two intersected element
// class node{
//     public:
//     int val;
//     node*next;
//     node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };

// void display(node * head){
//     while(head!=NULL){
//         cout<<head->val<<" ";
//         head=head->next;
//     }
//     cout<<endl;}

// node* intersection(node* head1,node* head2){

//     //len 1
//     node* temp=head1;
//     int n=0;
//     while(temp!=NULL){
//         n++;
//         temp=temp->next;
//     }

//     //len2
//     node* temp2=head2;
//     int n2=0;
//     while(temp2!=NULL){
//         n2++;
//         temp2=temp2->next;
//     }
    
//     temp=head1;
//     temp2=head2;
//     if(n>n2){
//         for(int i=1;i<=(n-n2);i++){
//             temp=temp->next;
//         }
//         while(temp!=temp2){
//             temp=temp->next;
//             temp2=temp2->next;
//         }
//         return temp;
//     }
//   else{  //len1<=len2
//            for(int i=1;i<=(n2-n);i++){
//             temp2=temp2->next;
//         }
//             while(temp!=temp2){
//             temp=temp->next;
//             temp2=temp2->next;
//         }
//         return temp;
//   }

// }


// int main(){
//   node* common=new node(8);
//   common->next=new node(9);
//   common->next->next=new node(10);

//     //first linked list 
//     node* head1=new node(1);
//     head1->next=new  node(2);
//     head1->next->next=new node(3);
//     head1->next->next->next=new node(4);
//     head1->next->next->next->next=common;

//     //second linked list
//     node* head2=new node(1);
//     head2->next=new  node(2);
//     head2->next->next=new node(3);
//     head2->next->next->next=common;

 
//   display(head1);
//   display(head2);
  
// }


// leetcode 141 
// linked list cycle
// class node{
//     public:
//     int val;
//     node* next;
//     node(int val ){
//         this->val=val;
//         this->next=NULL;
//     }
// };

// bool checkcircularLL(node * head){
//     node* fast=head;
//     node* slow=head;
//     while(fast!=NULL && fast->next!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;
//         if(slow==fast) {return true;}
       
//     }
//      return false;
//     cout<<endl;
// } 


// int main(){
//   node* a= new node(10);
//   node* b= new node(20);
//   node* c= new node(30);
//   node* d= new node(40);
//   node* e=new node(60);
//   a->next=b;
//   b->next=c;
//   c->next=d;
//   d->next=e;
//   e->next=c;
// cout<<checkcircularLL(a);
// }    



// leetcode 142
// class node{
//     public:
//     int val;
//     node* next;
//     node(int val ){
//         this->val=val;
//         this->next=NULL;
//     }
// };
// node* checkcircularLL(node* head){
//     node* fast=head;
//     node* slow=head;
//     node*temp=head;
//     bool flag=false;
//     while(fast!=NULL && fast->next!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;

//         if(slow==fast) {flag =true; break;}
        
//     }
//     if(flag==false) return  NULL;
//     else{
//         node*temp=head;
//         while(temp!=slow){
//             slow=slow->next;
//             temp=temp->next;

//         }
//           return slow;
//     }
// }

//  void display(node * head){
//      while(head!=NULL){
//          cout<<head->val<<" ";
//          head=head->next;
//      }
   
//      cout<<endl;}


// int main(){
//   node* a= new node(10);
//   node* b= new node(20);
//   node* c= new node(30);
//   node* d= new node(40);
//   node* e=new node(60);
//   a->next=b;
//   b->next=c;
//   c->next=d;
//   d->next=e;
//   e->next=c;


//  cout<<checkcircularLL(a);


// }
