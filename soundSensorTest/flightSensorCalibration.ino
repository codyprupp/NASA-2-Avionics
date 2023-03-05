// #include "GY521.h"

// GY521 flightSensor(0x68);

// float gx, gy, gz;

// void setup() {
//     Serial.begin(115200);
//     Wire.begin();

//     while (!flightSensor.wakeup()) {
//         Serial.println("couldn't connect");
//         delay(1000);
//     }

//     Serial.println("starting");
//     Serial.println("_____________");
// }

// void loop() {
//     gx = gy = gz = 0;
//     for (int i = 0; i < 20; i++) {
//         flightSensor.read();
//         gx -= flightSensor.getGyroX();
//         gy -= flightSensor.getGyroY();
//         gz -= flightSensor.getGyroZ();
//     }

//     flightSensor.gxe += gx * 0.05;
//     Serial.println("gxe: " + String(flightSensor.gxe));
//     Serial.println("gye: " + String(flightSensor.gye));
//     Serial.println("gze: " + String(flightSensor.gze));
//     flightSensor.gye += gy * 0.05;
//     flightSensor.gze += gz * 0.05;
//     delay(100);
// }