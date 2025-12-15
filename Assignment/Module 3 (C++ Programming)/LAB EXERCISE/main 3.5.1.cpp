#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout<<"Enter number of elements : ";
    cin>>n;
    
    int arr[n],sum=0;
    
    cout<<"Enter "<<n<<" number"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        
    }
    float avg = (float)sum/n;
    
    cout<<"The total is : "<<sum<<endl;
    cout<<"The average is : "<<avg<<endl;

    return 0;
}