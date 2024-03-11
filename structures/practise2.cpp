#include <iostream>
using namespace std;

struct name
{
     string fname , mname, lname;
    name(string _fname,string _lname , string mname = "")
    {
        fname = _fname;
        lname = _lname;
    }
};



int main()
{

    name n1("ahmed","tamee");
    cout<<n1.fname;

}