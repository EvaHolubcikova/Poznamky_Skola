  #include <Adafruit_SSD1306.h>
  #include "DHT.h"
  
  #define DHTPIN 5
  #define DHTTYPE DHT11 
  
  #define SCREEN_WIDTH 128 // OLED display width, in pixels
  #define SCREEN_HEIGHT 64 // OLED display height, in pixels
  
  
  #define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
  #define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32 <--- opačne
  Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
//Adafruit_SSD1306 display = Adafruit_SSD1306(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1); //inštancia objektu triedy(Adafruit_SSD1306)


DHT dht(DHTPIN, DHTTYPE); //deklaracia- tento riadok vytvara objekt(instanciu) na zaklade triedy

void setup() { //funkcia setup- vykonava kod, ktory sa vykona len po spusteni
  Serial.begin(115200);
  Serial.println(F("DHTxx test!"));

  dht.begin();
}

                                                                                     
void setup() {
  Serial.begin(9600);
  Wire.begin(14,12);

  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {                        //prostrednictom . volame metody
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }

  // Show initial display buffer contents on the screen --
  // the library initializes this with an Adafruit splash screen.
  display.display();                                                                //metoda display vola inštanciu(display), zobere prikaz z pamati a rozsvieti displej
  delay(2000); // Pause for 2 seconds

  }
  

void loop() {
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
  for (int i = 0; i < 20; i++)
  {
    display.setCursor(0, 0);
    display.print("Ahoj");
    display.print(i+1);
    delay(1000);
    display.display();
    display.clearDisplay(); 
    }
  display.display(); 
}
