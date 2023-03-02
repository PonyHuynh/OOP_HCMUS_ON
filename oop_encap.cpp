#include<iostream>
#include <string>
using namespace std;
// Forward declaration: tuyên bố (nói) cod 1 class Cat
// (main.cpp / tham chiếu vòng - có lớp A tham chiếu lớp B)
class Cat;

// class definition: định nghĩa lớp (.h)
class Cat{
private: //data / attribute / backup fiels
    float _weight;
    float _height;
    string _name; 
public: // getter / setter => Property
    // getter
    float getWeight(){
        return _weight;
    }
    float getHeight(){
        return _height;
    }
    string getname(){
        return _name;
    }
    // setter
    void setWeight(float Value){
        _weight = Value;
    }
    void setHeight( float Value){
        _height = Value;
    }
    void setname( string Value){
        _name = Value;
     }

public: // constructor / hàm tạo
   /*cat(){ //nor- paramerize constructor
        _name = "";
        _weight = 0;
        _height = 0;
    }*/
    Cat( string name, float weight, float height) // paramerize construction
    {
        _name = name; 
        _weight = weight;
        _height = height;
    }
public: //behavior/ method
    void eat();
    void sleep();
    void run();
};
// Class implementation (.cpp)
 void Cat::eat(){ // :: resolution operator toán tử phân giải phạm vi

 }
  void Cat::sleep(){
    
 }

  void Cat::run(){
    
 }
 int main(){
    Cat kitty("kitty", 2, 0.2);

    cout << kitty.getname()<< " "<< kitty.getWeight() << "kg "<< kitty.getHeight()<< " m" <<endl;
    return 0;
 }
