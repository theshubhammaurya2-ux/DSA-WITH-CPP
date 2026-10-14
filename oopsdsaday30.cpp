#include<iostream>
using namespace std;

   class player{
    private:
    int health;
    int age;
    int score;
    bool alive;

    public:
    int gethealth(){
        return health;
    }
    int getage(){
        return age;
    }
    int getscore(){
        return score;
    }

    int isalive(){
        return alive;
    }
    int sethealth(int Health){
        this->health=health;
    }

    int setage(int age){
        this->age=age;
    }

    int setscore(int score){
        this->score=score;
    }

    int setalive(bool alive){
            this->alive=alive;
    }
   };


int addscore(player a ,player b){
   return a.getscore()+b.getscore();
   }

   int maxscore(player a,player b){
      if((a.getscore())>(b.getscore())){
        return a.getscore();
      }
      else {
        return b.getscore();
      }
   }


int main(){
     player shubham ;
     player shivam;


    shubham.setage(19);
    shubham.sethealth(100);
    shubham.setscore(100);
    shubham.setalive(true);

    
    shivam.setage(54);
    shivam.sethealth(20);
    shivam.setscore(0);
    shivam.setalive(true);
//    cout<<addscore(shubham,shivam)<<endl;
//    cout<<maxscore(shubham,shivam);   
    
   player *urvi=new player;
   player urviobject=*urvi;
   urviobject.setscore(50);
   cout<<urviobject.getscore()<<endl;
   urvi->sethealth(50);
   cout<<urvi->gethealth();
}