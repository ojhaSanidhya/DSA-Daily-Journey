// Home Work QUESTION

#include<iostream>
using namespace std;
int main(){

//1) Numeric hollow inverted half pyramid :-
// for (int row = 0; row < 5; row++)
// {
//     for (int col = 0; col < 5-row; col++)
// {
//     if (row==0)
//     {
//         cout<<col+row+1;
//     }
//     else
//     {
//         if (col==0 || col==5-row-1)
//         {
//             cout<<col+row+1;
//         }
//         else
//         {
//             cout<<" ";
//         }
//     }
// }
// cout<<endl;
// }

//2) Numeric Pallindrome eqilateral pyramid :-
// int n;
// cin>>n;
// for (int row = 0; row < n; row++)
// {
//     for (int col = 0; col < n-row-1; col++)
//     {
//         cout<<" ";
//     }
//     for (int col = 0; col < row+1; col++)
//     {
//         cout<<col+1;
//     }
//     for (int col = 0; col <= row; col++)
//     {
//        if (row==0)
//        {
//         cout<<" ";
//        }
//        else
//        {
//         if (col==row)
//         {
//            cout<<" ";
//         }
//         else
//         {
//             cout<< row-col;
//         }
        
//        }
//     }
//     cout<<endl;
    
// }

// Solid Half Diamond
// int n;
// int q;
// cin>>n;
// cin>>q;
// for (int row = 0; row < n; row++)
// {
//     for (int col = 0; col < row+1; col++)
//     {
//        cout<<"*";
//     }
//     cout<<endl;
// }
// for (int row = 0; row < q; row++)
// {
//     for (int col = 0; col < q-row; col++)
//     {
//        cout<<"*";
//     }
//     cout<<endl;
// }

//Floid Triangle
int n;
cin>>n;
int q = 0;
for (int row = 0; row < n; row++)
{
    for (int col = 0; col < row+1; col++)
    {
        q= q+1;
        cout<<q<<" ";
    }
    cout<<endl;
}

//Butterfly Pattern
// int n;
// cin>>n;
// for (int row = 0; row < 4; row++)
// {
//     for (int col = 0; col < row+1; col++)
//     {
//         cout<<"* ";
//     }
//     for (int col = 0; col < 2*4-2*row-2; col++)
//     {
//         cout<<"  ";
//     }
//     for (int col = 0; col < row+1; col++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// for (int row = 0; row < 4; row++)
// {
//     for (int col = 0; col < 4-row; col++)
//     {
//         cout<<"* ";
//     }
//     for (int col = 0; col < 2*row; col++)
//     {
//         cout<<"  ";
//     }
//     for (int col = 0; col < 4-row; col++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
// }

}
