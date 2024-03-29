#include <stdio.h>
#include <stdbool.h>

#include "datain.h"
#include "algoritmos.h"
#include "measuretime.h"
#include "utils.h"

/***FUNCIONES DE ENTRADA DE DATOS PARA LAS TABLAS DE TIEMPOS***/

// Pasa los datos y llama a las funciones para el calculo de los tiempos de
// ordenacion de vectores ordenados de manera ascendente
void tiempos_asc(){
  int selector[3];
  float power[3];

  printf("--------------------------------------------------------------\n");
  printf("\tVECTOR CON ORDENACION ASCENDENTE\n");
  printf("--------------------------------------------------------------\n\n");

  printf("\tTIEMPOS DE ORDENACION POR INSERCION\n\n");

  selector[0] = NEXP;
  selector[1] = LINEAL;
  selector[2] = NEXP;
  power[0] = 0.8;
  power[1] = 0;
  power[2] = 1.2;

  mostrar_cabecera(selector, power);
  medir_tiempos(&ord_ins, &ascendente, selector, power, 500, 2);

  printf("\tTIEMPOS DE ORDENACION POR SHELL\n\n");

  selector[0] = LINEAL;
  selector[1] = NLOGN;
  selector[2] = NEXP;
  power[0] = 0;
  power[1] = 0 ;
  power[2] = 2;

  mostrar_cabecera(selector, power);
  medir_tiempos(&ord_shell, &ascendente, selector, power, 500, 2);
}

// Pasa los datos y llama a las funciones para el calculo de los tiempos de
// ordenacion de vectores ordenados de manera descendente
void tiempos_des(){
  int selector[3];
  float power[3];

  printf("--------------------------------------------------------------\n");
  printf("\tVECTOR CON ORDENACION DESCENDENTE\n");
  printf("--------------------------------------------------------------\n\n");

  printf("\tTIEMPOS DE ORDENACION POR INSERCION\n\n");

  selector[0]=NEXP;
  selector[1]=NEXP;
  selector[2]=NEXP;
  power[0]=1.8;
  power[1]=2;
  power[2]=2.2;

  mostrar_cabecera(selector, power);
  medir_tiempos(&ord_ins, &descendente, selector, power, 500, 2);

  printf("\tTIEMPOS DE ORDENACION POR SHELL\n\n");

  selector[0]=LINEAL;
  selector[1]=NLOGN;
  selector[2]=NEXP;
  power[0]=0;
  power[1]=0;
  power[2]=2;

  mostrar_cabecera(selector, power);
  medir_tiempos(&ord_shell, &descendente, selector, power, 500, 2);
}

// Pasa los datos y llama a las funciones para el calculo de los tiempos de
// ordenacion de vectores ordenados de manera aleatoria
void tiempos_ale(){
  int selector[3];
  float power[3];

  printf("--------------------------------------------------------------\n");
  printf("\tVECTOR CON ORDENACION ALEATORIA\n");
  printf("--------------------------------------------------------------\n\n");

  selector[0]=NEXP;
  selector[1]=NEXP;
  selector[2]=NEXP;
  power[0]=1.8;
  power[1]=2;
  power[2]=2.2;

  printf("\tTIEMPOS DE ORDENACION POR INSERCION\n\n");
  mostrar_cabecera(selector, power);
  medir_tiempos(&ord_ins, &aleatorio, selector, power, 500, 2);

  selector[0]=LINEAL;
  selector[1]=NEXP;
  selector[2]=NEXP;
  power[0]=0;
  power[1]=1.2;
  power[2]=1.5;

  printf("\tTIEMPOS DE ORDENACION POR SHELL\n\n");
  mostrar_cabecera(selector, power);
  medir_tiempos(&ord_shell, &aleatorio, selector, power, 500, 2);
}

void tiempos(){
  tiempos_asc();
  tiempos_des();
  tiempos_ale();
}
