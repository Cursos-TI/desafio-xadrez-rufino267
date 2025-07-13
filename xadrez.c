#include<stdio.h>

void movimento(int casas, int sentido){
for ( int i = 0; i < casas; i++)
{
      if (sentido==1){
      printf("Direita\n");
     }else if(sentido==2){
      printf("Esquerda\n");
     }else if(sentido==3){
      printf("Cima\n");
     }else if(sentido==4){
      printf("Baixo\n");
      }else if(sentido==5){
      printf("Cima, direita\n");
      }else if(sentido==6){
      printf("Cima, esquerda\n");
}
}
}

int main (){
 

    int peca, casas, direcaoc,sentidoc, sentido;

  printf("escolha uma peca de xadrez\n");
  printf("1 torre\n");
  printf("2 rainha\n");
  printf("3 bispo\n");
  printf("4 cavalo\n");
  scanf("%d", &peca);

  if (peca ==3 )
  {
    printf("quantas casas deseja andar?\n");
    scanf("%d", &casas);
    printf("Qual o sentido voce gostaria de andar?\n");
    printf("5 Diagonal direita\n");
    printf("6 Diagonal esquerda\n");
    scanf("%d", &sentido);

  }else if (peca ==4 ) {
    
  printf("\n");

  }else {  
  printf("quantas casas deseja andar?\n");
  scanf("%d", &casas);
  printf("Qual o sentido voce gostaria de andar?\n");
  printf("1 Direita\n");
  printf("2 Esquerda\n");
  printf("3 Cima\n");
  printf("4 Baixo\n");
  scanf("%d", &sentido);
  };

  switch (peca)
   {   

   case 1:
     printf("Voce escolheu a torre\n");
    
     movimento(casas,sentido);
     
    break;
  
   case 2:
     printf("Voce escolheu a rainha\n");
    
     movimento(casas,sentido);
     
    break;

   case 3:
     printf("Voce escolheu o bispo\n");
   
     movimento(casas,sentido);

    break;

    case 4:
     printf("Voce escolheu o cavalo\n");
     printf("Escolha a diretacao que o cavalo ira andar?\n");
     printf("1 cima\n");
     printf("2 baixo\n");
     printf("3 esquerda\n");
     printf("4 direita\n");
     scanf("%d", &direcaoc);

      printf("Escolha a direcao que o cavalo ira vira:\n");
      printf("1 esquerda\n");
      printf("2 direita\n");
      scanf("%d", &sentidoc);
      for ( int i = 0; i < 2; i++)
      {
         if (direcaoc == 1) {
           printf("cima\n");
         }else if (direcaoc == 2){
          printf("baixo\n");
         }else if (direcaoc == 3){
           printf("esquerda\n");
         }else if(direcaoc == 4){
           printf("direita\n");
         }      
      }
      if (sentidoc ==1){
        printf("esquerda\n");
      }else{
        printf("direita\n");
      }
     
    break;
  default:
    break;
  }
    
}
