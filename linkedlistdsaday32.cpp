#include<iostream>
#include<climits>
using namespace std;



// class node{
//     public:
//     int val;
//     node* next;
// };


// int main(){
//   node a;
//   a.val=10;
//   node b ;
//   b.val=20;
//   node c ;
//   c.val=30;
//     node d ;
//   d.val=40;

//   //forming linkedlist
//   a.next=&b;
//   b.next=&c;    
//   c.next=&d;
//   d.next=NULL;
// }




// class node{
//     public:
//     int val;
//     node* next;
//     node(int val){
//         this->val=val;
//         this->next=NULL; 
//     }
// };
// int main(){
//     node a(10);
//     node b(120);
//     node c(20);
//     node d(220);
  // forming linkedlist
    //   a.next=&b;
    //   b.next=&c;    
    //   c.next=&d;
      // d.next=NULL;
       // cout<<(a.next)->val<<endl;   // b ki value
        // a.next->val=30;
        // cout<<b.val<<endl;
       // cout<<((a.next)->next)->val<<endl;    
       // cout<<(((a.next)->next)->next)->val;   

        // print all element by loop 
//         node temp=a;
//         while(1){
//             cout<<temp.val<<" ";
//             if(temp.next==NULL){ break;}
//             temp=*(temp.next);
//         }
// }




// // linked list
// class node{
//     public:
//     int val;
//     node* next;
//     node(int val){
//         this->val=val;
//         this->next=NULL; 
//     }
// };
// int main(){
//   node* a=new node (10);
//    node* b=new node (120);
//     node* c=new node(20);
//     node* d=new node(220);
//      a->next=b;
//      b->next=c;
//      c->next=d;
//      cout<<a->next->val;
// }




// class node{
//     public:
//     int val;
//     node* next;
//     node(int val){
//         this->val=val;
//         this->next=NULL; 
//     }
// };

// //display linked list
// void display(node* head){
//   node* temp=head;
//   while(temp!=NULL){
//     cout<<temp->val<<" ";
//     temp=temp->next;
//   }
//   cout<<endl;
// }


// // size of linked list
// int size(node* head){
//   node* temp=head;
//   int n=0;
//   while(temp!=NULL){
//     n++;
//     temp=temp->next;
//   }
//   return n;
// }

// // display linked list by recursion
// void displayrec(node* head){
// if(head==NULL){ return;}
// cout<<head->val<<" ";
// displayrec(head->next);
// }


// void displayrecrev(node* head){
// if(head==NULL){ return;}
// displayrecrev(head->next);
// cout<<head->val<<" ";
// }

// int main(){
//     node* a=new node (10);
//     node* b=new node (120);
//     node* c=new node(20);
//     node* d=new node(220);
//      a->next=b;
//      b->next=c;
//      c->next=d;
//     cout<<size(a)<<endl;
//      display(a);
//      displayrec(a);
//      cout<<endl;
//      displayrecrev(a);
// }


 
// INSERTING ELEMENT IN LINKED LIST FROM END FROM STARTIMG OR AT ANY INDEX
class node{
  public:
  int val;
  node* next;
  node(int val){
    this->val=val;
    this->next=NULL;
  }
};



class linkedlist{
  public:
   node* head=NULL;
   node*tail=NULL;
   int size;
   linkedlist(){
    head=tail=NULL;
    size=0;
   }
 
   int sizes(){
  node* temp=head;
  int n=0;
  while(temp!=NULL){
    n++;
    temp=temp->next;
  }
  return n;
}

void display(){
   node* temp=head;
   while(temp!=NULL){
    cout<<temp->val<<" ";
    temp=temp->next;
   }
   cout<<endl;
}


void insertatend(int val){
  node* temp=new node(val);
  if(size==0) head=tail=temp;
  else{
    tail->next=temp;
    tail=temp;
  }
  size++;
}

// // reduced time complexity
// void insertatEnd(node* head,int val){
//   node* t=new node(val);
//   while(head->next!=NULL) head=head->next;
//   head->next=t;
// }


void insertatstart(int val){
  node* temp=new node(val);
  if(size==0) head=tail=temp;
  else{
      temp->next=head;
      head=temp;
  }
  size++;
}

void insertatanyindex(int val,int idx){
  node* temp= new node(val);
  
  if(idx<0 || idx>size)  {cout<<"invalid index"; return;}
 else if(idx==0) {insertatstart(val);}
  else if(idx==size){ insertatend(val);}
 
  else{
   node* t=new node(val);
   node* temp=head;
   for(int i=1;i<=idx-1;i++){
    temp=temp->next;
   }
   t->next=temp->next;
   temp->next=t;
   size++;
  }
}


int getelement(int idx){
  if(idx<0 || idx>size){  cout<<"invalid index"; return -1;}
  else if(idx==0)  return head->val;
  else if(idx==size-1) return tail->val;
  else {
    node* temp=head;
    for(int i=1;i<=idx;i++){
      temp=temp->next;
    }
    return temp->val;
  }
}


 void delelementathead(){
  if(size==0) {cout<<"list is empty " ; return;}
  else if(size==1) {head=tail=NULL; size--;}
  else if(size>=1){head=head->next; size--;}
 }      

  void delelementattail(){
  if(size==0) {cout<<"list is empty " ; return;}
  else if(size==1) {head=tail=NULL; size--;}

    else{
      node* temp=head;
      for(int i=1;i<=size-1;i++){
            temp=temp->next;
      }
      if(temp==NULL){
        size--;
        return;
      }
      }
 }




 void deleteatanyindex(int idx){
  if(size==0){ cout<<"size is empty"; return;}

  else if(idx<0 || idx>=size){ cout<<"invalid index";}

  else{
    node*temp=head;
    for(int i=1;i<=idx-1;i++){
      temp=temp->next;
    }
    temp->next=temp->next->next;
    size--;
  }
  
 }
};

int main(){
     linkedlist ll;
     ll.insertatend(10);
     ll.insertatend(20);
     ll.insertatend(30);
     ll.insertatend(40);

     ll.display();
//   //    cout<<ll.sizes()<<endl;
//   //   ll.insertatstart(0);
//   //   ll.display();
//   //    cout<<ll.sizes()<<endl;
//   //   ll.insertatanyindex(60,2);
//   //  ll.display();
  cout<<ll.getelement(3)<<endl;
//   // ll.delelementathead();
//   // ll.display();
//   // ll.delelementathead();
//   // ll.display();  
  
  
//   ll.delelementattail();
//   ll.display();
//   ll.delelementattail();
//   ll.display();
}
 
