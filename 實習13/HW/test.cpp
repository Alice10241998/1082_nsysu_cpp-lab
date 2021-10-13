#include<iostream>
using namespace std;

class Circle
{
    public:
    Circle(){};
    Circle(int r){radius=r;};
    void output()
    {cout<<"Circle area is : "<<3.14*radius*radius<<endl;};
    protected:
    int radius;
};
class Cylinder:public Circle
{
    public:
    Cylinder(){};
    Cylinder(int h):height(h){};
    Cylinder(int r,int h):Circle(r),height(h){};
    void output()
    {cout<<"Cylinder volume is : "<<height*3.14*radius*radius<<endl;};
    protected:
    int height;
};
class Trapezoid:public Cylinder
{
    public:
    Trapezoid(){};
    Trapezoid(int h,int u,int l):Cylinder(h),up(u),low(l){};
    void output()
    {cout<<"Trapezoid area is : "<<height*(up+low)/2<<endl;};
    private:
    int up,low;
};
int main()
{
    int r,h,u,l;
    cout<<"Please enter radius :"<<endl;
    cin>>r;
    Circle c(r);
    c.output();
    cout<<"Please enter height :"<<endl;
    cin>>h;
    Cylinder y(r,h);
    y.output();
    cout<<"Please enter lengh of the parallel sides :"<<endl;
    cin>>u>>l;
    Trapezoid t(h,u,l);
    t.output();
}