#include <iostream>
#include <string>
#include "hospital.h"
#include "paciente.h"
using namespace std;
Hospital::Hospital(){
    this->nombre = "";
    this->pacientesIngresados = 0;
}
Hospital::Hospital(string nombre){
    this->nombre = nombre;
    this->pacientesIngresados = 0;
}
void Hospital::ingresarPaciente(){
    string nombre;
    int edad;
    bool estaContagiado;
    char genero;
    float altura;
    float masa;
    string liberado;


    cout << "\nIngrese el nombre del paciente:\n ";
    getline(cin>>ws, nombre);
    cout << "\nIngrese la edad del paciente: \n";
    cin >> edad;
    cout << "\nIngrese el sexo del paciente "<<"\n"<<"Masculino = M / Femenino= F\n ";
    cin >> genero;
    cout<<"\nIngrese la altura del paciente en metros: \n";
    cin>>altura;
    cout<<"\nIngrese la masa del paciente en kilogramos: \n";
    cin>>masa;
    // IMPORTANTISIMO !!!
    // Obtener el indice para el vector de pacientes
    int indice = this->pacientesIngresados;

    // Crear el objeto y guardar en el vector
    this->pacientes[indice] = Paciente(nombre,edad, genero,altura,masa);

    cout << "Tiene Covid-19 (1=Si, 0=No): ";
    cin >> estaContagiado;
    this->pacientes[indice].setPositivo(estaContagiado);

    cin.ignore(); // limpiar el buffer de cin (siempre que utilizo strings utilizo esto)

    this->pacientesIngresados++;
}
void Hospital::listarpacientes(){
    cout << "\n= = HOSPITAL " + this->nombre + " = =" << endl;
    for (int i=0; i < this->pacientesIngresados; i++){
        cout << this->pacientes[i].getDatos();
    }
}
bool Hospital::darAlta()
{
    int p,n;


    cout<< " \n Digite a que paciente quiere dar de alta: " ;
    cin>>p;
    for(int i=0; i<this->pacientesIngresados; i++){

        if(p==this->pacientes[i].getID()){

            cout<< "\n Quiere dar de alta al paciente :"<< ""<<pacientes[i].getNombre()<<" ? " << "(1=Si 0=No): ";

            cin>>n;

            if(n==1){
                cout<<"Dado de alta \n";
            }else if(n==0){

                cout<<"Internado \n";
            }else{

            }
        }
    }

    bool o=false;

    if(n==1){
        o=true;
    }else if(n==0){

        o=false;
    }

    return o;
}
bool Hospital::getAlta(){

    return this->darAlta() ;
}
void Hospital::listarpacientesA(){

    for (int i=0; i < this->pacientesIngresados; i++){
        if(getAlta()==true){

            cout << this->pacientes[i].getDatos();
        }else if (getAlta()==false){

        }else{

        }
    }
}
void Hospital::listarpacientesB(){

    for (int i=0; i < this->pacientesIngresados; i++){
        if(getAlta()==true){


        }else if (getAlta()==false){
            cout << this->pacientes[i].getDatos();
        }else{

        }
    }
}
