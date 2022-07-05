char *getline()
{
    int size = 100000;
    int new_size =  size * 2;
    char num;
    char *old_str = new char [size];
    char *yng_str = new char [new_size];
    for (int i = 0; cin.get(num) && (num != '\n'); i++) {
        old_str[i] = num;
        yng_str[i] = old_str[i];
        if (num == '\n') yng_str[i] = '\0';
}
    delete [] old_str;
    return yng_str;
}