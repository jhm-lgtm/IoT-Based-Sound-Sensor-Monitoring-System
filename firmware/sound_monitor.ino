#include <ESP8266WiFi.h>
#include <WiFiClientSecure.h>
#include <UniversalTelegramBot.h>

// ================= WIFI =================
const char* ssid = "jiya_maru";
const char* password = "jiya_maru";

// ================= TELEGRAM =================
#define BOT_TOKEN "8936796429:AAFVPN62HnfIOM45SqWufNynnGwhXfE1gJg"
#define CHAT_ID "5270423658"

// ================= SOUND SENSOR =================
#define SOUND_PIN D5

WiFiClientSecure client;
UniversalTelegramBot bot(BOT_TOKEN, client);

bool soundDetected = false;
unsigned long lastMessageTime = 0;

// delay between alerts
const unsigned long alertDelay = 15000; // 15 sec

void setup() {
  Serial.begin(115200);

  pinMode(SOUND_PIN, INPUT);

  // WiFi connect
  WiFi.begin(ssid, password);

  Serial.println();
  Serial.print("Connecting WiFi");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("WiFi Connected");

  client.setInsecure();

  bot.sendMessage(CHAT_ID, "🚀 Baby Alert System Started", "");

  Serial.println("Telegram Connected");
}

void loop() {

  int soundValue = digitalRead(SOUND_PIN);

  Serial.print("Sound Value: ");
  Serial.println(soundValue);

  // LOW means sound detected on most modules
  if (soundValue == LOW) {

    if (!soundDetected &&
        millis() - lastMessageTime > alertDelay) {

      Serial.println("🚨 Crying/Sound Detected!");

      bot.sendMessage(CHAT_ID,
                      "🚨 Baby Crying / Sound Detected!",
                      "");

      soundDetected = true;
      lastMessageTime = millis();
    }

  } else {

    soundDetected = false;
  }

  delay(200);
}
