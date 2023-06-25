#include<bits/stdc++.h>
#include "headers/Input_Output.h"
#include "headers/display_matrix.h" // usun to

#define N 3

void swap_row(double mat[N][N+1], int i, int j)
{
    for (int k=0; k<=N; k++)
    {
        double temp = mat[i][k];
        mat[i][k] = mat[j][k];
        mat[j][k] = temp;
    }
}

int eliminacja(double mat[N][N + 1])
{
    for (int k=0; k<N; k++)
    {
        int i_max = k;
        int v_max = mat[i_max][k];

        for (int i = k+1; i < N; i++)
            if (abs(mat[i][k]) > v_max)
                v_max = mat[i][k], i_max = i;


        if (!mat[k][i_max])
            return k;

//        Zamiana aktualnego wiersza na większy
        if (i_max != k)
            swap_row(mat, k, i_max);


        for (int i=k+1; i<N; i++)
        {

            double f = mat[i][k]/mat[k][k];

            for (int j=k+1; j<=N; j++){
                mat[i][j] -= mat[k][j]*f;}
            mat[i][k] = 0;
        }
//        print(mat);
    }
//    print(mat);
    return -1;
}


double* rozw_rownanie(double mat[N][N+1])
{
    double* x= new double[N];


    for (int i = N-1; i >= 0; i--)
    {
        x[i] = mat[i][N];
        for (int j=i+1; j<N; j++)
        {

            x[i] -= mat[i][j]*x[j];
        }

        x[i] = x[i]/mat[i][i];
    }

//    printf("\nRozwiązanie: \n");
//    for (int i=0; i<N; i++)
//        printf("%lf\n", x[i]);

    write_to_file(x);
    return x;
}