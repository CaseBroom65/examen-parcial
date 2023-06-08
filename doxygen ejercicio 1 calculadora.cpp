/******************************************************************************
hacer un progrma que lea el el valor correspondiente a una distancia en millas 
y las escribas expresadas en metros.

*******************************************************************************/

#include <iostream>

using namespace std;

/**
 
@version 1.0
@date 8/06/2023
@autor Enrique Orihuela
@title Calculadora millas
@brief Calculadora de millas a metros
*/
int main()
{
    float millas_marinas=1852;
    float metros;
    float resultado;
    
    cout<<"escribe la cantidad en metros: "<<endl;
    cin>>metros;
    
    if(metros<=millas_marinas)
    {
        resultado = metros*millas_marinas;
    }
    cout<<"el resultado es: "<<resultado<<endl;
    return 0;
}
