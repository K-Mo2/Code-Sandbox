#include <bits/stdc++.h>
using namespace std;

using matrix = vector<vector<int>>;


void matrices_sum(matrix &mat1, matrix &mat2, matrix &sum, int r, int c, int i, int j){
    if(i == r){
        return;
    }

    if(j == c){
        return matrices_sum(mat1, mat2, sum, r, c, i+1, 0);
    }
    
    sum[i][j] = mat1[i][j] + mat2[i][j];
    return matrices_sum(mat1, mat2, sum, r, c, i, j+1);

}

int main(){

    int r, c;
    cin >> r >> c;
    matrix arr1(r, vector<int>(c));
    matrix arr2(r, vector<int>(c));
    matrix sum(r, vector<int>(c));
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr1[i][j];
        }
    }
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr2[i][j];
        }
    }
    
    matrices_sum(arr1, arr2, sum, r, c, 0, 0);
    
       
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
 
    return 0;
}
