#include <iostream>
#include <string>
using namespace std;

class Binary
{
    string s;

public:
    void getstring();
    void check_binary();
    void compl_binary();
    void display();
};

void Binary ::getstring()
{
    cout << "Enter a binary number: ";
    cin >> s;
}
void Binary ::check_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            cout << "Invaild binary number" << endl;
            exit(0);
        }
    }
}
void Binary ::compl_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}
void Binary ::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    Binary obj1;
    obj1.getstring();
    obj1.check_binary();
    cout<<"The string is: "<<endl;
    obj1.display();
    obj1.compl_binary();
    cout<<"\nThe string after comp is: "<<endl;
    obj1.display();
    return 0;
}