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


  Autor: Digital Codesign
  Version: 1.0.0
  Fecha de creación: Septiembre de 2024
  Fecha de version: Septiembre de 2024
  Repositorio: https://github.com/DigitalCodesign/MentorBit-LDR
  Descripcion:
    Esta libreria esta especificamente diseñada para ser utilizada junto con
    el modulo MentorBit LDR
  Metodos principales:
    MentorBitLDR -> constructor de la clase
    lecturaDigital -> Devuelve el valor de la lectura digital de la LDR.
    lecturaAnalogica -> Devuelve el valor de la lectura analogica de la LDR.

*/

#include <MentorBitLDR.h>

/*
    Constructor, se debe indicar el pin analogico y digital a los que se esta conectando
    el modulo de LDR
*/
MentorBitLDR::MentorBitLDR(uint8_t analog_pin_ldr = 0, uint8_t digital_pin_ldr = 0) {
    _port.gpios[0] = analog_pin_ldr;
    _port.gpios[1] = digital_pin_ldr;
}

/*
    Funcion que obtiene el valor de la lectura digital del modulo de LDR y lo devuelve
*/
bool MentorBitLDR::lecturaDigital(){
    bool value;
    value = digitalRead(_port.gpios[1]);
    return value;
}

/*
    Funcion que obtiene el valor analogico del modulo de LDR y lo devuelve como +
    una variable tipo uint16_t
*/
uint16_t MentorBitLDR::lecturaAnalogica(){
    uint16_t value;
    value = analogRead(_port.gpios[0]);
    return value;
}

void MentorBitLDR::configPort(const Port& port) {

    _port.type = port.type;
    _port.location = port.location;
    _port.gpios[0] = port.gpios[0];
    _port.gpios[1] = port.gpios[1];

}