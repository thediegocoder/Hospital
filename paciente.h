#ifndef PACIENTE_H
#define PACIENTE_H
#include <string>
using namespace std;
class Paciente
{
private:
    int id; // Numero de indentificacion
    string nombre; // Nombre del paciente
    int edad; //Edad del paciente
    bool positivo; //Si es positivo para covid 19
    string estaContagiado(); // Retorna un "Si" o un "No" segun A.positivo
    char genero;
    string G ();
    float altura ;
    float masa ;
    string dadodealta;
    float IMC;

public:
    Paciente(); //Constructor por defecto
    Paciente(string, int, char, float, float); //Constructor
    void setPositivo(bool); //Establecer si esta contagiado
    void getPositivo (); // Obtener si el paciente tiene covid 19
    string getDatos(); // Obtener un string con los datos del paciente
    static int totalPacientes ; // Variable statica que lleva la cuenta de los pacientes
    void setGenero (char);
    char getGenero ();
    void setAltura (float);
    float getAltura ();
    void setMasa (float);
    float getMasa ();
    float imc ();
    string estado(float);
    float getIMC();

    int getID();
    string dAlta();

    string getNombre();
    bool darAlta();
    bool getAlta();
};
#endif // PACIENTE_H
