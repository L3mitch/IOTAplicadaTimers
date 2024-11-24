#include <Arduino.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "freertos/timers.h"

#define LED_PIN 2

TaskHandle_t taskHandle;
TimerHandle_t timerHandle;


// put function declarations here:

void setup() {
  // put your setup code here, to run once:


  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  // put your main code here, to run repeatedly:
}