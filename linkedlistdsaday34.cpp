#include<iostream>
#include<vector>
#include<climits>
using namespace std;



//leetcode 83
// remove many  dublicates element from sorted list


// class node{
//     public:
//     int val;
//     node*next;
//     node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
// void display(node* head){
//     while(head!=NULL){
//         cout<<head->val<<" ";
//         head=head->next;
//     }
//     cout<<endl;
// }

// void removedubLL(node* head){
//     node*a=head;
//     node*b=head->next;
//     while(b!=NULL){
//     while(a->val==b->val){
//          b=b->next;
//     }
//     a->next=b;
//     a=b;
//      b=b->next;    
// }}

// int main(){
//  node* a=new node(10);
//  node* b=new node(10);
//  node* c=new node(10);
//  node* d=new node(20);
//  node* e=new node(20);
//  node* f=new node(30);
//  node* g=new node(40);
//  node* h=new node(50);
//  a->next=b;
//  b->next=c;
//  c->next=d;
//  d->next=e;
//  e->next=f;
//  f->next=g;
//  g->next=h;
//  display(a);
//  removedubLL(a);
 
//  display(a);

// }




// rotate list by k times
// leetcode 61


// class node{
//     public:
//     int val;
//     node* next ;
//     node(int val){
//         this->val=val;
//         this->next=NULL; 
//     }
// };

// void display(node*head){
//     while(head!= NULL){
//         cout<<head->val<<" ";
//         head=head->next;
//     }
//     cout<<endl;
// }

// void rotateLlist(node* &head,int k){
    
//    if(head==NULL ) return;
//    if( head->next=NULL) return;
   
//     // calculate size and push tail to null
//     int n=0;
//     node*temp=head;
//     node*tail=head;
//     while(temp!=NULL){
//         if(temp->next==NULL) { tail=temp;}
//         n++;
//         temp=temp->next;
//     }
//     temp=head;
    
//     if(k>n)  k=k%n;
//     if(k==0) return;

//     // put temp at n-k th postion
//     for(int i=1;i<n-k;i++){
//         temp=temp->next;
//     }

//     tail->next=head;
//     head=temp->next;
//     temp->next=NULL;

//    return;

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
//   display(a);
//   rotateLlist(a,2); //k=2
//   display(a);
// }


// method 2  but only works k<n
// class node{
//     public:
//     int val;
//     node* next ;
//     node(int val){
//         this->val=val;
//         this->next=NULL; 
//     }
// };

// void display(node*head){
//     while(head!= NULL){
//         cout<<head->val<<" ";
//         head=head->next;
//     }
//     cout<<endl;
// }

// void rotateLlist(node* &head,int k){
//   node* fast=head;
//   node* slow=head;
//   for(int i=1;i<=k;i++){
//     fast=fast->next;
//   }
//   while(fast->next!=NULL){
//     fast=fast->next;
//     slow=slow->next;
//   }
//   fast->next=head;
//   head=slow->next;
//   slow->next=NULL;


// }

// int main(){
//   node* a= new node(10);
//   node* b= new node(20);
//   node* c= new node(30);
//   node* d= new node(40);
//   node* e= new node(50);
//   a->next=b;
//   b->next=c;
//   c->next=d;
//   d->next=e;
//   display(a);
//   rotateLlist(a,3); //k=2
//   display(a);
// }




//leetcode 2326
// //spiral matrix IV
//  class node{
//      public:
//      int val;
//      node* next ;
//      node(int val){
//          this->val=val;
//          this->next=NULL; 
//      }
//  };
//  void display(node*head){
//      while(head!= NULL){
//          cout<<head->val<<" ";
//          head=head->next;
//      }
//      cout<<endl;
//  }




//  vector<vector<int>> spiralfillin(node*head,int m,int n){
//     vector<vector<int>> v(m,vector<int>(n,-1));
//     node*temp=head;

//     int tne=m*n;
//     int maxr=m-1,minr=0;
//     int maxc=n-1,minc=0;
//     int count=1;
    
