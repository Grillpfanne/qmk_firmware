/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define USB_SUSPEND_WAKEUP_DELAY 0
#define FIRMWARE_VERSION u8"o5o5P/WB3pl"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define LAYER_STATE_8BIT

#define RGB_MATRIX_STARTUP_SPD 60

// mvmt layer
#define TRI_LAYER_LOWER_LAYER 2
// symbol layer
#define TRI_LAYER_UPPER_LAYER 1
// functin layer
#define TRI_LAYER_ADJUST_LAYER 5
