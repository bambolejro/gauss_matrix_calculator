#include<bits/stdc++.h>
#include "headers/display_matrix.h"

#define N 3

using namespace std;

void fill_matrix(double mat[N][N+1])
{
    cout<<"Podaj rozmiar"<<endl;

    cout<<"Wypelnij macierz"<<endl;
    for(int i=0; i<N; i++)
        for(int j=0; j<=N; j++)
            cin>>mat[i][j];
    print(mat);
}