#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {
	String(size_t n, char c) {
	    char *scooby = new char [n];
	    for (int i = 0; i < n; i++) {
	        scooby[i] = c;
	    }
	    size = strlen (scooby);
	    str = new char [size + 1];
	    strcpy(str, scooby);
        delete [] scooby;
	}
	~String() {
	    delete [] str;
	}
	size_t size;
	char *str;
};