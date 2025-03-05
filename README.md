# MentorBitLDR

Librería para la lectura de datos de un sensor de luz (LDR) en módulos compatibles con MentorBit.

## Descripción

La librería `MentorBitLDR` permite leer datos de un sensor de luz (LDR) en módulos compatibles con MentorBit. Ofrece tanto lectura digital (detección de umbral de luz) como lectura analógica (valor de intensidad lumínica), brindando flexibilidad para diversas aplicaciones de detección de luz.

## Modo de Empleo

1.  **Instalación:**
    * Abre el IDE compatible con MentorBit.
    * Ve a "Herramientas" -> "Gestionar librerías..."
    * Busca "MentorBitLDR" e instálala.

2.  **Ejemplo básico:**

    ```c++
    #include <MentorBitLDR.h>

    MentorBitLDR ldr(A0, 2); // LDR conectado a A0 (analógico) y 2 (digital)

    void setup() {
      Serial.begin(9600);
      Serial.println("Sensor LDR inicializado.");
    }

    void loop() {
      bool luzDigital = ldr.lecturaDigital();
      uint16_t luzAnalogica = ldr.lecturaAnalogica();

      Serial.print("Lectura Digital: ");
      Serial.println(luzDigital ? "Luz detectada" : "Oscuridad");

      Serial.print("Lectura Analógica: ");
      Serial.println(luzAnalogica);

      delay(1000);
    }
    ```

## Constructor y Métodos Públicos

### Constructor

* `MentorBitLDR(uint8_t analog_pin_ldr = 0, uint8_t digital_pin_ldr = 0)`: Crea un objeto `MentorBitLDR`.
    * `analog_pin_ldr`: Número de pin analógico al que está conectado el LDR. Si no se especifica, se asume que no está conectado a ningún pin inicialmente.
    * `digital_pin_ldr`: Número de pin digital al que está conectado el LDR. Si no se especifica, se asume que no está conectado a ningún pin inicialmente.

### Métodos

* `bool lecturaDigital()`: Devuelve `true` si se detecta luz (lectura digital), `false` en caso contrario.
* `uint16_t lecturaAnalogica()`: Devuelve el valor analógico de la intensidad lumínica.
