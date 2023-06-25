#include <iostream>

#include "headers/gauss.h"

#define N 3
using namespace std;

int main()
{
    double* b;
    while(true){
    int a;
    cout<<"Type ,,1'' if you want to read matrix from file."<<endl;
    cout<<"Type ,,2'' if you want to fill matrix yourself "<<endl;
    cout<<"Type ,,3'' if you want to exit "<<endl;
    cin>> a;
    if( a==3)
    {
        return 0;
    }

    double mat[N][N+1];

    b = gauss(mat,a);
    printf("\nRozwiązanie: \n");
    for (int i=0; i<N; i++)
        printf("%lf\n", b[i]);
}
}