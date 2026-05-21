#include "dataset.hpp"
#include <iostream>

dataset::dataset(){

     llueve = 10;
     nollueve = 8;
     nublado = 9;
     nonublado = 9;
     nubladoperollueve = 7;
     nubladoperonollueve = 6;
     nonubladoperonollueve = 3;
     sinubladoperosillueve = 2;
     total = 18;
}

void dataset::calcularcondicional(){
    std::cout << "Calculo Condicional\n " << std::endl;
    std::cout << "probabilidad que llueva dado que nublado: " << nubladoperollueve / llueve << std::endl;
    std::cout << "probabilidad que no llueve dado a que este nublado: " << nubladoperonollueve / nollueve << std::endl;
    std::cout << "probabilidad que no llueva dado a que no este nublado: " << nonubladoperonollueve / nollueve << std::endl;
    std::cout << "probabilidad  que llueva dado a que si este nublado:" << sinubladoperosillueve / llueve << std::endl;

}
void dataset::calcularmarginal(){
    std::cout << "Calcular Marginal\n " << std::endl;
    std::cout << "probabilidad que llueva: " << llueve / 18 << std::endl;
    std::cout << "problabilidad que no llueva:" << nollueve / 18 << std::endl;
    std::cout << "probabilidad de nublado: " << nublado / 18 << std::endl;
    std::cout << "probabilidad de no nublado:" << (nonublado / 18) << std::endl;

}
void dataset::calcularconjunta(){
    std::cout << "Calcular Conjunta\n " << std::endl;
    std::cout << "probabilidad de nublado pero llueva: " << nubladoperollueve / 18 << std::endl;
    std::cout << "probabulidad de nublado pero no llueva: " << nubladoperonollueve / 18 << std::endl;
    std::cout << "probabilidad de no nublado y no llueva: " << nonubladoperonollueve / 18 << std::endl;
    std::cout << "probabilidad de nublado y que llueva: " << sinubladoperosillueve / 18 << std::endl;
}
void dataset::mostrartotal(){
    std::cout << "El total es: \n " <<  std::endl;
    calcularcondicional();
    calcularmarginal();
    calcularconjunta();
}