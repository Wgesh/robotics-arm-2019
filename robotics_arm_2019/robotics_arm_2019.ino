int led = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}

void swivelControl() {
  // control the motor that is attatched to the base
}

void arm1Control() {
  // control the TWO motors that are at the base of the arm
}

void arm2Control() {
  // control the motor attached to the middle of the arm
}

void clawControl() {
  /////////////////////// maybe not this one??
  // control the motor that angles the claw, between the arm and claw
}

void clawGrabControl() {
  // control the motor that opens and closes the claw
}
