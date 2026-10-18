#include<iostream>
#include<vector>
#include<string>
using namespace std;


// default constractor
// class car{
//     public:
//     int bmw;
//           car(){    
//               cout<<"you get a bike";
//     }
// };
// int main(){
//     car fortuner;
//     car scorpio;
// }



// paremtized constructo
//destructor
// class car{
//     public:
//     string name;
//     int rno;
//     float marks;
//      car(string name,int rno,float marks){
//        this->name=name;
//        this->rno=rno;
//        this->marks=marks;
//   }
// };
// int main(){
//    car s("shubham",34,67.8);
//    cout<<s.marks;
//    cout<<s.rno;
//    cout<<s.name;
// }

  



// class student{
//     public:
//     string name;
//     int rno;
//     float marks;
//      student(string name,int rno,float marks){
//        this->name=name;
//        this->rno=rno;
//        this->marks=marks;
//   }
//   }; 
  
//   void change(student &s){
//         s.name="shiv";
//     }

// int main(){
//   student s("shubham",34,67.8);
//     cout<<s.name<<endl;
//    change(s);
//    cout<<s.name;
// }



// paremetrized constructor
class student{
    public:
    string name;
    int rno;
    float marks;
     student(string name,int rno,float marks){
       this->name=name;
       this->rno=rno;
       this->marks=marks;
  }
  }; 
  
  void change(student* s){
        s->name=" is a rakshas";
        }

int main(){
  student* s=new student("shivam",34,67.8);
    cout<<s->name<<endl;
   change(s);
   cout<<s->name;
}
















