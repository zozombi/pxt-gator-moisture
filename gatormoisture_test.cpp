#include "MicroBit.h"

MicroBit uBit;

int main() {
 uBit.init();
 uBit.display.scroll("NEW PROGRAM");
 while (1) {
  uBit.io.P0.setDigitalValue(1);
  uBit.io.P0.setDigitalValue(0);
 }
 release_fiber();
}