//     //filling 
//     while(minr<=maxr && minc<=maxc){
    
//         //right
//         for(int j=minc;j<=maxc;j++){
//             if(temp==NULL) break;
//             v[minr][j]=temp->val;
//          temp=temp->next;
//           }
//         minr++;
     
//         if(minr>maxr ||minc>maxc) break;
    
//         //down
//         for(int j=minr;j<=maxr;j++){
//                 if(temp==NULL) break;
//             v[j][maxc]=temp->val;
//          temp=temp->next;
//         }
//         maxc--;
       
//         if(minr>maxr ||minc>maxc) break;
       
    
//         //left 
//         for(int j=maxc;j>=minc;j--){
//                 if(temp==NULL) break;
//             v[maxr][j]=temp->val;;
//         temp=temp->next;
//         }
//         maxr--;
        
//         if(minr>maxr ||minc>maxc) break;
    
//         //up
//         for(int j=maxr;j>=minr;j--){
//                 if(temp==NULL) break;
//             v[j][minc]=temp->val;;
//           temp=temp->next;
//         }
//         minc++;
      
//         if(minr>maxr ||minc>maxc) break;
//     }
    
//     return v;
//  }




//  int main(){
//    node* a= new node(10);
//    node* b= new node(20);
//    node* c= new node(30);
//    node* d= new node(40);
//    node* e=new node(50);
//      node* f=new node(60);
//    a->next=b;
//    b->next=c;
//    c->next=d;
//    d->next=e;
//    e->next=f;
//    display(a);
// vector<vector<int>> ans = spiralfillin(a,3,3);

// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cout << ans[i][j] << " ";
//     }
//     cout << endl;
// }
//  }




//leetcode 21
//merge two sorted array
// class node{
//     public:
//     int val;
//     node* next ;
//     node(int val){
//         this->val=val;
//         this->next=NULL; 
//     }
// };

// void display(node*head){
//     while(head!= NULL){
//         cout<<head->val<<" ";
//         head=head->next;
//     }
//     cout<<endl;
// }

// node* mergelist(node*head1,node*head2){
//     node*temp1=head1;
//     node* temp2=head2;
//     node* c=new node(100);
//     node* tempc=c;

//     while(temp1!=NULL && temp2!=NULL){
//         if(temp1->val<temp2->val){
//             node* t=new node(temp1->val);
//             tempc->next=t;
//             tempc=t;
//              temp1 = temp1->next;
//         }
//         else{
//             node* t=new node(temp2->val);
//             tempc->next=t;
//             tempc=t;
//             temp2 = temp2->next;
           
//    }     }

//         if(temp1==NULL) tempc->next=temp2;
//         else tempc->next=temp1; //  if(temp2==NULL)
    

//     return c->next;
// }



// int main(){
//     //first linked list
//    node* head1=new node(1);
//    head1->next=new  node(3);
//    head1->next->next=new node(5);
//    head1->next->next->next=new node(7);
//    head1->next->next->next->next=new node(8);
//    //second linked list
//    node* head2=new node(2);
//    head2->next=new  node(4);
//    head2->next->next=new node(6);
   
//    node*head=head1;
//    head=mergelist(head1,head2);
//    display(head);
// }


// method 2
// merge two already sorted list

// class node{
//     public:
//     int val;
//     node* next ;
//     node(int val){
//         this->val=val;
//         this->next=NULL; 
//     }
// };

// void display(node*head){
//     while(head!= NULL){
//         cout<<head->val<<" ";
//         head=head->next;
//     }
//     cout<<endl;
// }


// node* mergelist(node*head1,node*head2){
//     node*temp1=head1;
//     node* temp2=head2;
//     node* c=new node(100);
//     node* tempc=c;
//    while(temp1!=NULL && temp2 !=NULL){
//     if(temp1->val<=temp2->val){
//         tempc->next=temp1;
//         temp1=temp1->next;
//         tempc=tempc->next;
        
