#include<iostream>
using namespace std;

int main()
{
   int rows, cols;
   cin >> rows >> cols;
   int robot[100][100];
   for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
         cin >> robot[i][j];
      }
   }

   int i = 0, j = 0, sum = 0;
   while (i < rows && j < cols) {
      sum += robot[i][j];

      int next_value, best_i = -1, best_j = -1;
      // is ok right ?
      if (j + 1 < cols) {
         next_value = robot[i][j + 1], best_i = i, best_j = j + 1;
      }
      // is ok down ?
      if (i + 1 < rows) {
         if (best_i == -1 || next_value < robot[i + 1][j]) {
            next_value = robot[i + 1][j], best_i = i + 1, best_j = j;
         }
      }
      // is diag okay ?
      if (i + 1 < rows && j + 1 < cols) {
         if (best_i == -1 || best_j == -1 || next_value < robot[i + 1][j + 1]) {
            // Corrected the comparison in the diagonal check
            next_value = robot[i + 1][j + 1], best_i = i + 1, best_j = j + 1;
         }
      }

      if (best_i == -1) {
         break;
      }

      i = best_i;
      j = best_j;
   }

   cout << sum;

   return 0;
}
