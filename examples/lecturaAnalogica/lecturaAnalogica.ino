/*
 

            ██████╗    ██╗    ██████╗    ██╗   ████████╗    █████╗    ██╗               
            ██╔══██╗   ██║   ██╔════╝    ██║   ╚══██╔══╝   ██╔══██╗   ██║               
            ██║  ██║   ██║   ██║  ███╗   ██║      ██║      ███████║   ██║               
            ██║  ██║   ██║   ██║   ██║   ██║      ██║      ██╔══██║   ██║               
            ██████╔╝   ██║   ╚██████╔╝   ██║      ██║      ██║  ██║   ███████╗          
            ╚═════╝    ╚═╝    ╚═════╝    ╚═╝      ╚═╝      ╚═╝  ╚═╝   ╚══════╝          
                                                                                        
     ██████╗    ██████╗    ██████╗    ███████╗   ███████╗   ██╗    ██████╗    ███╗   ██╗
    ██╔════╝   ██╔═══██╗   ██╔══██╗   ██╔════╝   ██╔════╝   ██║   ██╔════╝    ████╗  ██║
    ██║        ██║   ██║   ██║  ██║   █████╗     ███████╗   ██║   ██║  ███╗   ██╔██╗ ██║
    ██║        ██║   ██║   ██║  ██║   ██╔══╝     ╚════██║   ██║   ██║   ██║   ██║╚██╗██║
    ╚██████╗   ╚██████╔╝   ██████╔╝   ███████╗   ███████║   ██║   ╚██████╔╝   ██║ ╚████║
     ╚═════╝    ╚═════╝    ╚═════╝    ╚══════╝   ╚══════╝   ╚═╝    ╚═════╝    ╚═╝  ╚═══╝ 
        
    Este sketch muestra el funcionamiento basico de la libreria MentorBitLDR para
    obtener el valor de una lectura analogica del modulo LDR
    
*/

// Se incluye la libreria del modulo MentorBit de LDR
#include <MentorBitLDR.h>

// Se definen los pines donde se va a conectar el modulo de LDR
#define PINANALOGICO A4
#define PINDIGITAL 24

// Se crea el objeto LDR de la clase MentorBitLDR. Se deben indicar los pines
MentorBitLDR LDR(PINANALOGICO, PINDIGITAL);

void setup(){

    // Inicializamos el bus serial a una velocidad de 9600 baudios
    Serial.begin(9600);
}

void loop(){

    // Se muestra por serial el valor de la salida analogica
    Serial.print("El valor analogico de la LDR es: ");
    Serial.println(LDR.lecturaAnalogica());
    delay(1000);
}