//     }
//     else{
//         tempc->next=temp2;
//         temp2=temp2->next;
//         tempc=tempc->next;
//     }
// }
// if(temp1==NULL) tempc->next=temp2;
// else tempc->next=temp1;


//   return c->next;
// }

// int main(){
//     //first linked list
//    node* head1=new node(1);
//    head1->next=new  node(3);
//    head1->next->next=new node(5);
//    head1->next->next->next=new node(7);
//    head1->next->next->next->next=new node(8);
//    //second linked list
//    node* head2=new node(2);
//    head2->next=new  node(4);
//    head2->next->next=new node(6);
   
//    node*head=head1;
//    head=mergelist(head1,head2);
//    display(head);
// }



//merge k sorted list 
//leetcode 23
// class node{
//     public:
//     int val;
//     node* next ;
//     node(int val){
//         this->val=val;
//         this->next=NULL; 
//     }
// };

// void display(node*head){
//     while(head!= NULL){
//         cout<<head->val<<" ";
//         head=head->next;
//     }
//     cout<<endl;
// }

// node* merge(node*head1,node*head2){
//     node*temp1=head1;
//     node* temp2=head2;
//     node* c=new node(100);
//     node* tempc=c;
//    while(temp1!=NULL && temp2 !=NULL){
//     if(temp1->val<=temp2->val){
//         tempc->next=temp1;
//         temp1=temp1->next;
//         tempc=tempc->next;
     
//     }
//     else{
//         tempc->next=temp2;
//         temp2=temp2->next;
//         tempc=tempc->next;
//     }
// }
// if(temp1==NULL) tempc->next=temp2;
// else tempc->next=temp1;
//   return c->next;
// }

// node* mergeklist(vector<node*>&arr){
//     if(arr.size()==0) return NULL;
//     while(arr.size()>1){
//         node*a=arr[arr.size()-1];
//         arr.pop_back();
//        node*b=arr[arr.size()-1];
//        arr.pop_back();
//        node*c=merge(a,b);
//        arr.push_back(c);
//     }
//     return arr[0];
// }

// int main(){
//     //first linked list
//    node* head1=new node(1);
//    head1->next=new  node(3);
//    head1->next->next=new node(5);
//    head1->next->next->next=new node(7);
//    head1->next->next->next->next=new node(8);
//    //second linked list
//    node* head2=new node(2);
//    head2->next=new  node(4);
//    head2->next->next=new node(6);
   
//   vector<node*> v;
//   v.push_back(head1);
//   v.push_back(head2);

//  node*  head=mergeklist(v);
// display(head);
// }


//method 2 better timecomplexity 
// class node{
//     public:
//     int val;
//     node* next ;
//     node(int val){
//         this->val=val;
//         this->next=NULL; 
//     }
// };

// void display(node*head){
//     while(head!= NULL){
//         cout<<head->val<<" ";
//         head=head->next;
//     }
//     cout<<endl;
// }

// node* merge(node*head1,node*head2){
//     node*temp1=head1;
//     node* temp2=head2;
//     node* c=new node(100);
//     node* tempc=c;
//    while(temp1!=NULL && temp2 !=NULL){
//     if(temp1->val<=temp2->val){
//         tempc->next=temp1;
//         temp1=temp1->next;
//         tempc=tempc->next;
     
//     }
//     else{
//         tempc->next=temp2;
//         temp2=temp2->next;
//         tempc=tempc->next;
//     }
// }
// if(temp1==NULL) tempc->next=temp2;
// else tempc->next=temp1;
//   return c->next;
// }


// node* mergeklist(vector<node*>&arr){
//     if(arr.size()==0) return NULL;
//     while(arr.size()>1){
//        node*a=arr[0];
//        arr.erase(arr.begin());
//        node*b=arr[0];
//        arr.erase(arr.begin());
//        node*c=merge(a,b);
//        arr.push_back(c);
//     }
//     return arr[0];
// }


