#ifndef SUBMENUDATOS_H_INCLUDED
#define SUBMENUDATOS_H_INCLUDED

void SubMenuDatos();

void SubMenuDatos(){
    int opc;
    datos reg;
    while(true){
        system("cls");
        cout<<"MENU DATOS : "<<endl;
        cout<<"-----------------------------"<<endl;
        cout<<"1) MOSTRAR PELICULA MAS TAQUILLERA "<<endl;
        cout<<"2) MOSTRAR PELICULA MAS TAQUILLERA EN EL MES "<<endl;
        cout<<"3) MOSTRAR RECAUDACION POR CADA DIRECTOR"<<endl;//preferible mostrar recaudaciones por director
        cout<<"4) RECAUDACION TOTAL DEL CINE TEEMOPOLIS "<<endl;
        cout<<"-----------------------------"<<endl;
        cout<<"0) VOLVER AL MENU PRINCIPAL "<<endl;
        cout<<"SELECCIONE UNA DE LAS OPCIONES : ";
        cin>>opc;
        system("cls");
        switch(opc){
            case 1: reg.peliculaMasTaquillera();
            system("pause");
                    break;
            case 2: reg.peliculaMasTaquilleraEnUnMes();
                system("pause");
                    break;
            case 3:
                reg.recaudaciondirector();
                system("pause");
                    break;
            case 4: reg.RecaudacionCine(); ///funca
                    system("pause");
                    break;
            case 0: return ;
                    break;
            default: cout<<"OPCION INCORRECTA! "<<endl;
                    break;
        }
        cout <<endl;

    }

    return ;
}
#endif // SUBMENUDATOS_H_INCLUDED
