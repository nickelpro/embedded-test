#include <avr/io.h>
#include <inttypes.h>

#define F_CPU 8E6UL
#include <util/delay.h>

int main() {
  DDRC = ~_BV(7);

  uint8_t local {};
  PORTC = local;

  for(;;) {
    local |= _BV(7);
    PORTC = local;

    _delay_ms(500);

    local &= ~_BV(7);
    PORTC = local;
  }
}
