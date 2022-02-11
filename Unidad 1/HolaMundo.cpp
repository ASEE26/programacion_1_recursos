// Un lenguaje de programación es el medio por el cual nos podemos "Comunicar" fácilmente con un ordenador
// Sin embargo, es necesario respetar las reglas que componen a este lenguaje de programación, estas reglas es llamada SINTAXIS
// de un lenguaje de programación. El lenguaje que usaremos es conocimo como c++ o lenguaje de los puntos y comas.
// Por último, la traducción del lenguaje de programación al maquina se hace mediante un COMPILADOR

//SINTAXIS básica y general en c++:
// 1. Incluir o incorporar librerias
// 2. Definir la función  principal
// 3. escribir las instrucciones a ejecutar.


// Condicionales:
/*

Sintaxis:
    if(condicion-verdadera){
        Ejecutart instrucciones
    }
    else{
        Instrcucciones -- Ejecucion cuando la condicion del if es falsa.
    }
Una condicion es cualquier expresion que genera un valor de verdadero o falso.

    1. 5 >4 : Expresión, respuesta es falsa
        if(5 > 4){
            cout<<"La condicion es falsa"
        }

    2. 
        int edad = 17
        if(edad >=18){
            cout<<"La persona es mayor de edad"<<endll;
        }
        else{
            cout<<"La persona es menor de edad"<<endl;
        }

    3. Necesitamos comparar, no solo a nivel de desigualdad.

    char sexo = "M" // Masculino

    if(sexo == "F"){
        cout<<"Es una mujer y por tanto se jubila a los 60 años"
    }
    else{
        cout<<"Es hombre y se jubila a los 65 años"
    }

    Observaciones: En el condicional se usa el operador == que es el operador de comparación, es decir,
    compara la expresión de la izquierda con la derecha. NO ES ASIGNACIÓN.

*/


#include <iostream>
using namespace std;

int main(){
    string sexo;

    cout<<"Ingrese su sexo: ";
    cin >> sexo;

    if(sexo == "F"){
         cout<<"Es una mujer y por tanto se jubila a los 60 años"<<endl;
    }
    
    else{
        cout<<"Es hombre y se jubila a los 65 años"<<endl;
    }

    return 0;

}

