#include <avr/interrupt.h>

void setup()
{
  DDRB |= (1 << PB1); //Подключение диода как выхода
  TCCR1A = (1 << COM1A1) | (1 << WGM10); // неинвертирующий ШИМ на OC1A, включение режима Fast PWM, 8-bit
  TCCR1B = (1 << WGM12) | (1 << CS11 ) | (1 << CS10); // включние режима Fast PWM, 8-bit, установка делителя 64
  OCR1A = 64; // ширина импульса 64 / 255 ≈ 25%

}

void loop() {}
