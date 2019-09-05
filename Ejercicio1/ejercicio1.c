
#include <stdio.h>


int main() {

    int opcion,fila,columna,i,j;
    double ganancias=0.0,totalPagar=0.0;
    char asientos[5][5];
    
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            asientos[i][j]='L';
        }
    }
    
    
    
        printf("Ingrese su opcion\n1.vender\n2.ver ganancias\n3.ver asientos\n4.salir\n");
        scanf("%d", &opcion);
   
        
        while (opcion!=4) {

        
        //vender
        if(opcion==1){
            
            printf("Ingrese la fila 1.$5.00 5.$3.50 los demas $2.50\n");
            scanf("%d", &fila);
            
            printf("Ingrese la columna\n");
            scanf("%d", &columna);
            
            if(asientos[fila-1][columna-1]=='L'){
                asientos[fila-1][columna-1]='O';
                if(fila==1){
                    totalPagar=5.0;
                    ganancias=ganancias+totalPagar;
                }else if(fila==5){
                    totalPagar=2.5;
                    ganancias=ganancias+totalPagar;
                }else{
                    totalPagar=3.5;
                    ganancias=ganancias+totalPagar;
                }
                
                
            }else{
                printf("El asiento esta ocupado\n");
                
            }
            
            
        }
        
        //ver ganancias
        if(opcion==2){
            printf("\nTotal en caja: %f\n\n", ganancias);
        }
        
        //ver asientos 
        if(opcion==3){
            printf("L(Libre) O(Ocupado)\n");
            for(i=0;i<5;i++){
                for(j=0;j<5;j++){
                    printf("%c\t", asientos[i][j]);
                }
                printf("\n");
            }
        }
        
        printf("Ingrese su opcion\n1.vender\n2.ver ganancias\n3.ver asientos\n4.salir\n");
        scanf("%d ", &opcion);
        
    }

    
    
    
    return 0;
}

