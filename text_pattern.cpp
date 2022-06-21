#include <iostream>
using namespace std;

int strlenich (const char *pattern) {
    int shit = 0;
    while (*pattern!='\0')
    {
        pattern++;
        shit++;
    }
    return shit;
}

int strstr1(const char *text, const char *pattern)
{
    int mem = 0;
    int memory = 0;
    int schet = 0;
    int size = strlenich (text);
    int shit = strlenich(pattern);
    if (shit == 0) return 0;
    for (; *text != '\0';) {
        if (*text == *pattern) {
            text++;
            pattern++;
            schet++;
            mem++;
        }
        else {
        if (mem == 0) {
            text++;
            memory++;
        }
        else memory = memory + mem;
        pattern = pattern - mem;
        mem = 0;
        schet = 0;
        }
        if (schet == shit) return memory;
    }
    return -1;
}

int main()
{
    const char * text = "baabaaz";
    const char * key = "baaz";
    cout << strstr1(text, key) << endl;
    return 0;
}
