//Two matrix can only be multiplied if the colomn of first matrix is equal to the rows of the second matrix if A (2-by-7) and B (7-by-3 ) the AB is possible , and the matrix that will comes out as the product will be AB (rows of first matrix-by-colomns of the second matrix) in this example it will be AB(2-by-3).
/*	🌿 𝔸𝕝𝕝𝕒𝕙 🌿	*/
#include<iostream>
using namespace std;

int main(){
    int rA,cA,rB,cB;
    cout<<"Number of Rows and Colomns 1st matrix :"<<endl;
    cin>>rA>>cA;
    cout<<"Number of Rows and Colomns for 2nd matrix :"<<endl;
    cin>>rB>>cB;
    if(cA != rB){
        cout<<"The product of these two matrix is not possible"<<endl;
        return 0;
    }
    int A[rA][cA],B[rB][cB],AB[rA][cB];    

    cout<<"First matrix (Order :"<<rA <<"-by-"<<cA<<" 'Should be-> "<<rA*cA<<" elements')"<<endl;
    for (int i = 0; i < rA; i++)
    {
        for (int j = 0; j < cA; j++)
        {
            cin>> A[i][j] ;
        }
        
    }
    cout<<"Second matrix (Order :"<<rB <<"-by-"<<cB<<" 'Should be-> "<<rB*cB<<" elements')"<<endl;
    for (int i = 0; i < rB; i++)
    {
        for (int j = 0; j < cB; j++)
        {
           cin>> B[i][j] ;
        }
        
    }
    cout<<endl;
    cout<<"first matrix is :"<<endl;
    cout<<"(A "<<rA<<"-by-"<<cA<<" Matrix.)"<<endl;
    for (int i = 0; i < rA; i++)
    {
        for (int j = 0; j < cA; j++)
        {
            cout<< A[i][j] <<"  ";
        }cout<<endl;
        
    }
    cout<<endl;
    cout<<"Second matrix is :"<<endl;
    cout<<"(A "<<rB<<"-by-"<<cB<<" Matrix.)"<<endl;
    for (int i = 0; i < rB; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            cout<< B[i][j] <<"  ";
        }cout<<endl;
        
    }
    
    for (int i = 0; i < rA ; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            AB[i][j]=0;
            for (int h = 0; h < rB; h++)//detail in last line
            {
             AB[i][j]  += A[i][h] * B[h][j];
                 
            }
        
        }
        
    }

 cout<<"The Product of this matrix is :(Order :"<<rA <<"-by-"<<cB<<" )"<<endl;
    for (int i = 0; i < rA; i++)
    {
        for (int j = 0; j < cB; j++)
        {
            cout<< AB[i][j] <<"  ";
        }cout<<endl;
        
    }
    
    return 0;
}// if there is a row like 1 2 3 4 5 6 7 8 and a colomn 1 2 3 4 5 6 7 8 ( for making clear ) lets say here we will multiply each number(in rows) with itself like ( which are in the colomn ) and will add them and make them one number so to add them this loop will run for cA or rB ( both are same)