//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
int i, nl, contp=0, contn=0, contc=0, total, pp, pn, pc;
for (i=1;i<=20;i++) {
    cout<<"Ingrese el numero: ";
    cin>>nl;

    if (nl>0) {
        contp++;
    }
    if (nl<0) {
        contn++;
    }
    if (nl==0) {
        contc++;
    }
    }
total=contc+contp-contn;
pp=(contp*100)/total;
pn=(contn* 100)/total;
pc=(contc* 100)/total;
cout<<"Los positivos son: "<<pp<<"%";
cout<<endl;
cout<<"Los negativos son: "<<pn<<"%";
cout<<endl;
cout<<"Los ceros son: "<<pc<<"%";
cout<<endl;
system("pause");
return 0;
}
