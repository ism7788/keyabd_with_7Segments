#include <Keypad.h>
const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns
char keys[ROWS][COLS] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'}
};
byte rowPins[ROWS] = {9, 10, 11, 12}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {A0, A1, A2}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
int digits[16][7] =
{ {1, 1, 1, 1, 1, 1, 0}, //digit 0
  {0, 1, 1, 0, 0, 0, 0}, //digit 1
  {1, 1, 0, 1, 1, 0, 1}, //digit 2
  {1, 1, 1, 1, 0, 0, 1}, //digit 3
  {0, 1, 1, 0, 0, 1, 1}, //digit 4
  {1, 0, 1, 1, 0, 1, 1}, //digit 5
  {1, 0, 1, 1, 1, 1, 1}, //digit 6
  {1, 1, 1, 0, 0, 0, 0}, //digit 7
  {1, 1, 1, 1, 1, 1, 1}, //digit 8
  {1, 1, 1, 1, 0, 1, 1}, //digit 9
  {1, 1, 1, 0, 1, 1, 1}, //A
  {0, 0, 1, 1, 1, 1, 1}, //B
  {1, 0, 0, 1, 1, 1, 0}, //c
  {0, 1, 1, 1, 1, 0, 1}, //d
  {1, 0, 0, 1, 1, 1, 1}, //E
  {1, 0, 0, 0, 1, 1, 1}  //f
};

int i = 0;
int j = 0;
int k;

void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  Serial.begin(9600);
  Serial.print(not(HIGH));
  for (i = 2; i < 9; i++)

    pinMode(i, OUTPUT);

}

void loop() {
  char key = keypad.getKey();

  if (key == '1') {

    Serial.println(key);
    Serial.println("hello");
    for (i = 2; i < 9; i++)
    {
      digitalWrite(i, not(digits[1][i - 2]));
    }
    delay(1000);
  }
  else if (key == '2') {

    Serial.println(key);
    Serial.println("hello two");
    for (i = 2; i < 9; i++)
    {
      digitalWrite(i, not(digits[2][i - 2]));
    }
    delay(1000);
  }
  else if (key == '3') {

    Serial.println(key);
    Serial.println("hello Three");
    for (i = 2; i < 9; i++)
    {
      digitalWrite(i, not(digits[3][i - 2]));
    }  delay(1000);
  }
  else if (key == '4') {

    Serial.println(key);
    Serial.println("hello 4");
    for (i = 2; i < 9; i++)
    {
      digitalWrite(i, not(digits[4][i - 2]));
    }  delay(1000);
  }
  else if (key == '5') {

    Serial.println(key);
    Serial.println("hello");
    for (i = 2; i < 9; i++)
    {
      digitalWrite(i, not(digits[5][i - 2]));
    }  delay(1000);
  }
  else if (key == '6') {

    Serial.println(key);
    Serial.println("hello two");
    for (i = 2; i < 9; i++)
    {
      digitalWrite(i, not(digits[6][i - 2]));
    }  delay(1000);
  }
  else if (key == '7') {

    Serial.println(key);
    Serial.println("hello");
    for (i = 2; i < 9; i++)
    {
      digitalWrite(i, not(digits[7][i - 2]));
    }  delay(1000);
  }
  else if (key == '8') {

    Serial.println(key);
    Serial.println("hello two");
    for (i = 2; i < 9; i++)
    {
      digitalWrite(i, not(digits[8][i - 2]));
    }  delay(1000);
  }
  else if (key == '9') {


    Serial.println(key);
    Serial.println("hello");
    for (i = 2; i < 9; i++)
    {
      digitalWrite(i, not(digits[9][i - 2]));
    }  delay(1000);
  }
  else
    for (i = 2; i < 9; i++)
      digitalWrite(i, 1);

}
