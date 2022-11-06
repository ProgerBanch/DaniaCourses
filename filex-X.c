#include <stdio.h>
void CapitalSymbol(char*);
int main(){
char sym;
scanf ("%c", &sym);
CapitalSymbol(&sym);
printf ("%c", sym);
return 0;
}
void CapitalSymbol(char* x){
char size;
char a='a';
char A='A';
size=a-A;
*x-=size;
}
