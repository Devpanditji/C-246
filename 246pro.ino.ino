const byte led_gpio =32;
int brightness =0;
int fadeAmount =5;

void setup(){
  ledcAttachpin(led_gpio, 0);
  ledcSetup(0, 4000,8);

}

void loop(){
  ledCwrite(0,brightness);
  brightness = brightness + fadeAmount;

  if (brightness <=0 || brightness >= 255){
    fadeAmount = -fadeAmount;
  }
  delay(30);
}