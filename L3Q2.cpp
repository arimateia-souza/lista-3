#include<iostream>

using namespace std;



int main (){
    /*2. Crie um algoritmo que ajude o DETRAN a saber o total de recursos que foram arrecadados com a 
aplicação de multas de trânsito. O algoritmo deve ler as seguintes informações para cada um dos N 
motoristas:
- O número da carteira de motorista (inteiro);
- Número de multas;
- O valor de cada uma das multas.

Deve ser impresso o valor da dívida de cada motorista e ao final da leitura o total de recursos arrecadados 
(somatório de todas as multas). O algoritmo deverá imprimir também o número da carteira do motorista 
que obteve o maior número de multas.*/
    int carteira, multas, i = 0;
    float valortotal, valor;
    char resp;

    while (resp !='n'){

        i++;
        cout<<"\nmotorista " << i << " digite o numero da sua carteira de mostorista: ";
        cin>> carteira;
        cout<< "\ndigite o numero de multas: ";
        cin >> multas;
        cout<< "\ndigite o valor de cada multa: R$";
        cin>> valor;
        cout<< "\ndeseja continuar? s - sim, n - nao: ";
        cin>> resp;
    }
    



}