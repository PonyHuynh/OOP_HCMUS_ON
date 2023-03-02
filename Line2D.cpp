#include<iostream>
#include <string>
#include <sstream>
#include<cmath>
using namespace std;

class Point2D;
class Line2D;

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
    Point2D(int);
    Point2D(int, int);    
    ~Point2D();
public:
    string toString();
    float distanceTo(Point2D);
};
class Line2D {
private: 
    Point2D _start;
    Point2D _end;
public:
    Point2D getStart(){
        return _start;
    }
    Point2D getEnd(){
        return _end;
    }
    void setStart( Point2D value){
        _start = value;
    }
    void setEnd(Point2D value){
        _end = value;
    }
public:
    Line2D();
    Line2D(Point2D, Point2D);
    Line2D(int, int, int, int);
    string toString();
    float length(); 
};
Line2D::Line2D(){
    _start = 0;
    _end = 0;
}
Line2D::Line2D(Point2D A, Point2D B){
    _start  = A;
    _end = B;
}
Line2D::Line2D(int a, int b, int c, int d){

}
string Line2D::toString(){
    stringstream builder;
        builder <<"("<<_start.toString()<< ", "<< _end.toString() <<")";
    //string result =  out.str();
    string result = builder.str();
    return result;
}

float Line2D::length(){
    float result = 0;
    result = _start.distanceTo(_end);

    return result;
}
// class implementtation - cài đặt thiệt sự 
Point2D::Point2D(){ // nor-paramerize constructor
    _x = 0;
    _y = 0;
}
Point2D::Point2D(int a, int b){ //paramerize constructor
    _x = a;
    _y = b;
}
Point2D::Point2D(int i){
    _x = i;
    _y = i;
}
string Point2D::toString() {
    stringstream out; // filestream / network stream
    // console output - stream
    out <<"("<<this->_x<<", "<< this->_y<<")";
    //string result =  out.str();
    return out.str();
}
Point2D::~Point2D(){
   // cout<<"Destructor of"<< this->toString()<<endl;
}
float Point2D::distanceTo(Point2D other){
    float result = 0;
    int dx = this->_x - other._x;
    int dy = this->_y - other._y;
    result = sqrt((dx*dx)+(dy*dy));

    return result;
}
int main(){
    
    Point2D b(2, 4);
    Point2D c(8);

    Line2D line(b, c);
    cout<<line.toString()<<endl;
    cout<< line.length() << endl; 

    return 0;
}

// Memory Leak 
/*
int main(){
    Point2D* a = new Point2D();
    cout<<a->toString()<<endl;

    Point2D* b = new Point2D(2, 4);
     cout<<b->toString()<<endl;

    Point2D* c = new Point2D(8);
     cout<<c->toString()<<endl;
    
    delete a;
    delete b;
    delete c;

    return 0;
}
*/