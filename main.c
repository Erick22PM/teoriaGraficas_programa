#include <stdio.h>
#include "ingresarDatos.c"
//Ingresar la informacion de la grafica______________________________1
int numeroVertices();
int numeroLineas();
int tipoGrafica();

//Funcion principal
int main(void) {
  int nodos, lineas, tg;//tg es el tipo de grafica
  int i, j;

  system("cls");
  nodos = numeroVertices();
  system("cls");
  lineas = numeroLineas();
  system("cls");
  tg = tipoGrafica();
  system("cls");


  char relaciones[lineas][2];
    for(i=0; i<lineas; i++){
      for(j=0; j<2; j++){
        relaciones[i][j]='0';
      }
    }


    if(tg==2){//Si es digrafica
      for(i=0; i<lineas; i++){
        for(j=0; j<2; j++){
          if(j==0){
            printf("Ingresa el nodo del que 'sale' la linea %d: ", i+1);
              scanf(" %c", &relaciones[i][j]);
          }else{
            printf("Ingresa el al que 'llega' la linea %d: ", i+1);
              scanf(" %c", &relaciones[i][j]);
          }
        }
        printf("\n");
      }
    }else{//Si es grafica
      for(i=0; i<lineas; i++){
        for(j=0; j<2; j++){
          if(j==0){
            printf("Ingresa el primer nodo incidente a la linea %d: ", i+1);
              scanf(" %c", &relaciones[i][j]);
          }else{
            printf("Ingresa el segundo nodo incidente a la linea %d: ", i+1);
              scanf(" %c", &relaciones[i][j]);
          }
        }
        printf("\n");
      }
    }

  printf("\n");
  if(tg==2){
    printf("Digrafica con %d lineas, %d nodos y las siguientes relaciones:\n", lineas, nodos);
    for(i=0; i<lineas; i++){
      printf("%c ----(%d)----> %c\n", relaciones[i][0],i+1, relaciones[i][1]);
    }
  }else{
    printf("Grafica con %d lineas, %d nodos y las siguientes relaciones:\n", lineas, nodos);
    for(i=0; i<lineas; i++){
      printf("%c ----(%d)---- %c\n", relaciones[i][0],i+1, relaciones[i][1]);
    }
  }




    return 0;
}
