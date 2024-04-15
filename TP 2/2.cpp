//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int n1, n2;
    cout<<"ingrese probable multiplo: ";
    cin>>n1;
    cout<<"ingrese el multiplicador: ";
    cin>>n2;
    if (n1%n2==0){
        cout<<"si";
    }
    else{
        cout<<"no";
    }
	cout<<endl;
	system("pause");
	return 0;
}
