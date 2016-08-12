#include "Marlin.h"
#include "stepper.h"

void process_X_on_code() {
  SERIAL_ECHOLN("X_on");
  enable_x();
}

void process_X_off_code() {
  SERIAL_ECHOLN("X_off");
  disable_x();
}

void process_Y_on_code() {
  SERIAL_ECHOLN("Y_on");
  enable_y();
}

void process_Y_off_code() {
  SERIAL_ECHOLN("Y_off");
  disable_y();
}
