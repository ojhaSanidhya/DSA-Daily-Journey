#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Shifting neg numbers left side, M-1
// void ShiftingNegativeNumbers(int arr[], int n){  
//     int arr2[n];
//     int left = 0;
//     int right = n-1; // Last block
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]>=0)
//         {
//             arr2[right] = arr[i];
//             right--;
//         }
//         else if(arr[i]<0){
//             arr2[left] = arr[i];
//             left++;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr2[i]<<" ";
//     }
    
    
// }

// Shifting neg numbers left side, M-2
void ShiftingNegNumbers(int arr[], int n){
    int StoreNeg = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<0)
        {
            swap(arr[i], arr[StoreNeg]);
            StoreNeg++;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

// Sort 0,1 and 2 / sort Colors
void SortColors(int arr[], int n){
    int left = 0;
    int right = n-1;
    int i = 0;
    while (i<=right) //Condn dhyaan dena.
    {
        if (arr[i]==0)
        {
            swap(arr[i], arr[left]);
            left++;
            i++;
        }
        if (arr[i]==2)
        {
            swap(arr[i], arr[right]);
            right--;
            // Yaha i++ nahi karna hai.
        }
        else{
            i++;
        }


        
    }
    
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    
}

//Rotate Array by shifting, M-1
void RotateArray(int arr[], int n){
    int temp1 = arr[n-1];
    int temp2 = arr[n-2];
    int temp3 = arr[n-3];
    int k = 3;
    for (int i = n-1; i >=k ; i--)
    {
        arr[i] = arr[i-3];
    }
    if (arr[2])
    {
        arr[2] = temp1;
    }
    if (arr[1])
    {
        arr[1] = temp2;
    }
    if (arr[0])
    {
        arr[0] = temp3;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}


// Missing numbers
void Missingterm(vector<int>arr){
    int size = arr.size();
  // Sum of n numbers by AP formula
    int Sum = (8*(1+8))/2;

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans + arr[i];
    }
    cout<< Sum - ans;
}

// Rearrange Array Elements by Sign
void rearrangeArray(vector<int>& nums){
        int size = nums.size();
        int left = 0;
        int right = 0;
        vector<int>positive(size/2);
        vector<int>negative(size/2);
        for(int i = 0; i<size; i++){
            if(nums[i]>0){
                positive[left] = nums[i];
                if(left<((size/2)-1)){
                    left++;
                }
                
            }
            else{
                negative[right] = nums[i];
                if(right<((size/2)-1)){
                    right++;
                }
            }
        }
        vector<int>newVector(size);
         left = 0;
         right = 0;
        for(int j = 0; j<size; j++){
            if(j==0){    
                newVector[j] = positive[left];
                left++;
            }
            else{
                if(newVector[j-1]>0){
                    newVector[j] = negative[right];
                    right++;
                }
                else{
                    newVector[j] = positive[left];
                    left++;
                };
            }
        }
    nums = newVector;
    for (int k = 0; k < size; k++)
    {
        cout<<nums[k]<<" ";
    }
    
}

//Rotate an array by 90degree
void RotateAnVector(vector<vector<int> >v){
    int n = v.size();
//transpose
    for (int i = 0; i < n; i++)
{
    for (int j = i; j < v[i].size(); j++)
    {
        swap(v[i][j], v[j][i]);
    }
    
}
// Reverse
   for (int i = 0; i < n; i++)
   {
     reverse(v[i].begin(), v[i].end()); // For using reverse fn we have to include 'Algorithm' header file
   }
//Print
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < v[i].size(); j++)
    {
        cout<<v[i][j] <<" ";
    }
    cout<<endl;  
}

}



int main(){
    // int arr[] = {2,3,-1,-3,4,-5,-6,8,9};
    // int n = 9;
// Shifting neg numbers left side, M-1
    // ShiftingNegativeNumbers(arr, n);

// Shifting neg numbers left side, M-2
    // ShiftingNegNumbers(arr, n);


// Sort Colors, // red - 0
                // white - 1
                // blue - 2
int arr[] = {2,0,2,1,1,0};
int n = 6;
SortColors(arr, n);

//Rotate Array by shifting, M-1
// int arr[] = {1,2,3,4,5,6,7};
// int n = 7;
// RotateArray(arr, n);

// Missing numbers, let's do in vector
// vector<int>arr = {1,7,3,2,5,6,8};
// Missingterm(arr);



//Rearrange Array Elements by Sign
// vector<int>nums = {3,1,-2,-5,2,-4};
// rearrangeArray(nums);

//Rotate an array by 90degree
// vector<vector<int> >v(3, vector<int>(3));
// v[0][0] = 1;
// v[0][1] = 2;
// v[0][2] = 3;
// v[1][0] = 4;
// v[1][1] = 5;
// v[1][2] = 6;
// v[2][0] = 7;
// v[2][1] = 8;
// v[2][2] = 9;
// RotateAnVector(v);



}
