
#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanio, i, opcion=0, posicion;
    
    //dimensionar el array
    printf("Ingrese el tamaño del array\n");
    scanf("%d", &tamanio);
    
    int vector[tamanio];
    
    //llenar el array
    for(i=0; i<tamanio; i++){
    vector[i]=rand() % 11;    
    }
    
    
    while(opcion!=2){
        //elegir posicion
        printf("Ingrese la posicion que desea eliminar\n");
        scanf("%d", &posicion);
       
        //eliminar posicion
        for(i=posicion-1;i<tamanio;i++){
            vector[i]=vector[i+1];
        }
        vector[tamanio-1]=0;
        
            //mostrar el array
        for(i=0;i<tamanio;i++){
            printf("%d\t", vector[i]);
        }
        
    
        printf("\n");
        
        printf("continuar(cualquier numero)\n2.salir\n ");
        scanf("%d", &opcion);
       
    }

    
    
    return 0;
}

