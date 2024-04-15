//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;

void suma(int x,int y){
    int s;
    s=x+y;
    cout<<s<<endl;
    }


int main(){
    int num, num2;
    cout<<"Ingrese un numero: ";
    cin>>num;
    cout<<"Ingrese un numero: ";
    cin>>num2;
    suma(num,num2);
	cout<<endl;
	system("pause");
	return 0;
}
