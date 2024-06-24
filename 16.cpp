/*

1. Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place. 
Input :
111
101
111 

Output : 
101 
000 
101



#include <iostream>
#include <vector>

using namespace std;

void setZeroes(vector<vector <int> >& matrix) 
{
    int n= matrix.size();
    int m= matrix[0].size();
    vector<int> rowarr(n,0);
    vector<int> colarr(m,0);
        
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==0)
            {
                rowarr[i]=1;
                colarr[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(rowarr[i]==1 ||colarr[j]==1)
            {
                matrix[i][j]=0;
            }
        }
    }
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

    vector<int> v1;
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(1);

    vector<int> v2;
    v2.push_back(1);
    v2.push_back(0);
    v2.push_back(1);

    vector<int> v3;
    v3.push_back(1);
    v3.push_back(1);
    v3.push_back(1);

    vector< vector<int> > matrix ;
    matrix.push_back(v1);
    matrix.push_back(v2);
    matrix.push_back(v3);



    cout << "Input Matrix : " << endl;
    printMatrix(matrix);
    
    setZeroes(matrix);
    
    cout << "\nOutput Matrix : " << endl;
    printMatrix(matrix);
    
    return 0;
}



*/

