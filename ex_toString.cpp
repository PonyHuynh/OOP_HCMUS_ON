#include<iostream>
#include <string>
#include <sstream>
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
    Point2D(int);
    Point2D(int, int);    
    ~Point2D();
public:
    string toString();
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
    cout<<"Destructor of"<< this->toString()<<endl;
}
int main(){
    Point2D a;
    cout<<a.toString()<<endl;

    Point2D b(2, 4);
     cout<<b.toString()<<endl;

    Point2D c(8);
     cout<<c.toString()<<endl;

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