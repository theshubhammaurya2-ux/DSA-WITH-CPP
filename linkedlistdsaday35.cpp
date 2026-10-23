#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// doubly linked list
// class node{
//     public:
//     int val;
//     node*next;
//     node*prev;
//     node(int val){
//     this->val=val;
//     this->next=NULL;
//     this->prev=NULL;
//    }  
// };
 
//  void display(node*head){
//      while(head!= NULL){
//          cout<<head->val<<" ";
//          head=head->next;
//      }
//      cout<<endl;
//  }


//  //recursion
//  //reverse
//  void iterativedisplay(node*head){
//     if(head==NULL){ return;}
//     iterativedisplay(head->next);
//     cout<<head->val<<" ";
  
//  }
//  //same
//  void iterativedisplays(node*head){
//     if(head==NULL){ return;}
//     cout<<head->val<<" ";
//    iterativedisplays(head->next);
//  }

//  void displayrev(node*tail){
//     while(tail!=NULL){
//       cout<<tail->val<<" ";
//       tail=tail->prev;
//     }
//     cout<<endl;
//  }

// int main(){
//  node* a= new node(10);
//  node* b= new node(20);
//  node* c= new node(30);
//  node* d= new node(40);
//  node* e= new node(50);

//  a->next=b;
//  b->next=c;
//  c->next=d;
//  d->next=e;

//  e->prev=d;
//  d->prev=c;
//  c->prev=b;
//  b->prev=a;

// display(a);
//    iterativedisplay(a);
//    cout<<endl;
//    iterativedisplays(a);
// cout<<endl;
//    displayrev(e); // by tail double linked list method

// }



// insert(tail,head,index)
// delete(tail,head,index)
// class node{
//     public:
//     int val;  
//     node*next;
//     node*prev;
//     node(int val){
//     this->val=val;
//     this->next=NULL;
//     this->prev=NULL;
//    }  
// };
 
// class DLL{
//   public:
//    node* head=NULL;
//    node*tail=NULL;
//    int size;
//    DLL(){
//     head=tail=NULL;
//     size=0;
//    }
 
//    int sizes(){
//   node* temp=head;
//   int n=0;
//   while(temp!=NULL){
//     n++;
//     temp=temp->next;
//   }
//   return n;
// }

// void display(){
//    node* temp=head;
//    while(temp!=NULL){
//     cout<<temp->val<<" ";
//     temp=temp->next;
//    }
//    cout<<endl;
// }



// // // // reduced time complexity
// // // void insertatEnd(node* head,int val){
// // //   node* t=new node(val);
// // //   while(head->next!=NULL) head=head->next;
// // //   head->next=t;
// // // }


// void insertatstart(int val){
//   node* temp=new node(val);
//   if(size==0) head=tail=temp;
//   else{
//       temp->next=head;
//       head->prev=temp;
//       head=temp;
//   }
//   size++;
// }


// void insertatend(int val){
//   node* temp=new node(val);
//   if(size==0) head=tail=temp;
//   else{
//     tail->next=temp;
//     temp->prev=tail;
//     tail=temp;
//   }
//   size++;
// }


// void insertatanyindex(int val,int idx){
//   node* temp= new node(val);
  
//  if(idx<0 || idx>size)  {cout<<"invalid index"; return;}
//  else if(idx==0) {insertatstart(val);}
//  else if(idx==size){ insertatend(val);}
 
//   else{
//    node* t=new node(val);
//    node* temp=head;
//    for(int i=1;i<=idx-1;i++){
//     temp=temp->next;
//    }
//    t->next=temp->next;
  
//    t->prev=temp;
//    t->next->prev=t;
//     temp->next=t;
//    size++;
//   }
// }
 
// int getelement(int idx){
//   if(idx<0 || idx>size){  cout<<"invalid index"; return -1;}
//   else if(idx==0)  return head->val;
//   else if(idx==size-1) return tail->val;
//   else {
//     if(idx<size/2){
//     node* temp=head;
//     for(int i=1;i<=idx;i++){
//       temp=temp->next;
//     }
//     return temp->val;
//   }
//     else{
//       node* temp=tail;
//       for(int i=1;i<=size-idx;i++){
//         temp=temp->prev;
//       }
//       return temp->val;
//     }
//   }
// }