// int main(){
//     //first linked list
//    node* head1=new node(1);
//    head1->next=new  node(3);
//    head1->next->next=new node(5);
//    head1->next->next->next=new node(7);
//    head1->next->next->next->next=new node(8);
//    //second linked list
//    node* head2=new node(2);
//    head2->next=new  node(4);
//    head2->next->next=new node(6);
   
//   vector<node*> v;
//   v.push_back(head1);
//   v.push_back(head2);

//  node*  head=mergeklist(v);
// display(head);
// }


//leetcode 148
//sort list
//  class node{
//      public:
//      int val;
//      node* next ;
//      node(int val){
//          this->val=val;
//          this->next=NULL; 
//      }
//  };
//  void display(node*head){
//      while(head!= NULL){
//          cout<<head->val<<" ";
//          head=head->next;
//      }
//      cout<<endl;
//  }
 

// node* merge(node*head1,node*head2){
//     node*temp1=head1;
//     node* temp2=head2;
//     node* c=new node(100);
//     node* tempc=c;
//    while(temp1!=NULL && temp2 !=NULL){
//     if(temp1->val<=temp2->val){
//         tempc->next=temp1;
//         temp1=temp1->next;
//         tempc=tempc->next;
  
//     }
//     else{
//         tempc->next=temp2;
//         temp2=temp2->next;
//         tempc=tempc->next;
//     }
// }
// if(temp1==NULL) tempc->next=temp2;
// else tempc->next=temp1;
//   return c->next;
// }



// //finding left middlle 
// node* sortlist(node*&head){
//     if(head==NULL || head->next==NULL) return head;  //recursion ka base case
//      node* slow=head;
//      node*fast=head;
//      while(fast->next!=NULL && fast->next->next!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;
//      }
//      //now slow is at left middle
//      node* a=head;
//      node* b=slow->next;
//      slow->next=NULL;
//      a=sortlist(a);
//      b=sortlist(b);
//      node*c=merge(a,b);
//      return c;
// }



//  int main(){
//   node* a= new node(10);
//   node* b= new node(30);
//   node* c= new node(50);
//   node* d= new node(40);
//   node* e= new node(20);
//   a->next=b;
//   b->next=c;
//   c->next=d;
//   d->next=e;
//   display(a);
//   node* head=a;
//   head=sortlist(a);
//  display(head);
//  }




//leetcode 86
// partiton list
// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int val) {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void display(node* head) {
//     while (head != NULL) {
//         cout << head->val << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// void partitionlist(node*& head, int x) {
//     node* lo = new node(100);
//     node* hi = new node(100);

//     node* tl = lo;
//     node* th = hi;
//     node* t = head;

//     while (t != NULL) {
//         if (t->val < x) {
//             tl->next = t;
//             tl = tl->next;
//         }
//         else {
//             th->next = t;
//             th = th->next;
//         }

//         t = t->next;
//     }

//     tl->next = hi->next;
//     th->next = NULL;

//     head = lo->next;

//     delete lo;
//     delete hi;
// }

// int main() {
//     node* a = new node(10);
//     node* b = new node(80);
//     node* c = new node(40);
//     node* d = new node(30);
//     node* e = new node(60);
//     node* f = new node(70);
//     node* g = new node(15);
//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;
//     e->next = f;
//     f->next = g;
//     display(a);
//     partitionlist(a, 41);
//     display(a);
// }


// leetcode 328
//solve
// class Solution {
// public:
//     ListNode* oddEvenList(ListNode* head) {
//      if(head==NULL || head->next==NULL) return head;
//        ListNode* odd=new  ListNode(100);
//        ListNode* even=new  ListNode(100);
//          ListNode* to=odd;
//          ListNode*te=even;
//         ListNode* temp=head;
//             int i=1;
//              while(temp!=NULL){
//                 if((i%2)==1){
//                     to->next=temp;
//                     to=to->next;
//                 }
//                 else{
//                     te->next=temp;
//                     te=te->next;
//                 }
//                 temp=temp->next;
//                 i++;
//              }
//              to->next=even->next;
//              te->next=NULL;
//              head=odd->next;
//              return head;
//     }
// };


