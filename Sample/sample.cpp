//nesting of member function
#include<iostream>
using namespace std;
class sample {
    int m;
    void read(void){
        //private member
        cin>>m;
    }
    public:
    void update(void);
    void write(void);
};
void sample::update(void) {
    read();
}
void sample::write(void) {
    cout<<m<<endl;
}
int main() {
    sample obj1;
    obj1.update();
    obj1.write();
    //getch 0
    return 0;
}