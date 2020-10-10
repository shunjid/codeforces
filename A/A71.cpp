#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    string data;
    cin >> n;

    while (n--)
    { 
        cin >> data;

        if (data.length() > 10)
        {
            cout << data[0] << data.length() - 2 << data[data.length() - 1] << endl;
        }
        else
        {
            cout << data << endl;
        }
    }

    return 0;
}
