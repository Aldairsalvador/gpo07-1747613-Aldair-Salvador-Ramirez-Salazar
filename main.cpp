#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{
 
    int numproducto, opcion, respuesta;
    float precio_siniva,precio_iva;
    string videojuego, descripcion,clasificacion, genero, fechaestreno, consola;

    cout << "\t ------BlockBuster tienda en linea-------- \n";
    cout << " 1.-Agregar Producto \n 2.-Modificar Producto\n 3.-Eliminar Producto\n 4.-Lista de Productos\n 5.-Limpiar Pantalla\n 6.-Salir\n";
    cin >> opcion;

    switch (opcion)
    {
    case 1:    //Agregar Articulo
    do{
        cout << "Ingresa el numero de producto \n\n";
        cin >> numproducto;
        cout << "ingresa el nombre del videojuego\n\n";
        cin.ignore();                                        //me ignora el primer espacio 
        getline(cin, videojuego);                            //permite ejecutar los espacios en la variable
        cout << "ingrese la fecha de estreno\n\n";
        cin.ignore();
        getline(cin, fechaestreno);
        cout << "ingrese la clasificacion\n\n";
        cin.ignore();
        getline(cin, clasificacion);
        cout << "ingresa la descripcion del producto\n\n";
        cin.ignore();
        getline(cin, descripcion);
        cout << "ingresa el genero del videojuego\t***ejemplo: shoter, deportes, RPG, Accion, Arcade...etc***\n\n"; //apoyo en caso de no conocer los generos 
        cin.ignore();
        getline(cin, genero);
        cout << "ingresa el nombre de la consola \n\n";
        cin.ignore();
        getline(cin, consola);
        cout << "ingrese el precio del producto\n\n";
        cin >> precio_siniva;
        precio_iva= precio_siniva * 1.16;
        cout <<"El precio total del videojuego es de: "<<precio_iva<<endl; // precio total con iva 
        cout <<"Deseas agregar otro articulo?\t***ingrese 1 para continuar comprando y presione cualquier otro numero para dejar de comprar***\n"; //opcion para agregar otro articulo 
        cin>>respuesta;
    }while(respuesta==1);
        cout << "se a finalizado la compra\n\n";
        return main();
        break;

    case 2: //Modificar Articulo
        break;

    case 3://Eliminar Articulo
        break;

    case 4: //Lista de Articulos
        break;

    case 5: //Limpiar Pantalla
        system("clear"); //clear  se utiliza en web 
        return main();
        break;

    case 6: //salir
        cout << "Gracias por comprar en BlockBuster  \n";
        break;

    default:
        cout << "ingrese una opcion correcta \n";
        return main();

    }

}
