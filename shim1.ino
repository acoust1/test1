
byte n=0;
void setup() {
  pinMode(3, OUTPUT);   // D3 как выход
  Serial.begin(9600);
}
void loop() {
  // ШИМ на 3 пин, 1023/4 = 255 - перевели диапазон
  
  n++;
  if(n>=255)n=0;
  analogWrite(3, n);
  Serial.println(n);
  delay(100);
}
