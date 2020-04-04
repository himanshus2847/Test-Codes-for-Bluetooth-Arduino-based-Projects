void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  if(Serial.available() == 1)   //if communication is going on
  {
    String val = Serial.readString();   //Read the data recieved
    Serial.print("Message from Phone: ");
    Serial.println(val); //print the data on Serial Monitor
  }
}
