unsigned strlen(const char *str)
{
    int shit = 0;
    while (*str!='\0')
    {
        str++;
        shit++;
    }
    return shit;
}