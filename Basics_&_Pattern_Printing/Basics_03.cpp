#include <iostream>
using namespace std;

int main()
{

    // Full Pyramid
    //  for (int row = 0; row < 5; row++)
    //  {
    //      for (int col = 0; col < 5-1-row; col++)
    //      {
    //          cout<<" ";
    //      }
    //      for (int col = 0; col < row+1; col++)
    //      {
    //          cout<<"* ";
    //      }
    //      cout<<endl;
    //  }

    // Inverted Full Pyramid
    //  for (int row = 0; row < 4; row++)
    //  {
    //      for (int col = 0; col < row; col++)
    //      {
    //          cout<<" ";
    //      }
    //      for (int col = 0; col < 4-row; col++)
    //      {
    //          cout<<"* ";
    //      }
    //      cout<<endl;
    //  }

    // Diamond = Combination of Full Pyramid and Inverted Full Pyramid
    // for (int row = 0; row < 4; row++)
    // {
    //     for (int col = 0; col < 4 - 1 - row; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for (int row = 0; row < 4; row++)
    // {
    //     for (int col = 0; col < row; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < 4 - row; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // Hollo Pyramid
    //   for (int row = 0; row < 4; row++)
    //  {
    //      for (int col = 0; col < 4 - 1 - row; col++)
    //      {
    //          cout << " ";
    //      }
    //      for (int col = 0; col < row + 1; col++)
    //      {
    //          if (col==0 || col==row +  1 - 1) // Last col is (row+1) and if we count from zero so last col is ((row+1)-1)
    //          {
    //              cout << "* ";
    //          }
    //          else
    //          {
    //              cout << "  ";
    //          }

    //     }
    //     cout << endl;
    // }

    // Inverted Hollo Pyramid
    // for (int row = 0; row < 5; row++)
    // {
    //     for (int col = 0; col < row; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < 5 - row; col++)
    //     {
    //         if (col == 0 || col == 5 - row - 1) // Last col is (5-row) and if we count from zero so last col is ((5-row)-1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    // Flipped Solid Pattern
    //  for (int row = 0; row < 4; row++)
    //  {
    //      for (int col = 0; col < 4 - row; col++)
    //      {
    //          cout << "*";
    //      }
    //      for (int col = 0; col < 2 * row + 1; col++)
    //      {
    //          cout << " ";
    //      }
    //      for (int col = 0; col < 4 - row; col++)
    //      {
    //          cout << "*";
    //      }
    //      cout << endl;
    //  }
    //  for (int row = 0; row < 4; row++)
    //  {
    //      for (int col = 0; col < row+1; col++)
    //      {
    //          cout << "*";
    //      }
    //      for (int col = 0; col < 2*4-2*row-1; col++)
    //      {
    //          cout << " ";
    //      }
    //      for (int col = 0; col < row+1; col++)
    //      {
    //          cout << "*";
    //      }
    //      cout << endl;
    //  }

    // Fancy Sa pattern
    // int n;
    // cin>>n;
    // cout<<endl;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < 2*row+1; col++)
    //     {
    //         if (col%2==0)
    //         {
    //             cout << row+1;
    //         }
    //         else
    //         {
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Inverted Hollo Half Pyramid
    //  int n;
    //  cin>>n;
    //  for (int row = 0; row < n; row++)
    //  {
    //      for (int col = 0; col < n-row; col++)
    //      {
    //          if (row==0)
    //          {
    //              cout<<"*";
    //          }
    //          else
    //          {
    //              if (col==0 || col==n-row-1)
    //              {
    //                  cout<<"*";
    //              }
    //              else
    //              {
    //                  cout<<" ";
    //              }
    //          }
    //      }
    //      cout<<endl;
    //  }

    //Alphabet Pattern
    // for (int row = 0; row < 5; row++)
    // {
    //     for (int col = 0; col < row+ 1; col++)
    //     {
    //         char ch = col + 1+ 'A' - 1;
    //         cout << ch;
    //     }
    //     cout << endl;
    // }
}
