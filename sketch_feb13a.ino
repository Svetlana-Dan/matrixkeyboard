#define led_pin3 3
#define led_pin4 4
#define led_pin5 5
#define led_pin6 6









int val1;
int val2;
int val3;
int val4;
String result;

void setup() {
  Serial.begin(9600);
  pinMode(led_pin3, INPUT);
  pinMode(led_pin4, INPUT);
  pinMode(led_pin5, OUTPUT);
  pinMode(led_pin6, OUTPUT);

}

void loop() {
  val1 = 0;
  val2 = 0;
  val3 = 0;
  val4 = 0;
  result = "";
  pinMode(led_pin6, INPUT);
  pinMode(led_pin5, OUTPUT);
  digitalWrite(led_pin5, HIGH);
  if (digitalRead(led_pin3) == 1 && digitalRead(led_pin4) == 0){
    result += "1";
  }
  if (digitalRead(led_pin4) == 1 && digitalRead(led_pin3) == 0){
    result += "2";
  }
  digitalWrite(led_pin5, LOW);
  pinMode(led_pin5, INPUT);  
  pinMode(led_pin6, OUTPUT);
  digitalWrite(led_pin6, HIGH);
  if (digitalRead(led_pin3) == 1 && digitalRead(led_pin4) == 0)
  {
    result += "3";
  }
  if (digitalRead(led_pin4) == 1 && digitalRead(led_pin3) == 0)
  {
    result += "4";
  }
  if (digitalRead(led_pin4) == 1 && digitalRead(led_pin3) == 1)
  { 
    result += "34";
  }  
  if (result != ""){
    Serial.println(result);
  }
  digitalWrite(led_pin6, LOW);
  delay(300);
}
