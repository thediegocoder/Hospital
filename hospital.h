#ifndef HOSPITAL_H
#define HOSPITAL_H
#include <string>
#include "paciente.h"
using namespace std;
class Hospital{
private:
    string nombre;
    Paciente pacientes[10]; // vector de OBJETOS
    int pacientesIngresados;

public:
    Hospital();
    Hospital(string);
    void ingresarPaciente();
    void listarpacientes();
    void listarpacientesA();
    void listarpacientesB();

    int getPacientesIngresados();
    bool darAlta();
    bool getAlta();

};
#endif
