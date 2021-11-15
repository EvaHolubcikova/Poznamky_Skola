
#include <Adafruit_SSD1306.h>
#include "DHT.h"

#define DHTPIN 5
#define DHTTYPE DHT11 

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels


#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32 <--- opačne
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
DHT dht(DHTPIN, DHTTYPE); //deklaracia- tento riadok vytvara objekt(instanciu) na zaklade triedy

void setup() { //funkcia setup- vykonava kod, ktory sa vykona len po spusteni
  Serial.begin(115200);
  Serial.println(F("DHTxx test!"));

  dht.begin();

  Serial.begin(9600);
  Wire.begin(14,12);
  

   if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {                        //prostrednictom . volame metody
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }

  display.display();                                                                //metoda display vola inštanciu(display), zobere prikaz z pamati a rozsvieti displej
  delay(2000); // Pause for 2 seconds
}

void loop() {
   delay(2000); //interval medzi jednotlivymi meraniamimi

   float h = dht.readHumidity();              
   float t = dht.readTemperature();

  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t)) {
    display.println(F("Failed to read from DHT sensor!"));
    return;
  }
  display.clearDisplay();
  display.display();
  display.setCursor(0, 0);
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.print(F("Vlhkost: "));  //vypis vlhkost
  display.print(h);                //hodnota vlhkosti
  display.setCursor(0, 10);
  display.print(F("%  Teplota: "));      //teplota
  display.print(t);                    //hodnota teploty
  display.print(F("°C "));  
  display.display();

//dorobit posuvanie !!!
 
}
