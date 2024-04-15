//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int bilM=0, bilQ=0, bilD=0, bilC=0, cuenta, importe=0;
    cout<<"Ingrese el importe a retirar: $";
    cin>>importe;
    bilM=importe/1000;
    cuenta=importe%1000;
    bilQ=cuenta/500;
    cuenta=cuenta%500;
    bilD=cuenta/200;
    cuenta=cuenta%200;
    bilC=cuenta/100;
    cuenta=cuenta%100;
    cout<<"La cantidad de billetes de $1000 es: "<<bilM;
    cout<<endl;
    cout<<"La cantidad de billetes de $500 es: "<<bilQ;
    cout<<endl;
    cout<<"La cantidad de billetes de $200 es: "<<bilD;
    cout<<endl;
    cout<<"La cantidad de billetes de $100 es: "<<bilC;
	cout<<endl;
	system("pause");
	return 0;
}
