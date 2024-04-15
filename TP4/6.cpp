//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int num, contp=0, contn=0;
    cout<<"Inresar un numero: ";
    cin>>num;
    while(num!=0){
    if(num>0){
        contp++;
    }else {
        contn++;
    }
    cout<<"Inresar un numero: ";
    cin>>num;
    }
    cout<<"Positivos: "<<contp;
	cout<<endl;
	cout<<"Negativos: "<<contn;
    cout<<endl;
	system("pause");
	return 0;
}
