#include<iostream>
using namespace std;

int main()
{
//   string s1 , s2;
//   cin>>s1 >>s2;
//   int max_size = s1.size();
//   if(max_size<s2.size())
//   {
//     max_size = s2.size();
//   }

//   for(int i = 0;i<max_size;i++)
//   {
//     if(i<s1.size())
//     {
//         cout<<s1[i];
//     }
//     if(i<s2.size())
//     {
//         cout<<s2[i];
//     }

//     cout<<"\n";
//   }


/// p2;
    //   int n;
    // cin >> n;
    // string arr[50];

    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }

   
    // for (int i = 0; i < n; i++) {
    //      int cnt = 0;
    //     if (arr[i][0] > 'Z') { 
    //         cnt++;
    //         cout << arr[i] << " " << cnt <<"\n";
            
    //     }
    // }


    // return ;

    string sent;
    cin>>sent;
    int size = sent.size();
    for(int i = 0;i<size;i++)
    {
        if(sent[i]<'['){
            cout<<sent[i];
        }else if (sent[i]<='9')
        {
            cout<<sent[i+2];
        }
    }
}