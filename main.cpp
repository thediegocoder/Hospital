#include <iostream>
#include "hospital.h"
#include "paciente.h"
using namespace std;
// Inicializar la variable estatica
int Paciente::totalPacientes = 0;
int main(){
    // Creando un paciente


    /*** // Crear un hospital
 Hospital hcam ("Carlos Andrade Marin");
 hcam.ingresarPaciente(); // Ingresar un paciente
 hcam.ingresarPaciente(); // Ingresar otro paciente
hcam.listarpacientes(); // Listar los pacientes
 hcam.listarpacientesA();
 hcam.listarpacientesB();
 // Imprimir el total de pacientes
 cout << "Total pacientes: " << Paciente::totalPacientes << endl;

 **/
    char op;
    cout<<"BIENVENIDO AL PROGRAMA DEL REGISTRO DE PACIENTES : HOSPITAL CARLOS ANDRADE MARIN \n"

          "______________________________________________________________________________\n";
    bool bandera=false;
    Hospital hcam ("CARLOS ANDRADE MARIN");
    do {



        cout<<"\n1) Ingresar un paciente (solicitar todos los datos).\n";
        cout<<"\n2) Listar todos los pacientes.\n";
        cout<<"\n3) Listar pacientes con Covid-19.\n";
        cout<<"\n4) Listar pacientes dados de alta.\n";
        cout<<"\n5) Dar de alta a un paciente.\n";
        cout<<"\n6) Establecer como contagiado a un paciente (establecer el atributo positivo a verdadero)\n";
        cout<<"\n7) Total de pacientes existentes\n";
        cout<<"\n8) Salir\n";
        cout<<"\nElija una opcion:\n";
        cin>>op;
        char opp='n';
        switch (op) {

        case '1':
            do{

                hcam.ingresarPaciente();
                cout<< "Desea ingresar mas pacientes? (s/n)";
                cin>>opp;
            }while(opp=='s');
            cout<< "/==========================================="<<endl;
            break;

            //============================================================
        case '2':

            hcam.listarpacientes();

            break;


            //===================================================================
        case '3':


            hcam.listarpacientesA();
            break;


            //=============================================================
        case '4':
            hcam.listarpacientesB();
            break;


            //==================================================================

        case '5':
            hcam.darAlta();
            break;

            //=======================================================================
        case '6':
            hcam.getAlta();
            break;

            //=============================================================================
        case '7':
            cout << "Total pacientes: " << Paciente::totalPacientes <<endl;
            break;

            //============================================================================
        case '8':
            bandera=true;
            break;

        }
    }while(bandera==false);

    return 0;

}
