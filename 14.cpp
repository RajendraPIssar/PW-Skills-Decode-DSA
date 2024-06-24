/*

Q1: Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns. 



#include<iostream>
using namespace std;

int main () {
    int arr[5][5];
    for (int i = 0; i <= 4; i++) {
        for (int j = 0; j <= 4; j++) {
            arr[i][j] = 10;
        }
    }
    for (int i = 0; i <= 4; i++) {
        for (int j = 0; j <= 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}



Q2: Write a program to add two matrices and save the result in one of the given matrices.
Input 1: 
123     458
456  +  008
789     120

Output 1:
5 7 11
4 5 14
8 10 9



#include<iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter rows: ";
    cin >> m;
    cout << "Enter cols: ";
    cin >> n;

    int a[m][n], b[m][n];

    cout << "Enter elements of 1st Matrix" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter elements of 2nd Matrix" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            b[i][j] = a[i][j] + b[i][j];
            cout<< b[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}




Q3: Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the rectangle from (l1,r1) to (l2, r2).
Input 1:
1 2 -3 4
0 0 -4 2
1 -1 2 3
-4 -5 -7 0
l1 = 1, r1 = 2 , l2 = 3 , r2 = 3 

Output 1: -4

Input 2: 1 2 -3 4
   
 0 0 -4 2
1 -1 2 3
-4 -5 -7 0
l1 = 1, r1 = 0 , l2 = 0 , r2 = 3 

Output 1: 2



#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;

    int a[m][n];
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int x1, y1, x2, y2;
    cout << "Enter the 1st coordinate (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter the 2nd coordinate (x2 y2): ";
    cin >> x2 >> y2;

    int sum = 0;
    for (int i = x1; i <= x2; i++) {
        for (int j = y1; j <= y2; j++) {
            sum += a[i][j];
        }
    }

    cout << "The sum of the elements between the coordinates is: " << sum << endl;

    return 0;
}



Q4: Write a C++ program to find the largest element of a given 2D array of integers. 
Input 1:
1346
2457
3568
4679

Output 1: 9

Q5: Write a program to print the row number having the maximum sum in a given matrix. 
Input 1:
1 3 5 7
3 4 7 8
1 4 12 3

Output 1: 2
Explanation : The 2nd row has the maximum sum i.e. 1+4+12+3 = 20



#include <iostream>
#include <climits> 
using namespace std;

int main() {
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;

    int a[m][n];
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int maxSum = INT_MIN;
    int maxRow = -1;
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += a[i][j];
        }
        if (sum > maxSum) {
            maxSum = sum;
            maxRow = i;
        }
    }

    cout << "The maximum row sum is: " << maxSum << " in row " << maxRow << endl;

    return 0;
}




Q5: Write a function which accepts a 2D array of integers and its size as arguments and displays the elements of middle row and the elements of middle column.
[Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...] 
Input 1:
1 2 3 4 5
3 4 5 6 7
7 6 5 4 3 
8 7 6 5 4 
1 2 37 80

Output 1:
  3 
  5
76543 
  6
  37


#include <iostream>
using namespace std;

int main() {
    int m;
    cout << "Enter rows/cols: ";
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
            if (i == m / 2 || j == m / 2)
                cout << a[i][j] << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}



*/





