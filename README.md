
# MentorBit-LDR
Esta librería está construida por Digital Codesign para utilizar el módulo de LDR (Light Dependent Resistor), principalmente diseñado para el kit educacional "MentorBit".

Puedes encontrar nuestro MentorBit y mucho más material de electrónica y robótica en nuestra tienda oficial:  [https://digitalcodesign.com/shop](https://digitalcodesign.com/shop)

# Modo de empleo

Una vez tengamos la librería instalada desde el Arduino IDE, tenemos que incluir la librería con la siguiente línea:

```
#include <MentorBitLDR.h>
```

### Constructor

Una vez incluida la librería, usamos el constructor para crear el objeto del módulo LDR, y definir los pines analógicos y digitales a los que está conectado el módulo de LDR.

```
MentorBitLDR ldr(PIN_ANALOGICO, PIN_DIGITAL);
```

Donde `PIN_ANALOGICO` es el pin analógico al que está conectado el sensor LDR y `PIN_DIGITAL` es el pin digital a donde está conectado. Si no se especifican, se utilizarán los valores predeterminados `0` para ambos pines.

### Uso

Con el objeto `ldr` definido, podemos obtener la lectura del sensor utilizando las siguientes funciones:

- **Lectura digital**: Para obtener el valor digital (encendido/apagado) de la LDR:

```
bool valorDigital = ldr.lecturaDigital();
```

El valor devuelto es `true` o `false` dependiendo del estado de la LDR.

- **Lectura analógica**: Para obtener el valor analógico de la LDR en un rango de 0 a 1023:

```
uint16_t valorAnalogico = ldr.lecturaAnalogica();
```

El valor devuelto es un número entre 0 y 1023, correspondiente a la intensidad de luz detectada por la LDR.

### Atributos

- `PIN_ANALOGICO`: Define el pin analógico donde está conectada la LDR.
- `PIN_DIGITAL`: Define el pin digital donde está conectada la LDR.

### Resumen de Métodos

- `MentorBitLDR(uint8_t analog_pin_ldr, uint8_t digital_pin_ldr)`: Constructor para crear el objeto del sensor LDR, configurando los pines analógico y digital.
- `lecturaDigital()`: Obtiene el valor digital (encendido/apagado) de la LDR.
- `lecturaAnalogica()`: Obtiene el valor analógico (intensidad de luz) de la LDR.
