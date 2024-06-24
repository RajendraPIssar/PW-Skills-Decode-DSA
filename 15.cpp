/*

1. Write a program to print the elements of both the diagonals in a square matrix.
Input 1: 
123 
456 
789 

Output 1: 
1   3
  5 
7   9



#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "Enter rows/cols of the matrix: ";
    cin >> m;

    int a[m][m];

    cout << "Enter elements of the Matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j || (i + j == m - 1)) {
                cout << a[i][j] << " ";
            } else {
                cout << "  "; 
            }
        }
        cout << endl;
    }

    return 0;
}




2. Write a program to rotate the matrix by 90 degrees anti-clockwise.
Input 1: 
123 
456 
789 

Output 1: 
369 
258 
147



#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "Enter rows/cols of the matrix: ";
    cin >> m;

    int a[m][m];

    cout << "Enter elements of the Matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int c = 0; c < m; c++) {
        int i = 0;
        int j = m - 1;
        while (i < j) {
            swap(a[i][c], a[j][c]);
            i++;
            j--;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}




3. Write a program to print the matrix in wave form.
Input :
123
456
789

Output : 7 4 1 2 5 8 9 6 3



#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "Enter number of rows/columns: ";
    cin >> m;

    int a[m][m];

    cout << "Enter elements of the Matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int j = 0; j < m; j++) {
        if (j % 2 == 0) {
            
            for (int i = m - 1; i >= 0; i--) {
                cout << a[i][j] << " ";
            }
        } else {
            
            for (int i = 0; i < m; i++) {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}



   
4. Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.
I
nput 1: n = 3

Output 1: [[1,2,3],[8,9,4],[7,6,5]] 

Input 2: n = 1

Output 2: [[1]]



#include <iostream>
#include <vector>

using namespace std;

    vector<vector<int> > generateMatrix(int n) {
        vector<vector<int> > matrix(n, vector<int>(n, 0));
        int num = 1;
        int total_elements = n * n;
        
        int starting_row = 0;
        int ending_col = n - 1;
        int ending_row = n - 1;
        int starting_col = 0;

        while (num <= total_elements) {
            // Traverse from left to right
            for (int i = starting_col; i <= ending_col && num <= total_elements; i++) {
                matrix[starting_row][i] = num++;
            }
            starting_row++;

            // Traverse from top to bottom
            for (int i = starting_row; i <= ending_row && num <= total_elements; i++) {
                matrix[i][ending_col] = num++;
            }
            ending_col--;

            // Traverse from right to left
            for (int i = ending_col; i >= starting_col && num <= total_elements; i--) {
                matrix[ending_row][i] = num++;
            }
            ending_row--;

            // Traverse from bottom to top
            for (int i = ending_row; i >= starting_row && num <= total_elements; i--) {
                matrix[i][starting_col] = num++;
            }
            starting_col++;
        }

        return matrix;
    }

void printMatrix(const vector<vector<int> >& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}


int main() {
    int n = 3;
    vector<vector<int> > result = generateMatrix(n);
    printMatrix(result);
    
    return 0;
}



5. Predict the output :
 int main(){
   int a[][2] = {{1,2},{3,4}};
   int i, j;
   for (i = 0; i < 2; i++)
     for (j = 0; j < 2; j++)
       cout << a[i][j];
 return 0; }


 ---> 1234

*/



