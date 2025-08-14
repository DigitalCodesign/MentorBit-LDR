# MentorBit-LDR

Esta librería está diseñada para que puedas detectar el nivel de luminosidad en el ambiente usando tu placa MentorBit y el **módulo de sensor LDR**.

Si estás empezando en el mundo de la electrónica, ¡no te preocupes! MentorBit está pensado para que aprender sea fácil y divertido. Esta placa ya incluye un montón de componentes (LEDs, pulsadores, pantallas, etc.) y utiliza conectores especiales (JST) para que puedas añadir nuevos sensores y módulos sin tener que pelearte con un montón de cables. Pásate por nuestra web para saber más de MentorBit y nuestros productos [pinchando aquí](https://digitalcodesign.com/).

![Render del Módulo MentorBit LDR.](https://github.com/DigitalCodesign/MentorBit-LDR/blob/main/assets/LDR_Module.png)

Con esta librería, podrás medir la luz del entorno y utilizar esa información para crear proyectos interactivos y automáticos que reaccionen a la iluminación ambiental.

---

## Descripción

### ¿Qué es un sensor LDR?

Una LDR (resistencia dependiente de la luz) es un componente cuya resistencia eléctrica varía según la cantidad de luz que recibe. A más luz, menor resistencia; a menos luz, mayor resistencia. Esta propiedad se puede aprovechar para medir indirectamente el nivel de luminosidad en el ambiente.

El módulo MentorBit LDR permite hacer esto de forma sencilla a través de una lectura analógica.

---

### ¿Qué hace esta librería?

La librería **MentorBit-LDR** permite obtener de forma sencilla el valor analógico o digital del módulo de LDR.

---

### ¿Qué puedes construir con este módulo?

- Sistemas que enciendan luces automáticamente cuando oscurece.
- Alarmas que reaccionen a cambios de luz.
- Contadores de pasos o entradas usando sombra/luz.
- Proyectos interactivos que se activen con una linterna.

---

## Cómo empezar

### 1. **Conexión del Módulo**

Conecta el módulo LDR a uno de los puertos analógico-digital con conector JST de 4 pines que están en la sección "Puertos para Módulos" de la placa MentorBit.

### 2. **Instalación de la Librería**

- Abre tu entorno de programación IDE de Arduino.
- Ve al menú *Programa -> Incluir Librería -> Administrar Librerías...*
- En el buscador, escribe ***MentorBit-LDR*** y haz clic en "Instalar".

![Ejemplo de búsqueda en el gestor de librerías del IDE de Arduino.](https://github.com/DigitalCodesign/MentorBit-LDR/blob/main/assets/library_instalation_example.png)

---

## Ejemplo Básico: Medir luz ambiental

Este ejemplo imprime por el monitor serie el nivel de luminosidad detectado.

```cpp
#include <MentorBitLDR.h>

#define PIN_ANALOGICO A4
#define PIN_DIGITAL 24

MentorBitLDR LDR(PIN_ANALOGICO, PIN_DIGITAL);

void setup() {
    // Inicializamos el monitor serial a 9600 baudios
    Serial.begin(9600);
}

void loop() {
    // Se muestra por serial el valor de la salida analogica
    Serial.print("El valor analogico de la LDR es: ");
    Serial.println(LDR.lecturaAnalogica());
    delay(1000);
}
```

---

## Funciones Principales

- `uint16_t lecturaAnalogica()`  
  Devuelve un valor analogico que varía en función de la cantidad de luz detectada.

- `bool lecturaDigital()`  
  Devuelve el valor digital del comparador del módulo.
  
---

## Recursos Adicionales

- [Web del fabricante](https://digitalcodesign.com/)
- [Tienda Online de Canarias](https://canarias.digitalcodesign.com/shop)
- [Tienda Online de Península](https://digitalcodesign.com/shop)
- [Web Oficial de MentorBit](https://digitalcodesign.com/mentorbit)
- [Web Oficial del Módulo LDR](https://digitalcodesign.com/shop/00038799-mentorbit-modulo-de-ldr-8110?search=ldr&order=create_date+desc#attr=)
- [Manual de usuario del Módulo](https://drive.google.com/file/d/1lSXN0D-Qy-WLroyO_IUHouP6bF2MErCd/view?usp=drive_link)
- [Modelo 3D del Módulo en formato .STEP](https://drive.google.com/file/d/15aeaC-od4cf8WDQvotPhYlnHq2CgE2jh/view?usp=drive_link)
