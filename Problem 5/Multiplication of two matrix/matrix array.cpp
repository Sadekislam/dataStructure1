#include<iostream>
using namespace std;
int main(){
    int a[3][3],b[3][3],i,j,k,mul=0,ab[3][3],m,n;
    cout<<"enter your raw and coloumn"<<endl;
    cin>>m>>n;

    cout<<"enter your element of matrix a"<<endl;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    cout<<"your element of a is"<<endl;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
                cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"enter your element of b"<<endl;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>b[i][j];
        }
    }

    cout<<"your element of b is"<<endl;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
                cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }


   for(i=0;i<m;i++){
        for(j=0;j<n;j++){
                mul=0;
                for(k=0;k<n;k++){
                    mul=mul+a[i][k]*b[k][j];
        }
        ab[i][j]=mul;
    }
   }
    cout<<"your multiplication a*b is"<<endl;

     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
                cout<<ab[i][j]<<"\t";
        }
        cout<<endl;
     }

    return 0;

}
