int main()
{
                    //0  1   2
    int mat[3][3] = {{1, 2, 3}, //0
                     {4, 5, 6}, //1
                     {7, 8, 9}};//2

    int i, j; // i = linhas referentes
              // j = colunas referentes

    printf("imprima a primerira linha:\n");
    for (j = 0; j < 3; j++)
    {
        printf("%d", mat[0][j]);
    }
    printf("\n \n imprimata toda a matriz:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", mat[i][j]);
        }
    }
    printf("\n");
    return 0; 
}