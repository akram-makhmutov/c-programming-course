void rotate(int a[], unsigned size, int shift) {
    int gt;
    if (shift > size) shift = shift - size;
    for (int i = 0; i < shift; i++) {
        for (int j = 0; j < size - 1; j++) {
            gt = a[j];
            a[j] = a[j+1];
            a[j+1] = gt;
        }
    }
}