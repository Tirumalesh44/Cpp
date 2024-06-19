#include <iostream>
#include <vector>
using namespace std;

void mergeSort(vector<int> &v1,vector<int> &v2,vector<int> &v3)
{
    int m = v1.size();
    int n = v2.size();
    int i=0,j=0,k=0;
    while(i<m && j<n)
    {
        if(v1[i]<=v2[j])
        {
            v3[k] = v1[i];
            k++,i++;
        }
        else
        {
            v3[k] = v2[j];
            k++,j++;
        }
    }
    while(i<m)
    {
        v3[k] = v1[i];
        k++,i++;
    }
    while(j<n)
    {
        v3[k] = v2[j];
        k++,j++;
    }
}
int main()
{
    vector<int> v1,v2,v3;
    int n,m;
    cout<<"enter the two sizes of arrays"<<endl;
    cin>>m>>n;
    cout<<"enter the values of array1"<<endl;
    for(int i=0;i<m;i++)
    {
        int ele;
        cin>>ele;
        v1.push_back(ele);
    }
    cout<<"enter the values of array2"<<endl;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v2.push_back(ele);
    }

    v3.resize(m+n);
    mergeSort(v1,v2,v3);
    for(int i=0;i<v3.size();i++)
    {    
        cout<<v3[i];
    }
    return 0;
}