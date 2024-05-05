    #include<iostream>
    using namespace std;
     
    int main() 
    {
        // int x = 6;
        // cout<< x << "\n"; //6
        // int *ptr = &x;  // 
        // cout<<ptr<<"\n"; // address
        // cout<<*ptr<<"\n"; /// 6
        // ptr+=5;
        // cout<<ptr<<"\n"; // address
        // cout<<*ptr<<"\n"; /// new  address

        // char msg[] = {'h','e','l','l','o'};
        // for(auto x : msg)
        // cout<<x <<""; //hello
        // cout<<"\n";
        // char *ptr = msg; //// not &msg because msg is already pointer assign to the first address in the array
        // cout<<*ptr<<"\n"; //h
        // *ptr = 'H';
        // cout<<*ptr<<"\n"; // H
        // *ptr++;
        //  *ptr = 'E';
        // cout<<*ptr<<"\n";
        //  for(auto x : msg)
        // cout<<x <<"";

        int arr[5]  = {1,4,5,6,7};

        for(int i=0;i<5;i++)
        {
            cout<<arr[i]<<" "; //1 4 5 6 7
        }
        cout<<"\n";
        for(int i = 0;i<5;i++)
        {
            cout<<*(arr+i) <<" "; /// 1 4 5 6 7
        }
    }