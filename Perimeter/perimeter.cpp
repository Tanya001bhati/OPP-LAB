//find perimeter of shape
#include<iostream>
using namespace std;
class shape {
    public:
    virtual int perimeter()=0;
    void set_lenght(int l)
    {
        shape_length=l;
    }
    void set_widhth(int w)
    {
        shape_widhth=w;
    }
    protected:
    int shape_length;
    int shape_widhth;
};
class rectangle:public shape{
    public:
    int perimeter(){
        return(2*(shape_length+shape_widhth));
    }
};
class square:public shape{
    public:
    int perimeter(){
        return(4*shape_length);
    }
};
int main() {
    rectangle r;
    square s;
    s=length(20);
    r=widht(10);
    cout<<r.perimeter()<<endl;
    cout<<s.perimeter()<<endl;
    return 0;
}