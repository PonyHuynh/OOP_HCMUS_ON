#include<iostream>
#include <string>
using namespace std;

class Point2D{
private:
    int _x;
    int _y;
public:
    int getX()
    { return _x; }
    int getY()
    { return _y; }

    void setX( int value){
        _x = value;
    }
    void setY( int value){
        _y = value;
    }
public:  //costructor
    Point2D();
    Point2D(int, int);     
};
// class implementtation - cài đặt thiệt sự 
Point2D::Point2D(){ // nor-paramerize constructor
    _x = 0;
    _y = 0;
}
  
Point2D::Point2D(int a, int b){ //paramerize constructor
    _x = a;
    _y = b;
}
int main(){
     Point2D a;
     Point2D b(2, 4);
     cout <<" a = "<<"("<< a.getX() <<" "<<a.getY() << ")"<< endl;
     cout <<" b = "<<"("<< b.getX() <<" "<<b.getY() << ")"<< endl;

    return 0;
}