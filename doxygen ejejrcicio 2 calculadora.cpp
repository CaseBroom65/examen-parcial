/******************************************************************************
hacer un programa que exprese en horas, minutos, segundo un tiempo expresado 
en segundos 

*******************************************************************************/

#include <iostream>

using namespace std;
/**
 
@version 1.0
@date 8/06/2023
@autor Enrique Orihuela
@title Calculadora de tiempo
@brief Calculadora de segundos a horas,minutos,segundos.
*/
int main()
{
 int horas, minutos, segundos, segundos_restantes;
 
 cout<<"ingrese la cantidad de segundos: "<<endl;
 cin>>segundos;
 
        horas = segundos / 3600;
    
    segundos_restantes = segundos % 3600;
    minutos = segundos_restantes / 60;

    segundos_restantes = segundos_restantes % 60;

    cout<<"la cantidad en horas, minutos,segundos es: "<<endl;
    cout<<"horas: "<<horas<<endl;
    cout<<"minutos: "<<minutos<<endl;
    cout<<"segundos: "<<segundos_restantes<<endl;
    return 0;
}
