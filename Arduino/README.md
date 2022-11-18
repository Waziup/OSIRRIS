Osiris_Soil_Sensor Arduino code
===================================

The code has been created by C. Pham for the [Intel-Irris project](https://github.com/CongducPham/PRIMA-Intel-IrriS), there are some slight modifications made, to fit the new use case.

This is the source code of the generic IoT sensor platform. It can handle either

- 1 soil humidity capacitive sensor (e.g. SEN0308)

or 

- 1 Watermark tensiometer 
 
An additional soil temperature sensor (DS18B20) can be added.

It supports DIY Arduino ProMini, WaziSense and WaziDev development lines. For WaziSense and WaziDev, the embedded I2C SI7021 sensor can be activated to measure conditions in the device casing, as well as the solar charging circuit (WaziSense) or battery voltage level (WaziDev).

It can be configured as LoRaWAN 1.0 device for both uplink and downlink transmissions.

See the related tutorial slides and videos.

Default configuration for OSIRIS project
===

- Capacitive sensor SEN0308 connected to A0 (signal) and A1 (power)
- LoRaWAN mode to WaziGate (single channel)
- EU433 band (for Algeria and Morocco)
- Device address is 26011DBB