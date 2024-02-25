#include<iostream>
using namespace std;

int main(void)
{
    int grads[7][4] = {0};
    for(int row = 0;row<7;++row)
    {
        for(int col = 0;col<4;++col)
        {
            cin>>grads[row][col];
        }
    }
    for(int col = 0;col<4;++col)
    {
        double sum = 0;
        for(int row = 0;row<7;++row)
          sum+=grads[row][col];
          double avg = sum / 7.0;

          cout<<"subject#" << col+1
          <<"has the avg" << avg <<"\n";
    }
}