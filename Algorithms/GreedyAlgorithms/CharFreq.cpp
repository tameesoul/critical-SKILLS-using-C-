#include "CharFreq.h"
using namespace std;

CharFreq::CharFreq(){};


void CharFreq::ASCIIMethod(string message)
{
    int freq [128] ={0};
    cout<<"ASCIIMethod\n";
    for(int i = 0;i<message.length();i++)
    {
        int current_char = (int)message[i];
        freq[current_char]++;
    }
    
    for(int i =0;i<128;i++)
    {
        if(freq[i]>0)
        {
            char c = (char)i;
            cout<< c <<" " <<freq[i]<<"\n";
        }
    }
}
void CharFreq::AnyCodeMethod(string message)
{
     unordered_map<char, int>freq;
     for(int i = 0;i<message.length();i++)
     {
         if(freq.find(message[i]) == freq.end())
         {
             freq[message[i]] = 1;
         }
         else
         {
             freq[message[i]]++;
         }
     }
     
     for(auto value : freq)
     {
         cout<<value.first << " " << value.second <<"\n";
     }
}


