#include <stdio.h>

void CapitalSymbol(char*);

int main() {
char sym;
scanf ("%c", &sym);

CapitalSymbol(&sym);

printf ("%c\n", sym);
return 0;
}

void CapitalSymbol(char* x) {
*x-='a'-'A';
}
