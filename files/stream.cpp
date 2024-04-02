#include<iostream>
#include<fstream> // ifstream and ofstream
using namespace std;

int main()
{
    ifstream fin("C:/Users/Ahmedtamee/Downloads/test.txt"); // Corrected file path

    if (!fin.is_open()) // Check if file opening failed
    {
        cout << "Can't open the file." << endl;
    }
    else
    {
        int x, y;
        fin >> x >> y;

        cout << x + y << endl;
    }

    fin.close();
    return 0;
}
