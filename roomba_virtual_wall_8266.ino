#include <IRremoteESP8266.h>
#include <IRsend.h>

const uint16_t irLedPin = 4;  // ESP8266 GPIO pin to use. Recommended: 4 (D2).

IRsend irsend(irLedPin);  // Set the GPIO to be used to sending the message.

void setup()
{
  irsend.begin();
  irsend.enableIROut(38); // Set the frequency to 38 kHz
}

void loop()
{
  irsend.mark(1000);
  irsend.space(1000);
}
