//Ingresar la informacion de la grafica______________________________1
#include <stdio.h>

//Se ingresa el numero de vertices que contiene la grafica________________________________1-1
int numeroVertices() {
  int nVert=0, aux=0;
  do{
    printf("\nIngresa el numero de nodos...\n--->");
      scanf("%d", &nVert);
    if(nVert<0){
      system("cls");
      printf("\nTiene que ser un valor positivo.\nPrueba nuevamente...\n");
    }else{
      aux=1;
    }
  }while(aux==0);
  
  return nVert;
}

//Se ingresa el numero de lineas que contiene la grafica________________________________1-2
int numeroLineas(){
  int nLineas=0, aux=0;
  do{
    printf("\nIngresa el numero de lineas...\n--->");
      scanf("%d", &nLineas);
    if(nLineas<0){
      system("cls");
      printf("\nTiene que ser un valor positivo.\nPrueba nuevamente...\n");
    }else{
      aux=1;
    }
  }while(aux==0);

  return nLineas;
}

//Se ingresa el tipo de grafica (grafica o digrafica)________________________________1-3
int tipoGrafica(){//Funcion
  int tipoGraf=0, aux=0;

  do{
    printf("\nIngresa el tipo de grafica...\nGrafica ................. (1) \nDigrafica ............... (2) \n--->");
      scanf("%d", &tipoGraf);
    if(tipoGraf!=1&&tipoGraf!=2){
      system("cls");
      printf("\nTiene que ser (1) o (2).\nPrueba nuevamente...\n");
    }else{
      aux=1;
    }
  }while(aux==0);
  
  return tipoGraf;
}