//leetcode 206
// reverse linked list


// // wrost method 
//  class node{
//      public:
//      int val;
//      node* next ;
//      node(int val){
//          this->val=val;
//          this->next=NULL; 
//      }
//  };
//  void display(node*head){
//      while(head!= NULL){
//          cout<<head->val<<" ";
//          head=head->next;
//      }
//      cout<<endl;
//  }

// node* getnodeat(node*head,int idx){
//     node* temp=head;
//    for(int i=1;i<=idx;i++){
//     temp=temp->next;
//    }
//    return temp;
// }


// node * reverselist(node*head){
//     node * temp=head;
//     int n=0;
//     while(temp!=NULL){
//         n++;
//         temp=temp->next;
//     }
//     int i=0;
//     int j=n-1;
//     while(i<j){
//         node* left=getnodeat(head,i);
//         node* right=getnodeat(head,j);
//         int t=left->val;
//         left->val=right->val;
//         right->val=t;
//         i++;
//         j--;
//     }
//     return head;
// }



//  int main(){
//  node* a= new node(10);
//  node* b= new node(80);
//  node* c= new node(40);
//  node* d= new node(30);
//  node* e= new node(60);
//  node*f= new node(70);
//  node* g= new node(15);
//  a->next=b;
//  b->next=c;
//  c->next=d;
//  d->next=e;
//   e->next=f;
//    f->next=g;
//   display(a);
// node* head=reverselist(a);
// display(head);
// }


// good approach
// remember whole code
// iterative method

//  class node{
//      public:
//      int val;
//      node* next ;
//      node(int val){
//          this->val=val;
//          this->next=NULL; 
//      }
//  };
//  void display(node*head){
//      while(head!= NULL){
//          cout<<head->val<<" ";
//          head=head->next;
//      }
//      cout<<endl;
//  }

// node* getnodeat(node*head,int idx){
//     node* temp=head;
//    for(int i=1;i<=idx;i++){
//     temp=temp->next;
//    }
//    return temp;
// }


// node * reverselist(node*head){
//    node* prev=NULL;
//    node* NEXT=head;
//    node* curr=head;


//    while(curr!=NULL){
//     NEXT=curr->next;
//    curr->next=prev;
//    prev=curr;
//    curr=NEXT;
  
//    }
//     return prev;
// }



//  int main(){
//  node* a= new node(10);
//  node* b= new node(80);
//  node* c= new node(40);
//  node* d= new node(30);
//  node* e= new node(60);
//  node*f= new node(70);
//  node* g= new node(15);
//  a->next=b;
//  b->next=c;
//  c->next=d;
//  d->next=e;
//   e->next=f;
//    f->next=g;
//   display(a);
// node* head=reverselist(a);
// display(head);
// }


// more good method best method
// recursion method 

//  class node{
//      public:
//      int val;
//      node* next ;
//      node(int val){
//          this->val=val;
//          this->next=NULL; 
//      }
//  };
//  void display(node*head){
//      while(head!= NULL){
//          cout<<head->val<<" ";
//          head=head->next;
//      }
//      cout<<endl;
//  }

// node* getnodeat(node*head,int idx){
//     node* temp=head;
//    for(int i=1;i<=idx;i++){
//     temp=temp->next;
//    }
//    return temp;
// }

// node * reverselist(node*head){
//     if(head==NULL || head->next==NULL) return head;
//     node* newhead=reverselist(head->next);
//     head->next->next=head;
//     head->next=NULL;
//     return newhead;
// }

//  int main(){
//  node* a= new node(10);
//  node* b= new node(80);
//  node* c= new node(40);
//  node* d= new node(30);
//  node* e= new node(60);
//  node*f= new node(70);
//  node* g= new node(15);
//  a->next=b;
//  b->next=c;
//  c->next=d;
//  d->next=e;
//   e->next=f;
//    f->next=g;
//   display(a);
// node* head=reverselist(a);
// display(head);
// }



