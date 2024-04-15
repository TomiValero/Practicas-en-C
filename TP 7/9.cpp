//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
int bisiesto(int x){
if(x%100==0&&x%400==0){
    return 1;
}else return 0;
}

int main(){
    int bis, num, anios[10], i, contb=0;
    for(i=0;i<10;i++){
        cout<<"Ingrese un numero: ";
        cin>>num;
        anios[i]=num;
    }
    for(i=0;i<10;i++){
        if(bisiesto(anios[i])==1){
            contb++;
            cout<<contb<<endl;
            cout<<anios[i]<<endl;
        }

    }
	cout<<contb<<endl;
	system("pause");
	return 0;
}
