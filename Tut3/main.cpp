#include <iostream>

using namespace std;

class Shape
{
    protected:
        float area,posX,posY;
    public:
        Shape(float,float);
        void move(float,float);
        virtual void display();
        virtual void calcArea()=0;
};

Shape::Shape(float x,float y):
posX(x),posY(y){}

void Shape::move(float x,float y)
{
    posX=x;
    posY=y;
}

void Shape::display()
{
    cout << "Position: ("<< posX << "," <<posY << ")" << endl;
}

class Circle : public Shape
{
        float radius;
    public:
        Circle(float,float,float);
        virtual void setRadius(float);
        virtual void display();
        virtual void calcArea();
};

Circle::Circle(float x,float y,float rad):
Shape(x,y),radius(rad){
    calcArea();
}

void Circle::setRadius(float rad)
{

    radius = rad;
    calcArea();
}

void Circle::display()
{
    Shape::display();
    cout << "Circle, Radius: " << radius << ", Area: "<< area <<  endl;
}

void Circle::calcArea()
{
    area = 3.14*(radius*radius);
}

class Rectangle : public Shape
{
        float height,width;
    public:
        Rectangle(float,float,float,float);
        virtual void setHeight(float);
        virtual void setWidth(float);
        virtual void display();
        virtual void calcArea();
};

Rectangle::Rectangle(float x,float y,float h,float w):
Shape(x,y),height(h),width(w){
    calcArea();
}

void Rectangle::setHeight(float h)
{
    height = h;
    calcArea();
}
void Rectangle::setWidth(float w)
{
    width = w;
    calcArea();
}
void Rectangle::display()
{
    Shape::display();
    cout << "Rectangle, Height: "<<height << ", Width: " << width << ", Area: "<< area << endl;
}

void Rectangle::calcArea()
{
    area = height*width;
}

template <class T,int size>

class Storage
{
        T store[size];
        int next;
    public:
        Storage()
        {
            next = 0;
        }
        int getSize()
        {
            return next;
        }
        T operator[](int index)
        {
            return store[index];
        }
        bool addItem(T item)
        {
            if(next<size)
            {
                store[next] = item;
                next++;
                return true;
            }
            else
            {
                return false;
            }
        }
};


int main()
{
    Shape *s;
    s = new Circle(1,2,3);
    (*s).display();



    return 0;
}
