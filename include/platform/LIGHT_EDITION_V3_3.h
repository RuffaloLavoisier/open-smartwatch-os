#pragma once

#define OSW_PLATFORM_ENVIRONMENT 1
#define OSW_PLATFORM_ENVIRONMENT_TEMPERATURE 1
//#define OSW_PLATFORM_ENVIRONMENT_PRESSURE 0
//#define OSW_PLATFORM_ENVIRONMENT_HUMIDITY 0
//#define OSW_PLATFORM_ENVIRONMENT_MAGNETOMETER 0
#define OSW_PLATFORM_ENVIRONMENT_ACCELEROMETER 1

#define OSW_PLATFORM_HARDWARE_DS3231MZ 1
#define OSW_PLATFORM_HARDWARE_BMA400 1
//#define OSW_PLATFORM_HARDWARE_QMC5883L 0
//#define OSW_PLATFORM_HARDWARE_BME280 0
//#define OSW_PLATFORM_HARDWARE_VIRTUAL 0
#define OSW_PLATFORM_HARDWARE_ESP32 1
#define OSW_PLATFORM_DEFAULT_CPUFREQ 240

#define OSW_DEVICE_ESP32_WIFI_LOWPWR 1
#define OSW_DEVICE_DS3231MZ_RTCINT 32
#define OSW_DEVICE_BMA400_INT1 34
#define OSW_DEVICE_BMA400_INT2 35
#define OSW_DEVICE_I2C_SCL 22
#define OSW_DEVICE_I2C_SDA 21
#define OSW_DEVICE_TPS2115A_STATPWR 15
#define OSW_DEVICE_ESP32_BATLVL 25
