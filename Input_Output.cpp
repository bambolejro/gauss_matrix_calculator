#include<bits/stdc++.h>
#include "headers/Input_Output.h"
#define N 3

void write_to_file(double x[N])
{
    char xyz[3] = {'x','y','z'};

    std::ofstream result ("example.txt");
    if (result.is_open())
    {
        result << "Here is the solution.\n";
        for(int count = 0; count < N; count ++){
            result <<xyz[count]<<" = "<< x[count] << " \n" ;
        }
        result.close();
    }
}
void read_matrix_from_file(double mat[N][N+1])
{
    std::ifstream in_file;
    in_file.open("matrix.txt");
    for (size_t i = 0; i < 3; ++i)
    {
        for (size_t j = 0; j < 4; ++j)
        {in_file >> mat[i][j];}
    }
    in_file.close();

    for (int i=0; i<3; i++, printf("\n"))
        for (int j=0; j<=3; j++)
            printf("%lf ", mat[i][j]);
}