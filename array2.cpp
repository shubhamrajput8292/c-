#include<iostream>
using namespace std;
void printcol ( int arr[] [4], int row ,int col)
{
    cout << "Column-wise Printing:\n";

    for(int j = 0; j < col; j++)
    {
        for(int i = 0; i < row; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
  int arr[3][4] =  { 0,1,2,3,4,5,6,7,8,9,10,11};
    for( int row=0;row < 3 ;row++)
    {
    for(int col=0; col<4; col++)
    {
    cout<< arr[row][col]<< " ";
    }
    cout<< endl;
}
    printcol (arr,3,4);

}