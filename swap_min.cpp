void swap_min(int *m[], unsigned rows, unsigned cols)
{
    int min;
    int index_i, index_j;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if ((i == 0) && (j == 0)) min = m[0][0];
            if (min < m[i][j]) {
                min = m[i][j];  
                index_i = i;
                index_j = j;
            }
            if ((i == rows - 1) && (j == cols - 1)) {
                int *neo = m[0];
                m[0] = m[index_i];
                m[index_i] = neo;
            }
        }
    }
}