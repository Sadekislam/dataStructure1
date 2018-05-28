#include<iostream>
using namespace std;
int main()
{
    int size,i,j;
    cout<<"The array size:";
    cin>>size;
    int first[size][size],second[size][size],third[size][size];
    cout<<"Enter the first array element:"<<endl;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            cin>>first[i][j];
        }
    }
    cout<<"Enter the second array element:"<<endl;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            cin>>second[i][j];
        }
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            third[i][j]=first[i][j]+second[i][j];
        }
    }
    cout<<"Addition for two matrix:"<<endl;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            cout<<third[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
