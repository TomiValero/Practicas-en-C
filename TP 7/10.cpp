//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
int pari(int x){
if(x%2==0){
    return 1;
}else return 0;
}

int main(){
    int num, contp=0, contip=0;
    cout<<"Ingrese un numero: ";
    cin>>num;
    while(num!=0){
        if(pari(num)==1){
            contp++;
        } else contip++;
        cout<<"Ingrese un numero: ";
        cin>>num;
    }
	cout<<"par "<<contp<<endl;
	cout<<"impar "<<contip<<endl;
	system("pause");
	return 0;
}
