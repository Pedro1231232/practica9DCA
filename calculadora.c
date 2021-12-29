#define _(STRING) gettext(STRING)


#include <stdio.h>
#include <libintl.h>
#include <locale.h>




int suma(int a, int b) {
  return a + b;
}
int resta(int a, int b) {
  return a - b;
}
int multiplicacion(int a, int b) {
  return a * b;
}
int division(int a, int b) {
  return a / b;
}

int main(){

  setlocale (LC_ALL, "");
  bindtextdomain ("calculadora", "./po/");
  bind_textdomain_codeset ("calculadora", "UTF-8");
  textdomain ("calculadora");



  int op, a, b, sol;

  printf(_("*** Bienvenido a la calculadora ***\n"));
  printf(_("1. Realizar suma\n"));
  printf(_("2. Realizar resta\n"));
  printf(_("3. Realizar multiplicación\n"));
  printf(_("4. Realizar división\n"));

  printf(_("Introduce una opcion: "));
  scanf("%d", &op);
  printf(_("Introduce el primer valor: "));
  scanf("%d", &a);
  printf(_("Introduce el segundo valor: "));
  scanf("%d", &b);

  switch(op){
    case 1: sol = suma(a, b);
    break;
    case 2: sol = resta(a, b);
    break;
    case 3: sol = multiplicacion(a, b);
    break;
    case 4: sol = division(a, b);
    break;
  }

  printf(_("\nLa solución es:"));
  printf("%d\n", sol);
  printf(_("\nEsperamos verte pronto!!"));
  printf(_("\nFeliz 2022 Ho Ho Ho!!"));


}
