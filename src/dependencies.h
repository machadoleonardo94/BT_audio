#include <Arduino.h>
#include <Wire.h>

#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>

#include <IRremote.h>

#include "BluetoothA2DPSink.h"
#include "AudioTools.h"

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET    -1

#define RELAY_PIN 15

#define IR_RECEIVER_PIN 13
#define DECODE_NEC
//#define DECODE_DISTANCE_WIDTH
//#define DECODE_HASH
#define RAW_BUFFER_LENGTH  1000