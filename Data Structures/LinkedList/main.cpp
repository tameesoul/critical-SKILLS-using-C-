#include <cstring>
#include <iostream>
#include<list>
using namespace std;

int main()
{
    list<int>LinkedList = {1,3,5,7,9,11};
    for(auto i : LinkedList)
    cout<< i <<" ";
     cout<<"\n";

     
    LinkedList.push_front(2);
    LinkedList.push_back(13);
    auto it = LinkedList.begin();
    advance(it,3);
    LinkedList.insert(it,4);
    for(auto i : LinkedList)
    cout<< i <<" ";

}