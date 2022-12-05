#include <WaziDev.h>
#include <xlpp.h>

// LoRaWANKey is used as both NwkSKey (Network Session Key) and Appkey (AppKey) for secure LoRaWAN transmission.
// Copy'n'paste the key to your Wazigate: 23158D3BBC31E6AF670D195B5AED5525
unsigned char LoRaWANKeys[16] = {0x23, 0x15, 0x8D, 0x3B, 0xBC, 0x31, 0xE6, 0xAF, 0x67, 0x0D, 0x19, 0x5B, 0x5A, 0xED, 0x55, 0x25};
// Copy'n'paste the DevAddr (Device Address): 26011D87
unsigned char devAddr[4] = {0x26, 0x01, 0x1D, 0xB5};
// You can change the Key and DevAddr as you want.

WaziDev wazidev;

// globals
int intervall = 180000; //3min

void setup()
{
    Serial.begin(38400);
    wazidev.setupLoRaWAN(devAddr, LoRaWANKeys);
}

XLPP xlpp(120);

void loop(void)
{
  // 1
  // Create xlpp payload.
  xlpp.reset();
  xlpp.addBool(1, true);

  // 2.
  // Send paload with LoRaWAN.
  serialPrintf("LoRaWAN send ... ");
  uint8_t e = wazidev.sendLoRaWAN(xlpp.buf, xlpp.len);
  if (e != 0)
  {
    serialPrintf("Err %d\n", e);
    delay(intervall);
    return;
  }
  serialPrintf("OK\n");
  
  delay(intervall);
}
