//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int totald, horasSo, totalh, minutosso, minutos;
    cout<< "Ingrese la cantidad de minutos: ";
    cin>> minutos;
    totalh= minutos/60;
    minutosso = minutos % 60;
    totald= totalh/24;
    horasSo = totalh % 24;
    cout<< "Eso equivale a " << totald << " DIAS y " << horasSo << " HORAS y " << minutosso << " MINUTOS";
	cout<<endl;
	system("pause");
	return 0;
}
