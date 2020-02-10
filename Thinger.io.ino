#include <ThingerESP8266.h>

#define USERNAME "imtyagi96"
#define DEVICE_ID "lalita86"
#define DEVICE_CREDENTIAL "VFYI8x1yF7E9"

#define SSID "IoT"
#define SSID_PASSWORD "iot1703706"

ThingerESP8266 thing(USERNAME, DEVICE_ID, DEVICE_CREDENTIAL);

void setup() {
 
  pinMode(D0, OUTPUT);
  Serial.begin(9600);
  thing.add_wifi(SSID, SSID_PASSWORD);
  thing["led"] << digitalPin(D0);

  
}

void loop() {
  thing.handle();
}
