#include "Dataset.hpp"
#include <iostream>

Tablafrecuencia::Tablafrecuencia (vector <double> d){
    datos = d;
    clase = {"<15","15-18","18-21",">21"};
    frecuencias = {0,0,0,0};
}
void Tablafrecuencia::calcularfrecuencia(){
    for (double valor:datos){
        if(valor < 15) frecuencias [0]++;
        else if (valor < 18) frecuencias [1]++;
        else if (valor < 21) frecuencias [2]++;
        else frecuencias [3]++;
    }
}

void Tablafrecuencia::imprimirtabla(){
    int N = datos.size ();
cout << "Tabla de frecuencias \n\n";
cout << "clase\tf\tfr\t%\n";
for (int i = 0; i < clase.size (); i++){
    double fr= (double) frecuencias [i] / N;
    cout << clase [i] << "\t" << frecuencias [i] << "\t" << fr << "\t" << fr*100 << "%" << endl;

}
cout << "total\t" << N << "\t1.00\t100%" << endl;

}
