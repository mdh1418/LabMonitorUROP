#include <WiFi.h>
#include <PubSubClient.h>

const char* ssid = "EECS-ConfRooms";
const char* password = "";
const char* mqttServer = "m14.cloudmqtt.com";
const int mqttPort = 10247;
const char* mqttUser = "vgocvszf";
const char* mqttPassword = "oqZodFHab_cp";

WiFiClient espClient;
PubSubClient client(espClient);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  WiFi.disconnect();
  WiFi.begin(ssid, password);

  while(WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.println("Connecting to WiFi...");
  }

  Serial.println("Connected to the WiFi network");

  client.setServer(mqttServer, mqttPort);

  while (!client.connected()){
    Serial.println("Connecting to MQTT...");

    if (client.connect("ESP32Client", mqttUser, mqttPassword)){

      Serial.println("connected");

    } else{
      Serial.print("failed with state ");
      Serial.print(client.state());
      delay(2000);
    }
  }

  client.publish("esp/test", "Hello from ESP32");
}

void loop() {
  // put your main code here, to run repeatedly:
  client.loop();
}
