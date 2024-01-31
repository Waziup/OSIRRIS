![Deploy a WaziGate](./media/thumbnail.png)

# Deploy a WaziGate

This guide will give some help on deploying a WaziGate with different sensor devices.

Here's what we will be learning:
- What parts are required
- How to wire up and read sensor values
- How to connect to WaziGate and communicate via LoRa
- How to communicate to the cloud 

##  Deploy a WaziGate with SenseCap S2120 Weather Station

In the following the procedure of connecting the Seeedstudio SenseCap S2120 weather station to the WaziGate is explained.



##  Deploy a WaziGate with WaziSense Soil Tension Sensor

With the help of this guide you will be able to build a device to track moisture and soil temperature. We use it to collect data for different purposes. [Congduc Pham](https://cpham.perso.univ-pau.fr) created similar devices for the [Intel-Irris Project](https://intel-irris.eu), they also got a [github repository](https://github.com/CongducPham/PRIMA-Intel-IrriS). In the OSIRRIS we want to create a dataset, to compare different machine learning algorithms and to automate irrigation for a farm.

### What parts are required?

The following hardware and software is required in order to follow this user guide:

**Hardware:**
- WaziSense Board
- 868 Mhz Coil Antenna
- Wires and jumpers
- Irrometer Watermark Sensor SS200
- DS18B20 temperature sensor 
- 10 kOhm resistor, for the Watermark
- 4.7 kOhm resistor, for the DS18B20
- Waterproof WaziSense casing (contact us)
- FTDI connector + USB cable
- Power:
    - Solar panel 6 V, 1 W 
    - 18650 3,6V Li-Ion battery
    - 18650 battery holder