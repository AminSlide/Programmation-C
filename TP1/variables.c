// Nom de fichier: variables.c
// Auteur:Tristan BELLET
// Objectif : Affectation et affichage des variables de types de base

#include <stdio.h>
int main () {
char my_char_var = 'a' ;
printf("sizeof(my_char_var) :%lu \n",sizeof(my_char_var));
unsigned char my_uchar_var = 234;
printf("sizeof(my_uchar_var) :%lu \n",sizeof(my_uchar_var));
short my_short_var = -12;
printf("sizeof(my_short_var) :%lu \n",sizeof(my_short_var));
unsigned short my_ushort_var = 65535;
printf("sizeof(my_ushort_var) :%lu \n",sizeof(my_ushort_var));
int my_int_var = 12;
printf("sizeof(my_int_var) :%lu \n",sizeof(my_int_var));
unsigned int my_uint_var = 3456;
printf("sizeof(my_uint_var) :%lu \n",sizeof(my_uint_var));
long my_long_var = -1234553L;
printf("sizeof(my_long_var) :%lu \n",sizeof(my_long_var));
unsigned long my_ulong_var = 234556UL;
printf("sizeof(my_ulong_var) :%lu \n",sizeof(my_ulong_var));
long long my_llong_var = 1123345LL;
printf("sizeof(my_llong_var) :%lu \n",sizeof(my_llong_var));
unsigned long long my_ullong_var = 1234567ULL;
printf("sizeof(my_ullong_var) :%lu \n",sizeof(my_ullong_var));
float my_float_var = 3.14;
printf("sizeof(my_float_var) :%lu \n",sizeof(my_float_var));
double my_double_var = 3.14E-12;
printf("sizeof(my_double_var) :%lu \n",sizeof(my_double_var));
long double my_long_double_var = 3.14E-22;
printf("sizeof(my_long_double_var) :%lu \n",sizeof(my_long_double_var));
}
