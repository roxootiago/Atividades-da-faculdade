#include <stdio.h>
#define TAM 5
int main(void) {
  int so[TAM],i=0,opcao=10,totalVotos,tamanho;
  float  porcentagem[TAM];

  while( opcao != 0 ){
    printf("\nSua preferencia de OS\n(1) Windows Server\n(2) Unix\n(3) Linux\n(4) Netware\n(5) Mac OS\nDigite sua opção: ");
    scanf("%d", &opcao);
    if (opcao == 0)
      break;
    if ( opcao <0 || opcao >5){
      printf("\nOpcao invalida");
    }
    else{
      so[opcao-1]++;
    }
  }
totalVotos = so[0] + so[1] + so[2] + so[3] + so[4];
tamanho = sizeof(so) / sizeof(so[0]);
for(i =0; i < tamanho; i++) {
  porcentagem[i] = (float)(so[i] * 100) / totalVotos;
  }


printf("\n\nSitema operacional:   Votos    %\n");
printf("-------------------   -----   ---\n");
printf("Windows Server:         %d   %6.2f%\n",so[0],porcentagem[0]);
printf("Unix                    %d   %6.2f%\n",so[1],porcentagem[1]);
printf("Linux                   %d   %6.2f%\n",so[2],porcentagem[2]);
printf("Netware                 %d   %6.2f%\n",so[3],porcentagem[3]);
printf("Mac OS                  %d   %6.2f%\n",so[4],porcentagem[4]);
  
  return 0;
}