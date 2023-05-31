int blue_1=13;
int blue_2=4;

int jaune_1=12;
int jaune_2=3;

int vert_1=11;
int vert_2=2;

void setup() {
  // put your setup code here, to run once:
  pinMode(blue_1,OUTPUT);
  pinMode(blue_2,OUTPUT);

  pinMode(jaune_1,OUTPUT);
  pinMode(jaune_2,OUTPUT);

  pinMode(vert_1,OUTPUT);
  pinMode(vert_2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(jaune_1,0);
digitalWrite(blue_2,0);
digitalWrite(blue_1,1);
digitalWrite(vert_2,1);

delay(5000);

digitalWrite(vert_2,0);
digitalWrite(jaune_2,1);

delay(1000);

digitalWrite(jaune_2,0);
digitalWrite(blue_2,1);
digitalWrite(vert_1,1);
digitalWrite(blue_1,0);

delay(5000);

digitalWrite(blue_2,1);
digitalWrite(vert_1,0);
digitalWrite(jaune_1,1);

delay(1000);


}