// leetcode 
//leetcode 234

// //pallindrome  wrost case
//  class node{
//      public:
//      int val;
//      node* next ;
//      node(int val){
//          this->val=val;
//          this->next=NULL; 
//      }
//  };

 
//  void display(node*head){
//      while(head!= NULL){
//          cout<<head->val<<" ";
//          head=head->next;
//      }
//      cout<<endl;
//  }

// node* getnodeat(node*head,int idx){
//     node* temp=head;
//    for(int i=1;i<=idx;i++){
//     temp=temp->next;
//    }
//    return temp;
// }


// bool pallindrome(node*head){
//     node * temp=head;
//     int n=0;
//     while(temp!=NULL){
//         n++;
//         temp=temp->next;
//     }
//     int i=0;
//     int j=n-1;
//     bool flag=true;
//     while(i<j){
//         node* left=getnodeat(head,i);
//         node* right=getnodeat(head,j);
//       if(left->val!=right->val) return false;
    
//         i++;
//         j--;
//     }
//    return true;
// }



//  int main(){
//  node* a= new node(1);
//  node* b= new node(1);
//  node* c= new node(2);
//  node* d= new node(2);
//  node* e= new node(1);
//  node*f= new node(1);
//  a->next=b;
//  b->next=c;
//  c->next=d;
//  d->next=e;
//   e->next=f;

//   display(a);
// cout<<pallindrome(a);

// }


// //best case
//  class node{
//      public:
//      int val;
//      node* next ;
//      node(int val){
//          this->val=val;
//          this->next=NULL; 
//      }
//  };  

 
//  void display(node*head){
//      while(head!= NULL){
//          cout<<head->val<<" ";
//          head=head->next;
//      }
//      cout<<endl;
//  }

//  node * reverselist(node*head){
//      if(head==NULL || head->next==NULL) return head;
//      node* newhead=reverselist(head->next);
//      head->next->next=head;
//      head->next=NULL;
//      return newhead;}


// bool pallindrome(node*head){
//   node* c=new node(10);
//   node*temp=head;
//   node*tempc=c;
//   while(temp!=NULL){
//         node*Node=new node(temp->val);
//         tempc->next=Node;
//         temp=temp->next;
//         tempc=tempc->next;

//   }
//   c=c->next;
//   c=reverselist(c);
//   node* a=head;
//   node*b=c;
//   while(a){
//     if(a->val!=b->val) return false;
//     a=a->next;
//     b=b->next;
//   }
// return true;
// }



//  int main(){
//  node* a= new node(1);
//  node* b= new node(1);
//  node* c= new node(2);
//  node* d= new node(2);
//  node* e= new node(1);
//  node*f= new node(1);
//  a->next=b;
//  b->next=c;
//  c->next=d;
//  d->next=e;
//   e->next=f;

//   display(a);
// cout<<pallindrome(a);
// }




// bestest method 

//  class node{
//      public:
//      int val;
//      node* next ;
//      node(int val){
//          this->val=val;
//          this->next=NULL; 
//      }
//  };

 
//  void display(node*head){
//      while(head!= NULL){
//          cout<<head->val<<" ";
//          head=head->next;
//      }
//      cout<<endl;
//  }

// node* reverselist(node*head){
//     node* prev=NULL;
//     node*curr=head;
//     node*Next=head;
//     while(curr!=NULL){
//         Next=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=Next;
//     }
//     return prev;
// }
// bool ispallindrome(node* head){
//   // if first half and second half  is reverse of each other
//   // then it is a pallindrome 
//     node*slow=head;
//     node*fast=head;
//     while(fast->next!=NULL && fast->next->next!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;        
//     }
//     node* newhead=reverselist(slow->next);
//     node*a=head;
//     node*b=newhead;-
//     while(b!=NULL){
//         if(a->val!=b->val){ return false;}
//             a=a->next;
//             b=b->next;
//        }
//        return true;
// }



