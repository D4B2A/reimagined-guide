#include <error.h>

void fatalError(int errorCode){
  catchError(errorCode, true);
}

void catchError(int errorCode, bool fatal){
}

void reportError(int destination){
}
