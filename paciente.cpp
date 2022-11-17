#include "paciente.h"
string Paciente::estaContagiado()
{

    return this->positivo ? "Si":"No";

}
Paciente::Paciente()
{ // Incializamos las varibles
    this->edad=0;
    this->nombre ="";
    this->genero='t';
    this->positivo=false;
    this->altura=0;
    this->masa=0;


}
Paciente::Paciente(string nombre, int edad, char genero, float altura, float masa)
{
    this->nombre=nombre; // Asignamos el valor de mis varibles de llegada a mis atributos de mi istancia
    this->edad=edad;
    this->genero=genero;
    this->G()="";
    this->altura=altura;
    this->masa=masa;
    // Incrementa el numero total de pacientes" creados"

    Paciente::totalPacientes++;

    //Asignar un numero ID al paciente
    this->id=Paciente::totalPacientes;

}
void Paciente::setPositivo(bool valor)
{
    this->positivo=valor;
}
string Paciente::getDatos(){

    return "ID: "+ to_string(this->id) + "\n" +
            "Nombre: "+ this->nombre + "\n"+
            "Edad: " + to_string(this->edad)+"\n"+
            "Genero: "+ this->G()+"\n"+
            "Altura en metros: "+ to_string(getAltura())+"\n"+
            "Masa en kilogramos: " + to_string(getMasa())+"\n"+
            "IMC: " + to_string (imc())+"\n" +
            "Evaluacion del peso : "+ estado(getIMC())+"\n"+
            "Dado de alta: " + dAlta()+"\n";

}
void Paciente::setGenero(char generos)
{
    this->genero=generos;
}
char Paciente::getGenero()
{
    return this->genero;
}
string Paciente::G()
{
    char sexo =this->getGenero();
    if (this->getGenero() == 'M'){

        return "Masculino \n";


    } else if (this->getGenero()== 'F'){


        return "Femenino \n";
    }else {


    }

    return to_string(sexo);
}
void Paciente::setAltura(float alt)
{
    this->altura=alt;

}
float Paciente ::getAltura(){

    return this-> altura;
}
void Paciente ::setMasa(float mas){

    this->masa=mas;
}
float Paciente ::getMasa (){
    return this->masa;
}
float Paciente::imc()
{

    float imc1 = getMasa()/(getAltura()*getAltura());
    return imc1;

}
float Paciente::getIMC(){

    return this->imc();

}
string Paciente::estado(float indicemc)
{
    indicemc=getIMC();
    if (indicemc > 30.0){

        return " TIENE OBESIDAD";
    }else if (indicemc>=25.0 && indicemc<=29.9){

        return " TIENE SOBREPESO";

    }else if (indicemc>=18.5 && indicemc<=24.9){

        return "PESO NORMAL";
    }else if (indicemc<18.5){

        return "PESO INFERIOR AL NORMAL";
    }

    return to_string(indicemc);
}
string Paciente::dAlta(){
    return this->positivo ? "No":"Si";
}
int Paciente::getID(){


    return this->id;

}
string Paciente::getNombre()
{
    return this->nombre;
}
