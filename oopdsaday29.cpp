#include<iostream>
using namespace std;

    class student{
        private:
        char name[20];


        public:
        int roolno;
        int age;
        int mobileno;
        char address[20];
        
    };
 
   class player{
             public:
             int health;
             int score;
             string name;
    
    };

    // class calculator{
    //     public:
    //     int a;
    //     int b;
    //      int add(int a,int b) {
    //         cout<<a+b;
    //      }
         
    //      int subtract(int a,int b) {
    //         cout<<a-b;
    //      }
    // };


    
    class calcul{
        public:
        int a;
        int b;
        void add() {
            cout<<a+b;
         }
         
         void subtract() {
            cout<<a-b;
         }
    };
    
int main(){       
//     player amit;
//     amit.score=23;
//     amit.health=100;
//     amit.name="amit";

//   cout<<amit.name<<endl;
//   cout<<amit.score<<endl;
//   cout<<amit.name<<endl;

//       player ghas;
//     ghas.score=93;
//     ghas.health=100;
//     ghas.name="ghas";
//     cout<<ghas.name<<endl;
//     cout<<ghas.score<<endl;
//     cout<<ghas.name;


//   calculator calci;
//     calci.a=30;
//     calci.b=89;
 
//     calci.add(56,67);   cout<<endl;
//     calci.subtract(66,56);


  calcul calci;
    calci.a=30;
    calci.b=89;
 
    calci.add();   cout<<endl;
    calci.subtract();
}