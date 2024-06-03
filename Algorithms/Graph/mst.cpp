#include<iostream>
#include <climits>
using namespace std;

  

int main()
{
    char labels[] = {'1', '2', '3', '4', '5', '6'};
     double graph[6][6] = 
    {{0, 6.7, 5.2, 2.8, 5.6, 3.6}, {6.7, 0, 5.7, 7.3, 5.1, 3.2},
     {5.2, 5.7, 0, 3.4, 8.5, 4.0}, {2.8, 7.3, 3.4, 0, 8, 4.4},
     {5.6, 5.1, 8.5, 8, 0, 4.6},   {3.6, 3.2, 4, 4.4, 4.6, 0}};
    int vertices = 6;
    int edges = 0;
     bool selected [6]  = {false};
     selected[0] = true;
     while(edges< vertices - 1)
     {
        double min = INT_MAX;
        int from = -1;
        int to = -1;

        for(int i = 0;i<6;i++)
        {
            if(selected[i] == true)
            {
                for(int j = 0;j<6;j++)
                {
                    if(selected[j] == false && graph[i][j] < min && graph[i][j] >0)
                    {
                        min = graph[i][j];
                        from = i;
                        to = j;
                    }
                }
            }
        }
        selected[to] = true;
        edges++;
         cout << labels[from] << " - " << labels[to] << " : "
         << graph[from][to] << endl;
     }
}