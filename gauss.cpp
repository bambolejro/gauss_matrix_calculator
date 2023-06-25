#include<bits/stdc++.h>
#include "headers/Input_Output.h"
#include "headers/fill_matrix.h"
#include "headers/operations_on_matrix.h"
#include "headers/display_matrix.h" // usun to

#define N 3
using namespace std;

double* gauss(double mat[N][N + 1],int a)
{
    double* wynik = new double[N];
    if (a==1){
        read_matrix_from_file(mat);
    }
    else if(a==2){
        fill_matrix(mat);
    }
    else{
        cout<<"Typed wrong value."<<endl;
    }
    cout<<"Przed eliminacja"<<endl;
    print(mat);
    /* redukcja do macierzy schodkowej */
    int macierz_poj = eliminacja(mat);

    if (macierz_poj != -1)
    {
        printf("Singular Matrix.\n");


        if (mat[macierz_poj][N])
            printf("Error.");
        else
            printf("Nieskonczona ilosc rozwiazan");


    }
    wynik = rozw_rownanie(mat);
    printf("\nRozwiązanie: \n");
    for (int i=0; i<N; i++)
        printf("%lf\n", wynik[i]);
    return wynik;
}