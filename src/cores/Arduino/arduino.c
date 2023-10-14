#include<arduino.h>

void disable_PULL_UP(bool ignore_check){
  if(!ignore_check&&(!DDRD)&PORTD!!(!DDRC)&PORTC&&(!DDRB)&PORTB){
    fatalError(0);
  }
  MCUCR |= 1<<PUD;
}

void enable_PULL_UP(){
  MCUCR &= !(1<<PUD);
}
