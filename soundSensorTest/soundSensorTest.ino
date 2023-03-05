#include "GY521.h"

#define SENSOR_PIN A0
#define GY521_DATA SDA
#define GY521_CLK SCL

GY521 flightSensor(0x68);

void setup() {
    // pinMode(SENSOR_PIN, INPUT);
    Wire.begin();
    delay(100);
    while (!flightSensor.wakeup()) {
        Serial.println("Could not connect to GY521");
        delay(1000);
    }

    Serial.begin(115200);
    flightSensor.setGyroSensitivity(2);
    Serial.println("starting");
    flightSensor.gxe = 0.11;
    flightSensor.gye = -0.02;
    flightSensor.gze = 0.07;
}

void loop() {
    // flightSensor.gxe = flightSensor.gye = flightSensor.gze = 0;
    // int sensorValue = analogRead(SENSOR_PIN);
    flightSensor.read();
    float roll = flightSensor.getRoll();
    // Serial.println("Sensor Value: " + String(sensorValue));
    Serial.println("Roll value: " + String(roll));
    // Serial.println(flightSensor.wakeup());
}