//  void delelementathead(){
//   if(size==0) {cout<<"list is empty " ; return;}
//   head=head->next;
//   if(head!=NULL) head->prev=NULL;
//   if(head==NULL)  tail=NULL;
//   size--;
    
//  }      

// void delelementattail(){
//   if(size==0) {cout<<"list is empty " ; return;}
//   else if(size==1) {head=tail=NULL; size--;}

//     else{
//       node* temp=tail->prev;
//       temp->next=NULL;
//       tail=temp;


//  }
// }


// void deleteatanyindex(int idx){
//   if(size==0){ cout<<"size is empty"; return;}

//   else if(idx<0 || idx>=size){ cout<<"invalid index";}
   

//   else if(idx==0) {delelementathead();}
//   else if(idx==size){delelementattail();}
//   else{
//     node*temp=head;
//     for(int i=1;i<=idx-1;i++){
//       temp=temp->next;
//     }
//     temp->next=temp->next->next;
//     temp->next->prev=temp;
//     size--;
//   }
  
//  }
// };

// int main(){
//      DLL ll;
//      ll.insertatend(20);
//      ll.insertatstart(10);
//      ll.insertatend(30);
//      ll.insertatend(40);
//       ll.insertatanyindex(50,3);
//      ll.display();
    //   ll.delelementathead();
    //   ll.delelementattail();
    //  ll.display();
    //  ll.deleteatanyindex(3);
    //    ll.display();
    // ll.getelement(1);
// }





// circular linked list
// class node{
//     public:
//     int val;
//     node*next;
    
//     node(int val){
//     this->val=val;
//     this->next=NULL;
    
//    }  
// };


// int main(){
//  node* a= new node(10);
//  node* b= new node(20);
//  node* c= new node(30);
//  node* d= new node(40);
//  node* e= new node(50);

//  a->next=b;
//  b->next=c;
//  c->next=d;
//  d->next=e;
//  e->next=a;
//   display(a);
// }


// // circular  doubly linked list
// class node{
//     public:
//     int val;
//     node*next;
//     node*prev;
//     node(int val){
//     this->val=val;
//     this->next=NULL;
//     this->prev=NULL;
//    }  
// };
 



// int main(){
//  node* a= new node(10);
//  node* b= new node(20);
//  node* c= new node(30);
//  node* d= new node(40);
//  node* e= new node(50);

//  a->next=b;
//  b->next=c;
//  c->next=d;
//  d->next=e;
// e->next=a;

//  e->prev=d;
//  d->prev=c;
//  c->prev=b;
//   b->prev=a;}





// split linked list
// leetcode 725
// class node{
//     public:
//     int val;
//     node* next;
//     node(int val ){
//         this->val=val;
//         this->next=NULL;
//     }
// };

// vector<node*>  splitlinkedlist(node* head,int k){

//   int n=0;
//   node*temp=head;
//   while(temp!=NULL){
//     n++;
//     temp=temp->next;
//   }

//   //breaking the list into k list
//     vector<node*> ans;
//   temp=head;
//   int size=n/k;
//   int rem=n%k;

//     while (temp != NULL) {
//         node* c = new node(100);
//         node* tempc = c;
//         int s = size;
//         if (rem > 0) {
//             s++;
//             rem--;
//         }

//         // Store the starting node of this part
//         node* partHead = temp;

//         for (int i = 1; i <= s; i++) {
//             tempc->next = temp;
//             temp = temp->next;
//             tempc = tempc->next;
//         }

//         // Break the current part
//         tempc = partHead;

//         for (int i = 1; i < s; i++) {
//             tempc = tempc->next;
//         }

//         tempc->next = NULL;

//         ans.push_back(partHead);
//     }

//     if (ans.size() < k) {
//         int extra = k - ans.size();

//         for (int i = 1; i <= extra; i++) {
//             ans.push_back(NULL);
//         }
//     }

//     return ans;
// }

