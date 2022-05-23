/*1. Elabore um algoritmo que leia o código (inteiro) e a idade de 100 pessoas e escreva ao final o código da 
pessoa mais velha e a idade da pessoa mais nova.*/

#include <iostream>
using namespace std;

int main(){

int codigo, idade, i, idadenova = 400, idadevelha = 0, codigoVelho = 0;


    for (i = 1; i <=100; i++){

    cout<<"\ndigite seu codigo: ";
    cin>> codigo;
    cout<< "\ndigite sua idade: ";
    cin>> idade;

    if (idade < idadenova){
    idadenova = idade;

    }else if (idade > idadevelha){
        idadevelha = idade;
        codigoVelho = codigo;
    }
    }    

cout<< "\nCodigo da pessoa mais velha e: " << codigoVelho;
cout<<"\nA idade da pessoa mais nova tem: " << idadenova << " anos";

}