#include <iostream>
using namespace std;
const int MAX = 100;
struct queue 
{
    int arr[MAX];
    int len;
    queue()
    {
        len = 0;
    }
    void add_end(int value) ///4
    {
        arr[len++] = value; /// arr[0] = 4 , len = 1 , arr[1] = 3 , len = 2 
    }

    void add_front(int value)
    {
        for(int i=len-1;i>=0;i--) //(3-1) /// i =  , i>=0;i++
        
            arr[i+1] = arr[i];  //arr[2= (0)]= arr[1 = 3] // arr[2] = 3 , 
            arr[0] = value; // arr[0] = 4 
            len++; //len 3
        
    }

    int remove_front()
    {
        int ret = arr[0];
        for(int i = 1;i<len;i++)
            arr[i-1] = arr[i];
            --len;
            return ret;
    }

    void print()
    {
        for(int i = 0;i<len;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
queue q1;
int main()
{
    q1.add_end(4);
    q1.add_end(3);
    q1.add_front(4);
    q1.add_front(1);
    q1.add_front(12);
    q1.remove_front();

    q1.print();

}
