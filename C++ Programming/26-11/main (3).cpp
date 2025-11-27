#include <iostream>
using namespace std;

struct Data
{
    public:
    int weight, height;
    
    Data(int w,int h)
    {
        weight = w;
        height = h;
    }
    
    void area()
    {
        cout<<weight*height<<endl;
    }
    
};

int main()
{
    struct Data d = Data(10,20);
    d.area();
    
    return 0;
}