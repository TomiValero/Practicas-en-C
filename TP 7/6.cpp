//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


void sumayp(int x,int y){
    int s, l;
    s=x+y;
    l=x*y;
    cout<<s<<endl;
    cout<<l<<endl;
    }


int main(){
    int num, num2;
    cout<<"Ingrese un numero: ";
    cin>>num;
    cout<<"Ingrese un numero: ";
    cin>>num2;
    sumayp(num,num2);
	cout<<endl;
	system("pause");
	return 0;
}
