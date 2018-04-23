/*
Primer examen práctico
Autor: Luis Alberto García Rodríguez
Número de lista: 11
fecha: 24 de marzo del 2015
*/

#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main()
{
    int i, intentos=1, saldo = 2000, nip = 234, retiro, deposito, opcnip, opcmenu;

    system ("color 3a");

    bool band = true;

    while (band == true)
    {//NIP
        system ("cls");
    cout<<"\n\t\t##################################################";
    cout<<"\n\t\t#####                                        #####";
    cout<<"\n\t\t##### BIENVENIDO AL BANCO NACIONAL DE MEXICO #####";
    cout<<"\n\t\t#####                                        #####";
    cout<<"\n\t\t##################################################";

    cout<<"\n\n\n\t\t DIGITE SU NIP: ";
    cin>>opcnip;
    intentos++;

    if (opcnip==nip)
        {
            intentos=1;

            system ("cls");

            bool opcn = true;
        do
        {
            system ("cls");
        cout<<"\n\t\t ###### BANCO NACIONAL DE MEXICO ###### \n\n\n";

        cout<<"\n\t\t *************************************";
        cout<<"\n\t\t ***                               ***";
        cout<<"\n\t\t *** 1.- Consulta de saldo         ***";
        cout<<"\n\t\t *** 2.- Retiro en efectivo        ***";
        cout<<"\n\t\t *** 3.- Deposito a la cuenta      ***";
        cout<<"\n\t\t ***                               ***";
        cout<<"\n\t\t *** 4.- Salir de su sistema       ***";
        cout<<"\n\t\t ***                               ***";
        cout<<"\n\t\t *** 5.- Salir de definitivo       ***";
        cout<<"\n\t\t ***                               ***";
        cout<<"\n\t\t *************************************";

        cout<<"\n\n\t\t ELIGE UNA OPCION: ";
        cin>>opcmenu;



        switch (opcmenu)
        {
        case 1:
            system ("cls");
            cout<<"\n\t\t ####### BANCO NACIONAL DE MEXICO ####### \n\n\n";

            cout<<"\n\t\t ***************************************";
            cout<<"\n\t\t ***                                 ***";
            cout<<"\n\t\t *** 1.- Consulta de saldo           ***";
            cout<<"\n\t\t ***                                 ***";
            cout<<"\n\t\t ***************************************";
            cout<<"\n\t\t ***                                 ***";
            cout<<"\n\t\t *** Tu saldo actual es:      "<<saldo;
            cout<<"\n\n\n\t\t\t\t";

            system ("pause");
            break;

        case 2:
            system ("cls");
            cout<<"\n\t\t ####### BANCO NACIONAL DE MEXICO ####### \n\n\n";

            cout<<"\n\t\t ****************************************";
            cout<<"\n\t\t ***                                  ***";
            cout<<"\n\t\t *** 2.- Retiro en efectivo           ***";
            cout<<"\n\t\t ***                                  ***";
            cout<<"\n\t\t ****************************************";
            cout<<"\n\t\t ***                                  ***";
            cout<<"\n\t\t *** Cuanto deseas retirar:   ";
            cin>>retiro;
            cout<<"\n\t\t ***                                  ***";
            cout<<"\n\t\t ****************************************";
            cout<<"\n\t\t ***                                  ***";
            saldo = saldo - retiro;
            cout<<"\n\t\t *** Tu saldo actual es:      "<<saldo;
            cout<<"\n\n\n\t\t\t\t";
            system ("pause");
            break;

        case 3:
            system ("cls");
            cout<<"\n\t\t ####### BANCO NACIONAL DE MEXICO ####### \n\n\n";

            cout<<"\n\t\t ****************************************";
            cout<<"\n\t\t ***                                  ***";
            cout<<"\n\t\t *** 3.- Deposito a la cuenta         ***";
            cout<<"\n\t\t ***                                  ***";
            cout<<"\n\t\t ****************************************";
            cout<<"\n\t\t ***                                  ***";
            cout<<"\n\t\t *** Cuanto deseas depositar: ";
            cin>>deposito;
            cout<<"\n\t\t ***                                  ***";
            cout<<"\n\t\t ****************************************";
            cout<<"\n\t\t ***                                  ***";
            saldo = saldo + deposito;
            cout<<"\n\t\t *** Tu saldo actual es:      "<<saldo;
            cout<<"\n\n\n\t\t\t\t";

            system ("pause");
            break;

        case 4:
            system ("cls");
            cout<<"\n\t\t ####### BANCO NACIONAL DE MEXICO ####### \n\n\n";

            cout<<"\n\t\t ****************************************";
            cout<<"\n\t\t ***                                  ***";
            cout<<"\n\t\t *** 4.- Elegiste la opcion salir     ***";
            cout<<"\n\t\t ***                                  ***";
            cout<<"\n\t\t ***                                  ***";
            cout<<"\n\t\t ***        ! HASTA PRONTO !          ***";
            cout<<"\n\t\t ***                                  ***";
            cout<<"\n\t\t ****************************************";
            cout<<"\n\n\n\t\t\t\t";
            opcn=false;

            system ("pause");
            break;

        case 5:
            system ("cls");
            cout<<"\n\t\t ####### BANCO NACIONAL DE MEXICO ####### \n\n\n";

            cout<<"\n\t\t ****************************************";
            cout<<"\n\t\t ***                                  ***";
            cout<<"\n\t\t *** 5.- Elegiste salir definitivo    ***";
            cout<<"\n\t\t ***                                  ***";
            cout<<"\n\t\t ***                                  ***";
            cout<<"\n\t\t ***        ! HASTA PRONTO !          ***";
            cout<<"\n\t\t ***                                  ***";
            cout<<"\n\t\t ****************************************";
            cout<<"\n\n\n\t\t\t\t";

            system ("pause");
            return 0;
            //break;

        default:
            system ("cls");
            cout<<"\n\t\t ####### BANCO NACIONAL DE MEXICO ####### \n\n\n";

            cout<<"\n\t\t *****************************************";
            cout<<"\n\t\t ***                                   ***";
            cout<<"\n\t\t ***  Elegiste una opcion inexistente  ***";
            cout<<"\n\t\t ***                                   ***";
            cout<<"\n\t\t *****************************************";
            cout<<"\n\n\n\t\t\t\t";

            system ("pause");

         }//fin del switch del menu
        } while (opcn==true);

        }//fin del if

        else
        {
            system ("cls");
            cout<<"\n\t\t ####### BANCO NACIONAL DE MEXICO ####### \n\n\n";

            cout<<"\n\t\t ****************************************";
            cout<<"\n\t\t ***                                  ***";
            cout<<"\n\t\t ***          NIP INCORRECTO          ***";
            cout<<"\n\t\t ***                                  ***";
            cout<<"\n\t\t ****************************************";
            cout<<"\n\n\n\t\t\t\t";

            system("pause");

        }//fin del else

        for (i=0; i<3; i++)
        {
        if (intentos>3)
        {
            system ("cls");
            cout<<"\n\t\t ******************************************";
            cout<<"\n\t\t ***                                    ***";
            cout<<"\n\t\t ***        DEMASIADOS INTENTOS         ***";
            cout<<"\n\t\t ***                                    ***";
            cout<<"\n\t\t ***            SALIENDO...             ***";
            cout<<"\n\t\t ***                                    ***";
            cout<<"\n\t\t ******************************************";
            cout<<"\n\n\n\t\t\t\t";


            band=false;
            //system ("pause");

           Sleep (500);

        }//fin del if intentos exedidos
        }//fin del for intentos

    }//fin del while principal

    return 0;
}
