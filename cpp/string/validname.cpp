#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cin >> name;
    for (int i = 0; i < name.size(); i++)
    {
        try
        {

            if (isdigit(name[i]))
            {
                throw name;
            }
        }
        catch (string name)
        {
            cout << name<<" is not a valid input \n";
        }
    }
    return 0;
}