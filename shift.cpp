void rotate(int a[], unsigned size, int shift) {
    int gt;
    if (shift > size) shift = shift - size;
    for (int *p = a; p < a + shift; p++) {
        for (int j = 0; j < size - 1; j++) {
            gt = a[j];
            a[j] = a[j+1];
            a[j+1] = gt;
        }
    }
}