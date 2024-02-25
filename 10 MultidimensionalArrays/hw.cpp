#include<iostream>
using namespace std;

int main()
{
    double grads[7][4];
    for(int row = 0;row<6;++row)
    {
        for(int col = 0;col<4;++col)
        {
            cin>>grads[row][col]; 
        }
    }
    for(int row = 0;row<6;++row)
    {
        cout<<"row "<<row<<":"; 
        for(int col = 0;col<4;++col)
        {
            cout<<grads[row][col]<<" "; 
        }

        cout<<"\n";
    }
}