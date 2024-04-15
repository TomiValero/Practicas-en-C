//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
      int i, num, vect[10], a, b, maxi;
    bool band=true;
    for(i=0;i<10;i++){
        cout<<"Ingrese un numero: ";
        cin>>num;
        vect[i]=num;
    }
    cout<<"Ingrese un numero A: ";
    cin>>a;
    cout<<"Ingrese un numero B: ";
    cin>>b;
    for(i=0;i<10;i++){
        if((vect[i]>a&&vect[i]<b)or(vect[i]<a&&vect[i]>b)){
            if(band==true){
                maxi=vect[i];
                band=false;
            }
            if(band==false&&maxi<vect[i]){
                maxi=vect[i];
            }
        }
    }
	cout<<maxi<<endl;
	system("pause");
	return 0;
}