// int main(){
//   node* a= new node(10);
//   node* b= new node(20);
//   node* c= new node(30);
//   node* d= new node(40);
//     node* e= new node(50);
//   node* f=new node(60);
//   a->next=b;
//   b->next=c;
//   c->next=d;
//   d->next=e;
//   e->next=f;
//   vector<node*> ans = splitlinkedlist(a, 3);

// for (node* head : ans) {
//     while (head != NULL) {
//         cout << head->val << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// }



// leetcode 2058
// find minimnum and maximum no of nodes between critical points
// critical point means greater or smaller than the left and right 

// wrong                                      
// class node{
//     public:
//     int val;
//     node* next;
//     node(int val ){
//         this->val=val;
//         this->next=NULL;
//     }
// };


// int critical(node*head){

    
//     int idx=1;
//     int fidx=-1;
//     int sidx=-1;
//   node* temp=head;
//   node*a=temp;
//   node*b=temp->next;
//   node*c=temp->next->next;
//  if(c==NULL ){ return {-1,-1};}

//   while(c!=NULL){
//     if(b->val>a->val && b->val>c->val ){
//       if(fidx==-1) fidx=idx;
//       else{ sidx=idx;}
//     }
//     a=a->next;
//     b=b->next;
//     c=c->next;
//     idx++;
//   }
//   if(sidx==-1) int arr[]={-1,-1}; return {-1,-1};;
//   int maxd=sidx-fidx;
//   int mind=INT_MAX;
//   fidx=-1;
//   sidx=-1;
//   a=head;
//   b=head->next;
//   c=head->next->next;

//    while(c!=NULL){
//     if(b->val>a->val && b->val>c->val ){
//     fidx=sidx;
//     sidx=idx;
//     if(fidx!=-1){
//     int d=sidx-fidx;
//     mind=min(mind,d);}
//     }
//     a=a->next;
//     b=b->next;
//     c=c->next;
//     idx++;
//   }
 
//   return {maxd,mind};
//   }



// int main(){
//   node* a= new node(10);
//   node* b= new node(20);
//   node* c= new node(30);
//   node* d= new node(28);
//   node* e=new  node(60);
//   a->next=b;
//   b->next=c;
//   c->next=d;
//   d->next=e;
//  critical(a);
// }


// leetcode 2074
// reverse node in even length group 
//check
// class node{
//     public:
//     int val;
//     node* next;
//     node(int val ){
//         this->val=val;
//         this->next=NULL;
//     }
// };



//  void display(node*head){
//      while(head!= NULL){
//          cout<<head->val<<" ";
//          head=head->next;
//      }
//      cout<<endl;
//  }
 
//   node* reverselist(node*head){
//      node* prev=NULL;
//      node*curr=head;
//      node*Next=head;
//      while(curr!=NULL){
//          Next=curr->next;
//          curr->next=prev;
//          prev=curr;
//          curr=Next;
//      }
//      return prev;
//  }

//  node* reversepartLL(node*head,int left ,int right){
//     node*temp=head;
//     node*a=NULL;
//     node*b=NULL;
//     node*c=NULL;
//     node*d=NULL;
//     int n=1;
//     while(temp!=NULL){
//      if(n==left-1)   a=temp;
//      if(n==left)     b=temp;
//      if(n==right)    c=temp;
//      if(n==right+1)  d=temp;
//      temp=temp->next;
//      n++;
//     }
 
//     if(a!=NULL){ 
//     a->next=NULL;}
//    if(c!=NULL){ c->next=NULL;}
//     c=reverselist(b);
//    if(a!=NULL){  
//     a->next=c;}
//     b->next=d;
//     if(a!=NULL){ return head;}
//     return c;
//  }

// node* reverseevenlengthgroup(node*head){
//   node* temp =head;
//   int gap=1;
//   while(temp!=NULL && temp->next!=NULL){
//     int remlen=0;
//     node*t=temp->next;
//     for(int i=1; i<=gap&&t!=NULL ;i++){
//       t=t->next;
//       remlen++;
//     }
  
