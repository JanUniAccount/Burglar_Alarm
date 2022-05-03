#ifndef LED_H
#define LED_H

#include "Peripheral.h"
#include "Arduino.h"


class LED : public Peripheral{
  public:
    LED(int output_pin);
    void setState(bool _state);
};

#endif // LED_H
