# Struct-Z
Un ejercicio en C++ con Tipos de Datos Abstracto

#include <iostream>
#include <string.h>

using namespace std;

struct TDA_Z
{
    int Cod;
    char Materia[60];
    float Matriz[4][3];
};


int main(){

    Regreso:
    TDA_Z Docente;

    cout<<"\nIngresa el Codigo de la Materia: ";
    cin>>Docente.Cod;

    if (Docente.Cod<=0)
    {
        cout<<"Codigo Erroneo, Vuelve a Intentarlo";
        goto Regreso;
    }
    
    cout<<"\nIngresa el Nombre de la Materia: ";
    fflush(stdin); // Esta función nos permite para que nuestro buffer nos se nos llene automaticamente con valores basuras.
    cin.getline(Docente.Materia,60,'\n'); 

    cout<<"\n";

    for (int i = 0; i < 4; i++)
    {
        cout<<"Semestre "<<i+1<<"\n\n";
        for (int j = 0; j < 3; j++)
        {
            cout<<(j+1)<<".- Ingresa la Nota: ";
            cin>>Docente.Matriz[i][j];
            cout<<endl;
        }
        cout<<"\n";
    }

    // Mostrando Datos

    for (int i = 0; i < 4; i++)
    {
        cout<<"Semestre "<<i+1<<"\n";

        for (int j = 0; j < 3; j++)
        {
            cout<<Docente.Matriz[i][j]<<"  ";
        }
        cout<<"\n";
    }
    
    
    cout<<"\n";
    system("pause");
    return 0;
}
