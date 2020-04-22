#include <IRremote.h>

IRsend irsend;

void setup()
{
  irsend.enableIROut(38); // Set the frequency to 38 kHz
}

void loop()
{
  irsend.mark(1000);
  irsend.space(1000);
}
