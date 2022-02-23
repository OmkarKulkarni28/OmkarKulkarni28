#include<iostream>
using namespace std;
class demo{
    private:
    const int x;
    const int y;
    public:
    demo():x(10),y(20)
    {}
    demo(int a,int b):x(a),y(b)
    {}
    void display()
    {
        cout<<"\nx="<<x;
        cout<<"\ny="<<y;
        
    }
};
int main()
{
    demo d1;
    demo d2(30,40);
    cout<<"\nvalue of d1=";
    d1.display();
    cout<<"\nvalue of d2=";
    d2.display();
    return 0;
}
