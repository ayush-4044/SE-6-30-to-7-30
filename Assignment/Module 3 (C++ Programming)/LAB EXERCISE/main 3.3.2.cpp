#include <iostream>
using namespace std;

int main()
{
    int set = 50;
    int guess;
    
    cout<<"Guess the number between 1 to 100"<<endl;
    
    while(true)
    {
        cout<<"Enter guess : ";
        cin>>guess;
        
        if(guess==set)
        {
            cout<<"Congratulation! You guessed the right number!"<<endl;
            break;
        }
        else if (guess>set)
        {
            cout<<"Number is too high! Try again"<<endl;
        }
        else
        {
            cout<<"Number is too low! Try again"<<endl;
        }
            
    }
   

    return 0;
}