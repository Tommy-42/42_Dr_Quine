#include <stdio.h>
/*
  other Comment
*/
void theFunction(void) {}
int main(void) {
  /*
    Comment
  */
  char *c="#include <stdio.h>%c/*%c  other Comment%c*/%cvoid theFunction(void) {}%cint main(void) {%c  /*%c    Comment%c  */%c  char *c=%c%s%c;printf(c,10,10,10,10,10,10,10,10,10,34,c,34,10,10);%c}%c";printf(c,10,10,10,10,10,10,10,10,10,34,c,34,10,10);
}
