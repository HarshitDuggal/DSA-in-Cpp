// #include <iostream>
// #include<string>
// using namespace std;

// class Hero {
// //properties
// private:
// int health;
// public:
// char level;
// static int timetocomp;
// //default constructor
// Hero(){
//   cout << "Default constructor is called" << endl;
// }
// //Paramerized constructor
// Hero(int h,char l){
//   cout << "Parameterized constructor is called" << endl;
//   setHealth(h);
//   level = l;
// }
// //copy constructor custom
// Hero(Hero &h){
//   cout << "Copy constructor is called"<<endl;
//   this->health=h.health;
//   this->level=h.level;
// }
// //getter & setter
// int getHealth(){
//   return health;
// }
// void setHealth(int h){
//   health = h;
//   return;
//   }
// static int random(){
//   return timetocomp;
// }
// int plus(Hero c){
//         this->health = this->health + c.health;
//         return this->health;
//         // this->imaginary = this->imaginary + c.imaginary;
//     }
// ~Hero(){
//   cout << "Destructor is called" << endl;
// }
// };
// int Hero::timetocomp = 5;
// int main(){
//   cout <<"Time to complete : "<< Hero::timetocomp << endl;
//   cout << "static funct access ttc : " << Hero::random() << endl;
//   //static memory allocation
//   Hero ramesh;
  
//   ramesh.setHealth(70);
//   ramesh.level = 'C';
//   cout << "Ramesh Health"<< ramesh.getHealth() << endl;
//   cout << "Ramesh Level"<<ramesh.level << endl;

//   //dynamic memory allocation
//   Hero *Brijesh = new Hero;
//   Brijesh->setHealth(80);
//   Brijesh->level = 'B';
//   cout << "Brijesh Health"<< (*Brijesh).getHealth() << endl;
//   cout << "Brijesh Level"<<(*Brijesh).level << endl;
//   cout << "Brijesh arrow Health"<< Brijesh->getHealth() << endl;
//   cout << "Brijesh arrow Level"<<Brijesh->level << endl;
//   delete Brijesh;
//   Hero Akhilesh(100,'A');
//   cout << "Akhilesh Health"<< Akhilesh.getHealth() << endl;
//   cout << "Akhilesh Level"<<Akhilesh.level << endl;
//   //copy cunstructor
//   Hero Manimesh(Akhilesh);
//   cout << "Manimesh Health"<< Manimesh.getHealth() << endl;
//   cout << "Manimesh Level"<<Manimesh.level << endl;
//   //plus function use check
//   Akhilesh.plus(Manimesh);
//   cout << Akhilesh.getHealth() << endl;
// }