#include <stdio.h>
#include <ctype.h>

int main(void) {
char quest[5];
int countSuspeita = 0;

printf("Responda ao questionário com as seguintes opções:\n(S) Sim\n(N) Não\n");


  printf("Telefonou para a vítima? ");
  scanf(" %c",&quest[0]);
  quest[0] = toupper(quest[0]);


  printf("Esteve no local do crime?");
  scanf(" %c",&quest[1]);
  quest[1] = toupper(quest[1]);

  printf("Mora perto da vítima?");
  scanf(" %c",&quest[2]);
  quest[2] = toupper(quest[2]);

  printf("Devia para a vítima?");
  scanf(" %c",&quest[3]);
  quest[3] = toupper(quest[3]);

  printf("Já trabalhou com a vítima?");
  scanf(" %c",&quest[4]);
  quest[4] = toupper(quest[4]);


  for (int i = 0;i < 5;i++){
    if (quest[i] == 'S') {
      countSuspeita += 1;
    }
  }

  printf("%d\n",countSuspeita);
  if (countSuspeita == 2) {
    printf("Você é suspeito no caso!");
  } else if (countSuspeita  < 4 && countSuspeita > 2) {
    printf("Você é cúmplice no caso!");
  } else if (countSuspeita == 5) {
    printf("Você é o assassino do caso!");
  }
  else {
    printf("Você é inocente");
  }

}
