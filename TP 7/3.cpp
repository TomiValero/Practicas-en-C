//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
void prom(int x,int y,int z){
    int s;
    s=(x+y+z)/3;
    cout<<s<<endl;
    }


int main(){
    int num, num2, num3;
    cout<<"Ingrese un numero: ";
    cin>>num;
    cout<<"Ingrese un numero: ";
    cin>>num2;
    cout<<"Ingrese un numero: ";
    cin>>num3;
    prom(num,num2,num3);
	cout<<endl;
	system("pause");
	return 0;
}
