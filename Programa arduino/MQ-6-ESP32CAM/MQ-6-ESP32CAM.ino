/*Fecha:1 de diciembre del 2021
 * Author: Skovks
 * 
 * Este programa realiza una lectura simple de un pin analogico en el ESP32CAM.
 * Este programa esta orientado a realizar la lectura del sensor MQ-6
 * 
 * ESP32CAM      MQ-6
 * 3.3           VCC
 * GND           GND 
 * GPIO12        A0
 * 
 */
//bibliotecas

//constantes
int sensor = 12;

//variable

//configuracion del programa
void setup() {
  // Codigo
  Serial.begin(115200); //Inicia la comunicacion serial
  Serial.println("Programa iniciado");//mensaje de prueba
  delay(1000);//espera estandar
}

void loop() {
  // Codigo
  int dato = analogRead(sensor);//lectura del sensor
  //Serial.print("El valor del sensor es:");
  Serial.println(dato); //se imprimen los datos
  delay(1000);//espera estandar
}
