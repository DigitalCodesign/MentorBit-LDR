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
MentorBitLDR::MentorBitLDR(uint8_t analog_pin_ldr, uint8_t digital_pin_ldr){
    _analog_pin_ldr = analog_pin_ldr;
    _digital_pin_ldr = digital_pin_ldr;
}

/*
    Funcion que obtiene el valor de la lectura digital del modulo de LDR y lo devuelve
*/
bool MentorBitLDR::lecturaDigital(){
    bool value;
    value = digitalRead(_digital_pin_ldr);
    return value;
}

/*
    Funcion que obtiene el valor analogico del modulo de LDR y lo devuelve como +
    una variable tipo uint16_t
*/
uint16_t MentorBitLDR::lecturaAnalogica(){
    uint16_t value;
    value = analogRead(_analog_pin_ldr);
    return value;
}