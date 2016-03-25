#include <stdio.h>
#define A(y) void F_A() {}
#define B(z) void F_B() {}
#define FT(x) int main() { FILE *fp = fopen("Grace_kid.c","w"); char *c="#include <stdio.h>%c#define A(y) void F_A() {}%c#define B(z) void F_B() {}%c#define FT(x) int main() { FILE *fp = fopen(%cGrace_kid.c%c,%cw%c); char *c=%c%s%c;fprintf(fp,c,10,10,10,34,34,34,34,34,c,34,10,10); fclose(fp); }%cFT()%c";fprintf(fp,c,10,10,10,34,34,34,34,34,c,34,10,10); fclose(fp); }
FT()
