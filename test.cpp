#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string respuesta;
    string frutas[5];

    frutas[1]="Manzana";
    frutas[2]="Naranja";
    frutas[3]="Pera";

    cout << "\nawa de " + frutas[1] + " que parece de " + frutas[2] + " pero sabe a " + frutas[3] + " dwb \n\n";

    cout << "Di ok para continuar :v \n";
    cin >> respuesta;
    do{
        if(respuesta != "ok"){
            cout << "TE DIJE QUE ESCRIBIERAS ok >:v \n";
            cout << "Dilo >:v \n";
            cin >> respuesta;
        }
        if(respuesta == "ok"){
            cout << "cerrando...";
        }
    }while(respuesta != "ok");
    return(0);
}
