//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i, num, secu, maximo, a, b;
    for (i=1;i<=5;i++) {
cout<<"Ingrese un numero: ";
cin>>num;

    if (i==1) {
        maximo=num;
}

    if (num>=maximo) {
        a=maximo;
        secu=a;
        maximo=num;
    }else {
    if (b==1) {
        secu=num;
    }

    if (num>=secu) {
        secu=num;
    }

    }
}
cout<<"Los mayores son primero: "<<maximo<<" y despues "<<secu;
	cout<<endl;
	system("pause");
	return 0;
}
