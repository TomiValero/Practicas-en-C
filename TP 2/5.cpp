//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    float imp, fin;
    cout<<"Ingrese el importe: $";
    cin>> imp;
    if (imp<100){
        fin=imp*0.95;
        cout<<"Su importe final es: $"<< fin;
    } else if (imp<=500){
            fin=imp*0.90;
        cout<<"Su importe final es: $"<< fin;
        }else {
            fin=imp*0.85;
        cout<<"Su importe final es: $"<< fin;
        }
	cout<<endl;
	system("pause");
	return 0;
}
