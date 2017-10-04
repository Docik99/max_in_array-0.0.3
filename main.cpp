#include <iostream>
#include <sstream>

using namespace std;

bool vvod(int array[10])

{
    string string;
    getline(cin, string);
    istringstream stream(string);
    bool success = true;
    for (int i = 0; i < 10; ++i)
    {
        if (!(stream >> array[i]))
        {
            success = false;
            break;
        }
    }

    return success;
}

int main()
{
    int a[10], b[10];

    if (vvod(a) && vvod(b))
    {

        int max = a[0] + b[0];
        for (int i = 0; i < 10; ++i)
        {
            for (int j = 0; j < 10; ++j)
            {
                if ((a[i] + b[j] > max) && (i <= j)) max = a[i] + b[j];
            }
        }

        cout << max;

    }
    else
    {
        cout << "An error has occured while reading numbers from line";
    }

    cin.get();

    return 0;
}