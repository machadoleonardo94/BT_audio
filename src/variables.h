#ifndef VARIABLES_H
#define VARIABLES_H

#include "dependencies.h"

// Variables for display information
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

String artist = "";
String album = "";
String title = "";
uint32_t durTime = 0;
uint32_t playtime = 0;
uint32_t duration;
uint32_t played;

const int charLimit = 21;

// Variables for Audio data
I2SStream i2s;
BluetoothA2DPSink a2dp_sink(i2s);
A2DPDefaultVolumeControl VolC;
AudioInfo info(48000, 2, 32);
uint8_t volume;

esp_avrc_playback_stat_t Playing;
bool isPlaying;

// IR commands
uint32_t irCode;

#define IR_CMD_PLAY_PAUSE 0x44
#define IR_CMD_VOLUME_UP 0x9
#define IR_CMD_VOLUME_DOWN 0x15
#define IR_CMD_VOLUME_MUTE 0x47
#define IR_CMD_FORWARD 0x43
#define IR_CMD_BACKWARD 0x40
#define IR_CMD_POWER 0x45

#endif // VARIABLES_H