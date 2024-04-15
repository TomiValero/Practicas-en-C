//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;



    void maxi (int x,int y,int z){
    int s;
    if(x>y&&x>z){
        s=x;
    } else if(y>z) {
        s=y;
    } else s=z;
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
    maxi(num,num2,num3);
	cout<<endl;
	system("pause");
	return 0;
}