//  int main(){
//  node* a= new node(1);
//  node* b= new node(1);
//  node* c= new node(2);
//  node* d= new node(2);
//  node* e= new node(1);
//  node*f= new node(1);
//  a->next=b;
//  b->next=c;
//  c->next=d;
//  d->next=e;
//   e->next=f;
//   display(a);
//   cout<<ispallindrome(a);
// }


// leetecode 92
// reverse part of  linked list II
// input list left right  from left to right revwersed the linked list

//  class node{
//      public:
//      int val;
//      node* next ;
//      node(int val){
//          this->val=val;
//          this->next=NULL; 
//      }
//  };

 
//  void display(node*head){
//      while(head!= NULL){
//          cout<<head->val<<" ";
//          head=head->next;
//      }
//      cout<<endl;
//  }


//  node* reverselist(node*head){
//     node* prev=NULL;
//     node*curr=head;
//     node*Next=head;
//     while(curr!=NULL){
//         Next=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=Next;
//     }
//     return prev;
// }




// node* reversepartLL(node*head,int left ,int right){
//    node*temp=head;
//    node*a=NULL;
//    node*b=NULL;
//    node*c=NULL;
//    node*d=NULL;
//    int n=1;
//    while(temp!=NULL){
//     if(n==left-1)   a=temp;
//     if(n==left)     b=temp;
//     if(n==right)    c=temp;
//     if(n==right+1)  d=temp;
//     temp=temp->next;
//     n++;
//    }
   
//    if(a!=NULL){ 
//    a->next=NULL;}
//    c->next=NULL;
//    c=reverselist(b);

//   if(a!=NULL){  
//    a->next=c;}
//    b->next=d;

//    if(a!=NULL){ return head;}
//    return c;

// }


//  int main(){
//  node* a= new node(10);    

//  node* b= new node(20);
//  node* c= new node(30);
//  node* d= new node(40);
//  node* e= new node(50);
//  node*f= new node(60);
//  a->next=b;
//  b->next=c;
//  c->next=d;
//  d->next=e;
//   e->next=f;
//   display(a);
//  node*head= reversepartLL(a,3,5);
//   display(head);
// }


//leetcode 143
// reorder list

//  class node{
//      public:
//      int val;
//      node* next ;
//      node(int val){
//          this->val=val;
//          this->next=NULL; 
//      }
//  };

 
//  void display(node*head){
//      while(head!= NULL){
//          cout<<head->val<<" ";
//          head=head->next;
//      }
//      cout<<endl;
//  }


//  node* reverselist(node*head){
//     node* prev=NULL;
//     node*curr=head;
//     node*Next=head;
//     while(curr!=NULL){
//         Next=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=Next;
//     }
//     return prev;
// }



// node* reorderLL(node*head){
    

//     node*slow=head;
//     node*fast=head;
//     while(fast->next!=NULL && fast->next->next!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;
//     }
//     node* a=head;
//     node* b=reverselist(slow->next);
    
//     slow->next=NULL;  //for breaking the literals
    
//     //merge two list alternatively
//     node* c=new node(100);

//     node*ta=a;
//     node*tb=b;
//     node*tc=c;
     
//     while(ta!=NULL && tb!=NULL){
//         tc->next=ta;
//         ta=ta->next;
//         tc=tc->next;


//         tc->next=tb;
//         tb=tb->next;
//         tc=tc->next;

//     }
//     tc->next=ta;
//     return c->next;
// }



//  int main(){
//  node* a= new node(10);
//  node* b= new node(20);
//  node* c= new node(30);
//  node* d= new node(40);
//  node* e= new node(50);
// //  node*f= new node(60);
//  a->next=b;
//  b->next=c;
//  c->next=d;
//  d->next=e;
// //   e->next=f;
// display(a);
// node*head= reorderLL(a);
// display(head);
// }







