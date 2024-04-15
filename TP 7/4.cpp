//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


void maxi (int x,int y){
    int s;
    if(x>y){
        s=x;
    } else s=y;
    cout<<s<<endl;
    }


int main(){
    int num, num2;
    cout<<"Ingrese un numero: ";
    cin>>num;
    cout<<"Ingrese un numero: ";
    cin>>num2;
    maxi(num,num2);
	cout<<endl;
	system("pause");
	return 0;
}
