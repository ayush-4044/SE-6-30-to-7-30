#include <iostream>
using namespace std;

struct Data
{
    int width,height;
};

int main()
{
    struct Data d;
    d.width = 5;
    d.height = 9;
     cout<<d.width*d.height<<endl;

    return 0;
}