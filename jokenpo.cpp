#include <iostream>
#include<iomanip>
#include <string>
#include <cstring>
#include <windows.h>
#include <ctype.h>

using namespace std;

int main() {


    int escolha_computador, escolha_user;
    string user_desc, computer_desc;

    cout << "----------------------- JOKENPO -----------------------------";

    cout << "\n\nEscolha sua jogada!\n1- Pedra\n2- Papel\n3- Tesoura\n\n";

    cin >> escolha_user;

    escolha_computador = rand() % 3 + 1;

    cout << escolha_computador;

    system("cls");

    cout << "Voce escolheu: ";

    if(escolha_user==1)
        cout << "Pedra";

    if (escolha_user==2)
        cout << "Papel";

    if(escolha_user==3)
        cout << "Tesoura";

    cout << "\n\nE o computador escolheu: ";


    if(escolha_computador==1)
        cout << "Pedra";

    if (escolha_computador==2)
        cout << "Papel";

    if(escolha_computador==3)
        cout << "Tesoura";





    if(escolha_computador==escolha_user)
        cout << "\n\nEmpate!";


    else if((escolha_user==1 && escolha_computador == 3) || (escolha_user==2 && escolha_computador==1) || (escolha_user==3 && escolha_computador==2))
        cout << "\n\nVoce venceu a maquina!";

    else
        cout << "\n\nO computador venceu!\n\n";







}










