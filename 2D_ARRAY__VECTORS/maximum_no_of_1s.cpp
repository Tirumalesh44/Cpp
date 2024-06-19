#include <iostream>
using namespace std;
#include <vector>

int maximun_zeros(vector<vector<int>> &arr)
{
    int maxOnes = INT_FAST8_MIN;
    int maxOnesRow = -1;
    int column = arr[0].size();
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            if(arr[i][j]==1)
            {
                int numberOfOnes = column-j;
                if(numberOfOnes>maxOnes)
                {
                    maxOnes=numberOfOnes;
                    maxOnesRow=i;
                }
                break;
            }
        }
    } 
    return maxOnesRow;     
}
int main()
{
    int n,m;
    cout<<"enter the no of rows and columns"<<endl;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int k = maximun_zeros(arr);
    cout<<"the maximum zeros in "<<k<<" row"<<endl;
    return 0;
}