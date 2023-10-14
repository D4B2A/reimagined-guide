#include <error.h>

void fatalError(int errorCode){
  catchError(errorCode, true);
}

void catchError(int errorCode, bool fatal){
}

void reportError(int destination){
  if (destination & USART) writeUSART(*msgPointer);
  if (destination & I2C) errorI2C(*msgPointer);
  if (destination & SPI) errorSPI(*msgPointer)
}
