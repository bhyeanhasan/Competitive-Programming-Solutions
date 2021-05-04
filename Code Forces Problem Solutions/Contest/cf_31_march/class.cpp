#include <iostream>
using namespace std;

class shape{
protected:
    int height;
    int width;
public:
    virtual int getArea() = 0;
    void setwidth(int w){
        width = w;
    }
    void setheight(int h){
        height = h;
    }
};
class Rectangle: public shape{
    public:
        int getArea(){
            return (width * height);
        }
};
class Triangle: public shape{
public:
    int getArea(){
        return (width * height) / 2;
    }
};
int main(){
    Rectangle Rect;
    Triangle Tri;
    Rect.setwidth(5);
    Rect.setheight(7);
    cout<<"Total Rectangle area: "<<Rect.getArea()<<endl;
    Tri.setheight(5);
    Tri.setwidth(7);
    cout<<"Total Triangle area: "<<Tri.getArea()<<endl;
}
