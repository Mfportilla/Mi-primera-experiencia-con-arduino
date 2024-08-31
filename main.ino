#include <Esplora.h>

void setup() {
  // Inicializa la comunicación serie
  Serial.begin(9600);
}

void loop() {
  // Lee la posición del joystick en el eje X e Y
  int xValue = Esplora.readJoystickX();
  int yValue = Esplora.readJoystickY();

  // Muestra los valores en el monitor serial
  Serial.print("X: ");
  Serial.print(xValue);
  Serial.print("\tY: ");
  Serial.println(yValue);

  // Espera un poco antes de la siguiente lectura
  delay(100);
}
