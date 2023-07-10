// C++ code
//
void setup()
{
pinMode(12,INPUT); 
pinMode(8,OUTPUT );
}

void loop()
{
 if(digitalRead(12)==1){
    digitalWrite(8,1);
    }
else {digitalWrite(8,0);}    
}