# include <stdio.h>

 int main (){

    char cartaBrasil;
    char cartaEUA;
    char cartaRussia;
    char Usuario;

    printf("deseja ver carta Brasil\n");
    scanf("%s", &cartaBrasil);
   printf("Pais:  Brasil  populaçao:216.4 Milhoes Km:8.515.767,049  Presidente atual:Luiz Inácio Lula da Silva\n");
   printf("gostaria acessar mais cartas ?\n");
   scanf("%s", &Usuario);
   printf("gostaria de acessar a carta EUA ? \n");
   scanf("%s", &cartaEUA);
   printf("Pais: EUA  populaçao:334,9 Milhoes Km:9.229 Presidente atual: Donald J. Trump\n ");
   printf("gostaria acessar mais cartas ?\n");
   scanf("%s", &Usuario);
   printf("deseja acessar carta Russia ?\n");
   scanf("%s", &Usuario);
   printf("Pais: Russia  populaçao:143,8 Milhoes Km:15.230 Presidente atual:Vladimit Putin\n");
   printf("gostaria de acessar mais cartas ?\n");
   scanf("%s", &Usuario);
   printf("desculpa essas foram todas as cartas :)\n");
 }