#include<stdio.h>

void direita(int casas){
  if (casas > 0){
  printf("Direita\n");
  direita (casas - 1);
  }
}
void esquerda(int casas){
  if (casas > 0){
  printf("Esquerda\n");
  esquerda (casas - 1);
  }
}
void cima(int casas){
  if (casas > 0){
  printf("Cima\n");
  cima (casas - 1);
  }
}
void baixo(int casas){
  if (casas > 0){
  printf("Baixo\n");
  baixo (casas - 1);
  }
}
void diagonald(int casas){
  if (casas > 0){
  printf("Cima, direita\n");
  diagonald (casas - 1);
  }
}
void diagonale(int casas){
  if (casas > 0){
  printf("Cima, esquerda\n");
  diagonale (casas - 1);
  }
}
int main (){
 

    int i=0, peca, casas, direcaoc,sentidoc;

  printf("escolha uma peca de xadrez\n");
  printf("1 torre\n");
  printf("2 rainha\n");
  printf("3 bispo\n");
  printf("4 cavalo\n");
  scanf("%d", &peca);

  switch (peca)
   {   

   case 1:
     printf("Voce escolheu a torre\n");
     printf("quantas casas deseja andar?\n");
     scanf("%d", &casas);
     printf("Qual o sentido voce gostaria de andar?\n");
     printf("1 Direita\n");
     printf("2 Esquerda\n");
     printf("3 Cima\n");
     printf("4 Baixo\n");

     scanf("%d", &direcaoc);
     if (direcaoc==1){
      direita(casas);
     }else if(direcaoc==2){
      esquerda(casas);
     }else if(direcaoc==3){
      cima(casas);
     }else if(direcaoc==4){
      baixo(casas);}
    
     
    break;
  
   case 2:
     printf("Voce escolheu a rainha\n");
     printf("quantas casas deseja andar?\n");
     scanf("%d", &casas);
     printf("Qual o sentido voce gostaria de andar?\n");
     printf("1 Direita\n");
     printf("2 Esquerda\n");
     printf("3 Cima\n");
     printf("4 Baixo\n");

     scanf("%d", &direcaoc);
     if (direcaoc==1){
      direita(casas);
     }else if(direcaoc==2){
      esquerda(casas);
     }else if(direcaoc==3){
      cima(casas);
     }else if(direcaoc==4){
      baixo(casas);}
    
     
    break;

   case 3:
     printf("Voce escolheu o bispo\n");
     printf("quantas casas deseja andar?\n");
     scanf("%d", &casas);
     printf("Qual o sentido voce gostaria de andar?\n");
     printf("1 Diagonal direita\n");
     printf("2 Diagonal esquerda\n");
     scanf("%d", &direcaoc);

     if (direcaoc==1){
      diagonald(casas);
     }else if(direcaoc==2){
      diagonale(casas);}

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
      for ( i = 0; i < 2; i++)
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