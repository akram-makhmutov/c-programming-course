Foo get_foo(const char *msg) {
struct Ka : Foo {
public:
Ka(const char *msg) : Foo(msg) {}
};
Ka ka = Ka(msg);
return ka;
}