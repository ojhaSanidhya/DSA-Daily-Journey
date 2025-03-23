#include <iostream>
#include<limits.h>
#include<vector>
using namespace std;

// void printArray(int arr[][4], int row, int col){
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout << endl;
//     }
    
// }

// void colWisePrint(int arr[][4], int row, int col){
//     for (int i = 0; i < col; i++)
//     {
//         for (int j = 0; j < row; j++)
//         {
//             cout<<arr[j][i]<<" ";
//         }
//         cout<<endl;
//     }
    
// }

// int findTarget(int arr[][4], int row, int col, int target){

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (arr[i][j] == target)
//             {
//                return true;
//             }
            
//         }
        
//     }
//     return false;
// }

// int findMax(int arr[][4], int row, int col, int ans){
//         for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (arr[i][j]>ans)
//             {
//                ans = arr[i][j];
//             }
            
//         }
//         cout<<endl;
//     }
//     return ans;
// }

// int findMin(int arr[][4], int row, int col, int ans){
//         for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (arr[i][j]<ans)
//             {
//                ans = arr[i][j];
//             }
            
//         }
//         cout<<endl;
//     }
//     return ans;
// }

void transpose(int arr[][4], int row, int col){
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
        cout << endl;
    }

}


int main(){

 //create a 2D array 
//  int arr[3][3];

//iniitialse
// int arr[3][4] = {
//                     {1,2,3,4},
//                     {5,6,7,8},
//                     {9,10,1,11}
//                 };

// int brr[] = {1,2,3,4};
// int arr[][4] = {
//     {1,2,3,4},
//     {5,6,7,8},
//     {9,10,1,11}
//     };
// behind the scene this 2-D matrix convert to linear or 2-D to 1-D
// formula - C*i+j, C is column, i is row matrix, j is col matrix

// int arr[3][4] = {
//     {1,2,3,4},
//     {5,6,7,8},
//     {9,10,1,11}
//     };
// int row = 3;
// int col = 4;
// printArray(arr, row, col);
// colWisePrint(arr, row, col);

//Input
// int arr[3][3];
// int row = 3;
// int col = 3;

// for (int i = 0; i < row; i++)
// {
//     for (int j = 0; j < col; j++)
//     {
//         cout << "Enter the input for row index: " << i << " column index: " << j << endl;
//         cin>>arr[i][j];
//     }
// }

  int arr[4][4] = {
         {1,2,3,4},
         {5,6,70,8},
         {9,10,1,11},
         {12,24,46,89}
         };
  int row = 4;
  int col = 4;

// int target = 11;
// int ans  = findTarget(arr, row, col, target);
// cout<<"Found or not: "<< ans;

// int ans = INT_MIN;
// cout<<findMax(arr, row, col, ans);

// int ans = INT_MAX;
// cout<<findMin(arr, row, col, ans);

transpose(arr, row, col);



}
