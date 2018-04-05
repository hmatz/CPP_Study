//Loop read keyboard and print out what is read until condition.

#include <iostream>

using namespace std;

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
            cout<<"The value " << x << " is wrong." << endl;
    };
    return 0;
}
