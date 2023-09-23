#include <xc.h>
#include"config.h"              // Configuración básica del micro 

#define DIST_MAX        30      // Distancia máxima a detectar, en cm

#define LED_ATAQUE      RA7     // Indica que se encuentra en modo ataque
#define LED_BUSCA       RA6     // Indica que se encuentra en modo búsqueda

#define TRIGGER         RB1     // Pin trigger del sensor SR-HC04
#define ECHO            RB0     // Pin echo del sensor SR-HC04
#define LED_ECHO1       RA3     // Indica el estado del sensor
#define LED_ECHO2       RA2     // Indica el estado del sensor

#define MOTOR_IZQ_A     RB2     // Pines para controlar motor izquierdo
#define MOTOR_IZQ_B     RB3
#define MOTOR_DER_A     RB4     // Pines para controlar motor derecho
#define MOTOR_DER_B     RB5



/* Función que calcula la distancia a un objeto utilizando el sensor SR-HC04
 *      Retorna: valor entero representando la distancia en cm
 */
char distancia () {

    int d;                  // Variable auxiliar para calcular distancia
    
    TMR1 = 0;               // Reset del Timer1
    
    TRIGGER = 1;               // Envía señal de TRIGGER durante 10us
    __delay_us(10);
    TRIGGER = 0;
    
    LED_ECHO1 = 1;
    while (ECHO == 0) {     // Espera hasta recibir el ECHO
    }
    LED_ECHO1 = 0;
    
    LED_ECHO2 = 1;
    TMR1ON = 1;             // TIMER1 activo
    while (ECHO == 1) {     // Espera mientras reciba el ECHO
    }
    TMR1ON = 0;             // TIMER1 detenido 
    LED_ECHO2 = 0;
    
    d = TMR1;               // Lee el valor del TIMER1
    d = d / 58;             // Calcula la distancia en cm

    return (char)d;
}



void main() {
    
    CMCON=0x07;             // Desactivo los comparadores analógicos del micro:
    
    TRISB = 0b11000001;     // Entrada: RB0 (ECHO). Salidas: RB2-5(motores); RB1 (TRIGGER)
    TRISA = 0b00110000;     // Salidas: LEDs
    PORTA = 0;
    PORTB = 0;
    
    T1CON = 0b00001001;     // Configuración TMR1 (base de tiempo: 1us)

    __delay_ms(5000);       // Retardo de arranque

    while (1) {

        if (distancia() <= DIST_MAX){  // Si detecta un objeto ataca:
            LED_ATAQUE = 1;
            LED_BUSCA = 0;
            MOTOR_IZQ_A = 1;
            MOTOR_IZQ_B = 0;
            MOTOR_DER_A = 1;
            MOTOR_DER_B = 0;

       } else {                    // Si no, busca:
            LED_ATAQUE = 0;
            LED_BUSCA = 1;
            MOTOR_IZQ_A = 1;
            MOTOR_IZQ_B = 0;
            MOTOR_DER_A = 0;
            MOTOR_DER_B = 1;
        }

    }

}