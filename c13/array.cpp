#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {34, 45, 43, 43};
    int marks[5];

    cout<<"The value in marks are: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }

    for (int i = 0; i < 4; i++)
    {
        cout << marks[i] << endl;
    }

    cout << "The values in arr are:" << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}