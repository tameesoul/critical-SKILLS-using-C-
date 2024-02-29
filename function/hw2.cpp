#include<iostream>
using namespace std;


int max(int a , int b , int c)
{
    int max_v = 0;
    if(a > b && a>c)
    {
        max_v = a;
    }else if (b>a && b>c)
    {
        max_v = b;
    }else {
        max_v = c;
    }
    return max_v;
}
int max(int a ,int b , int c , int d)
{
    int max_v = max(a,b,c);
    if(d>max_v)
    max_v = d;
    return max_v;
}

int max(int a , int b , int c , int d ,int e)
{
    int max_v = max(a,b,c,d);
    if(max_v<e)
    max_v = e;
    return max_v;
}
int max(int a , int b , int c , int d ,int e , int f)
{
    int max_v = max(a,b,c,d ,e);
    if(max_v<f)
    max_v = f;
    return max_v;
}

int main()
{
    int a , b ,c ,d , e , f; 
    cin >> a >> b >> c >> d >> e >> f;
    cout << max(a,b,c ,d ,e , f);
}