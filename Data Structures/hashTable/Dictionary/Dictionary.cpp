#include<iostream>
#include<vector>
#include<string>
using namespace std;


class Dictionary 
{
    public:
    Dictionary()
    {
        initialSize = 10;
        entries = vector<pair<string,string>>(initialSize);
        entriesCount = 0;
    };



    void ResizeOrNot()
    {
        if(entriesCount < initialSize)
        {
            return;
        }
        int newSize = entries.size() + initialSize;

        vector<pair<string,string>> newArray(newSize);
        for(int i = 0 ; i<entriesCount;i++)
        {
            newArray[i] = entries[i];
            entries.empty();
            entries.resize(newSize);
            entries = newArray;
        }
    };

     int Size() { return entriesCount; }
    void set(string key , string value)
    {
        for(int i = 0 ; i<entriesCount;i++)
        {
            if(entries[i].first !="" && entries[i].first == key)
            {
                entries[i].second = value;
                return;
            }
        }
        ResizeOrNot();
        pair<string, string> newPair({key, value});
         entries[entriesCount] = newPair;
         entriesCount++;
    };

    string Get(string key)
    {
        for(int i = 0;i<entriesCount;i++)
        {
            if(entries[i].first !="" && entries[i].first == key)
            {
                return entries[i].second;
            }
        }
        cout<<"Key not found"<<"\n";
    }

     bool Remove(string key) {
    // Search for the entry with the specified key
    for (int i = 0; i < entriesCount; i++) {
      if (entries[i].first != "" && entries[i].first == key) {
        entries[i] = entries[entriesCount - 1];
        entries[entriesCount - 1] = pair<string, string>({"", ""});
        entriesCount--;
        return true;
      }
    }
    return false;
  }
  void Print() {
    cout << "----------" << endl;
    cout << "[size] " << Size() << endl;
    for (int i = 0; i < entries.size(); i++) {
      if (entries[i].first == "") {
        cout << "[" << i << "]" << endl;
      } else {
        cout << "[" << i << "]" << entries[i].first << ":" << entries[i].second
             << endl;
      }
    }
    cout << "==========" << endl;
  }
    private:
     int initialSize;
     vector<pair<string,string>> entries;
     int entriesCount;
};

int main()
{
    Dictionary dict;
    dict.set("apple", "red");
    dict.set("banana", "yellow");
    dict.set("cherry", "red");
    dict.set("chey", "red");
    dict.set("chery", "red");
    dict.Print();
}
