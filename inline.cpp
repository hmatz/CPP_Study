//Using inline to execute simple function

#include <iostream>

using namespace std;

inline int MultiplyByMistery(int x)
{
    int d = x*7;
    return d;
}

int main()
{
    while (1)
    {
        int x;
        cout<<"Guess an integer value from 0 to 10: ";
        cin >> x;
        
        if (x == 7)
        {
            cout<<"The value " << x << " is right." << endl;
            break;
        }
        else
        {
            cout<<"The value " << x << " is wrong." << endl;
            cout<<"The value times the secret value is equal to " << MultiplyByMistery(x) << "." << endl;
        }   
    };
    return 0;
}
