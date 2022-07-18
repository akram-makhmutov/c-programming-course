#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {
	String(const char *str = "");
	String(size_t n, char c);
	~String();
	void append(String &other) {
	size_t sex = size + other.size;
	char *new_str = new char [sex + 1];
        strcpy (new_str, str);
        strcat (new_str, other.str);
        delete [] str;
        str = new_str;
        size = strlen(str);
	}
	size_t size;
	char *str;
};