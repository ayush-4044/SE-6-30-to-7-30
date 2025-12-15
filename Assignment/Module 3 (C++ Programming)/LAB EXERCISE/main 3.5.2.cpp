#include <iostream>
using namespace std;

int main()
{
    int arr1[2][2],arr2[2][2],sum[2][2];
    
    
    cout<<"Enter elements of first matrix"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr1[i][j];
        }
    }
    
    cout<<"Enter elements of second matrix"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr2[i][j];
        }
    }

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    
    cout<<"The sum of both matrix is"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
           cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}