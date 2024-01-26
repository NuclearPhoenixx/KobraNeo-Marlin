# KobraNeo-Marlin

My try to compile vanilla Marlin for the Anycubic Kobra Neo/Go.

The printers use a HC32F460 MCU, which now apparently is supported by Marlin: [[FR] (Unkown Mainboard with HC32F460 MCU) #24338](https://github.com/MarlinFirmware/Marlin/issues/24338)

Doesn't actually compile using PlatformIO because it can't find the SoftwareSerial implementation for the TMC steppers.
If I override this check, it also claims that SPI is not supported for this type of MCU, so the LCD is probably also not supported.
