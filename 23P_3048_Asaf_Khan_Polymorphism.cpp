#include<iostream>
#include<string>

using namespace std;

class Shapes{
    public : 
    virtual void area() = 0;
};

class Twod_Shapes:public Shapes{
    public : 
    virtual void area() = 0;
};
class circle:public Twod_Shapes{
    float radius;
    public :
    circle():radius(3){}
    void area(){
        
        cout<<"circle area : "<<(2*3.14*radius)<<endl;
    }
   
};
class square:public Twod_Shapes{
    float side;
    public :
    square():side(2){}
    void area(){
        cout<<"Square area : "<<side*side<<endl;
    }
    
};

class ThreeD_Shapes:public Shapes{
    public :
    virtual void area() = 0;
     virtual void volume() = 0;
};
class cube:public ThreeD_Shapes{
    float lenght,width,height;
    public :    
    cube():lenght(2),width(3),height(4){}
    void area(){
        cout<<"cube area : "<<6*(lenght*lenght)<<endl;
    }
    void volume(){
        cout<<"cube volume : "<<lenght*lenght*lenght<<endl;
    }
};
class pyramid:public ThreeD_Shapes{
    float base,height,lenght;
    public :
    pyramid():base(2),height(3),lenght(4){}
    void area(){
        cout<<"Pyramid area : "<<(base+1/2*lenght*height)<<endl;
    }
    void volume(){
        cout<<"Pyramid volume : "<<(base*height*lenght)/3<<endl;
    }
};
int main(){
    Twod_Shapes *ptr_2d[2];
    circle shape1;
    square shape2;
    ptr_2d[0] = &shape1;
    ptr_2d[1] = &shape2;
    ThreeD_Shapes* ptr_3d[2];
    cube shape3;
    pyramid shape4;
    ptr_3d[0] = &shape3;
    ptr_3d[1] = &shape4;
    for (int i = 0; i < 2; i++)
    {
    ptr_2d[i]->area();    
    }
    for (int i = 0; i < 2; i++)
    {
    ptr_3d[i]->area();
    ptr_3d[i]->volume();    
    }
}