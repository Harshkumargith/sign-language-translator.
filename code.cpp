// #include <Wire.h>
// #include <LiquidCrystal_I2C.h>

// // LCD address can be 0x27 or 0x3F depending on module
// LiquidCrystal_I2C lcd(0x27, 16, 2); 

// #define BUZZER 3

// void setup() {
//   Serial.begin(9600);

//   lcd.init();
//   lcd.backlight();
//   lcd.setCursor(0, 0);
//   lcd.print("SIGN LANGUAGE");

//   pinMode(13, OUTPUT);
//   pinMode(BUZZER, OUTPUT);
// }

// void loop() {
//   int s1 = analogRead(A0); // Washroom
//   int s2 = analogRead(A1); // Drink Water
//   int s3 = analogRead(A2); // Food
//   int s4 = analogRead(A3); // Fruit

//   Serial.print("Washroom: ");
//   Serial.print(s1);
//   Serial.print("\tDrink Water: ");
//   Serial.print(s2);
//   Serial.print("\tFood: ");
//   Serial.print(s3);
//   Serial.print("\tFruit: ");
//   Serial.println(s4);

//   lcd.setCursor(0, 1);

//   if (s1 < 306) {
//     digitalWrite(13, LOW);
//     Serial.println("Washroom");
//     lcd.print("   WASHROOM   ");
//     tone(BUZZER, 1000);
//     delay(2000);
//     noTone(BUZZER);
//   } else if (s2 < 345) {
//     digitalWrite(13, HIGH);
//     Serial.println("Drink Water");
//     lcd.print(" DRINK WATER  ");
//     tone(BUZZER, 1000);
//     delay(2000);
//     noTone(BUZZER);
//   } else if (s3 < 278) {
//     digitalWrite(13, LOW);
//     Serial.println("Food");
//     lcd.print("     FOOD     ");
//     tone(BUZZER, 1000);
//     delay(2000);
//     noTone(BUZZER);
//   } else if (s4 < 306) {
//     digitalWrite(13, HIGH);
//     Serial.println("Fruit");
//     lcd.print("     FRUIT    ");
//     tone(BUZZER, 1000);
//     delay(2000);
//     noTone(BUZZER);
//   } else {
//     lcd.print("    NOTHING    ");
//   }

//   delay(500);
// }
