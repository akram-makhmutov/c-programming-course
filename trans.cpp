int ** transpose(const int * const * m, unsigned rows, unsigned cols)
{
    int **seraph = new int *[cols];
    for (int i = 0; i != cols; i++) {
        seraph[i] = new int [rows];
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            seraph[j][i] = m[i][j];
        }
    }
    return seraph;
}