//   if(remlen<gap+1) gap=remlen-1;
//  if(gap%2!=0){reversepartLL(temp,2,2+gap);}
//     gap++;
//     for(int i=1; i<=gap&&t!=NULL ;i++){
//       temp=temp->next;
//       remlen++;
//     }
//   }
//   return head;
// }

// int main(){
//   node* a= new node(10);
//   node* b= new node(20);
//   node* c= new node(30);
//   node* d= new node(40);
//   node* e=new  node(50);
//   a->next=b;
//   b->next=c;
//   c->next=d;
//   d->next=e;
//   display(a);
//   node* head=reverseevenlengthgroup(a);
//   display(head);
// }



//copy list with random pointer
//leetcode138
// class node{
//   public:
//   int val;
//   node *next;
//   node* random;
//   node(int val){
//     this->val=val;
//     this->next=NULL;
//     this->random=NULL;
//   }
// };

//  void display(node*head){
//      while(head!= NULL){
//          cout<<head->val<<" ";
//          head=head->next;
//      }
//      cout<<endl;}


//  node* copyrandomlist(node* head){
//   node* dumy=new node(0);
//   node* tempc=dumy;
//   node* temp=head;
//   while(temp!=NULL){
//     node* a=new node(temp->val);
//     tempc->next=a;
//     tempc=tempc->next;
//     temp=temp->next;
//   }

//   node* dublicate=dumy->next;
//   //step2 alternate connection
//   node* a=head;
//   node* b=dublicate;
//   dumy=new node(-1);
//   node* tempd=dumy;
//   while(a!=NULL){
//     temp->next=a;
//     a=a->next;
//     tempd=tempd->next;
//     tempd->next=b;
//     b=b->next;
//     tempd=tempd->next;

//   }
//   dumy=dumy->next;
//   //step 3 taking alternate connection
//   node* t1=dumy;
//   while(t1){
//       node* t2=t1->next;
//     if(t1->random) t2->random=t1->random->next;
//     t1=t1->next;
//   }

//   //step 4 removing the connection 
//   node*d1=new node(-1);
//   node* d2=new node(-1);
//   t1=d1;
//   node*t2=d2;
//   node*t =dumy;
//   while(t){
//     t1->next=t;
//     t=t->next;
//     t1=t1->next;
//     t2->next=t;
//     t=t->next;
//     t2=t2->next;
//   }
//   t1->next=NULL;
//   t2->next=NULL;
//   d1=d1->next;  // original with random
//   d2=d2->next; // dublicate with random
//   return d2;

//  }
 
// int main(){
//  node*a= new node(10);
//  node* b= new node(20);
//  node* c= new node(30);
//  node* d= new node(40);
//  node* e=new  node(50);
//  node*f=new  node(60);
//  a->next=b;
//  b->next=c;
//  c->next=d;
//  d->next=e;
//  e->next=f;

//  b->random=a;
//  c->random=e;
// //   display(a);

//  node* head=copyrandomlist(a);
//  display(head);


// }


// leetcode 430;
// flatten a multilevel doubly linked list
class node{
  public:
  int val;
  node *next;
  node* prev;
  node* child;
  node(int val){
    this->val=val;
    this->next=NULL;
     this->prev=NULL;
    this->child=NULL;
  }
};

 void display(node*head){
     while(head!= NULL){
         cout<<head->val<<" ";
         head=head->next;
     }
     cout<<endl;}

node* flatten(node*head){
  node* temp=head;
  while(temp){
    node*a=temp->next;
    if(temp->child!=NULL){
          
          node*c=temp->child;
          temp->child=NULL;
          c=flatten(c);
          temp->next=c;
          c->prev=temp;
          while(c->next!=NULL){
            c=c->next;

          }
          c->next=a;
         if(a) a->prev=c;
    }
  temp=temp->next;
  }
  return head;
}


int main(){
 node*a= new node(10);
 node* b= new node(20);
 node* c= new node(30);
 node* d= new node(40);
 node* e=new  node(50);
 node*f=new  node(60);
 a->next=b;
 b->next=c;
 c->next=d;
 d->next=e;
 e->next=f;

 b->child=a;
 c->child=e;
  display(a);}






















