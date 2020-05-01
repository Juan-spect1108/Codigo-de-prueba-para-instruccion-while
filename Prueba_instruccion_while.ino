// Made by: Juan Rodrigo Guzman Martinez

int LED=13; // Declaramos el pin 13 con el nombre de LED
int SENSOR=2;  // Declaramos el pin 2 con el nombre de SENSOR
int ESTADO; // Declaramos una variable entera llamada ESTADO

void setup() {
pinMode(LED, OUTPUT); // Declaramos el pin llamado LED como salida
pinMode(SENSOR, INPUT); // Declaramos el pin llamado SENSOR como entrada

}

void loop() {

// Inicializmos el sensor en el ciclo while y ponemos la condicion 
while(digitalRead(SENSOR)!=HIGH){ 
digitalWrite(LED, HIGH); // Si nuestro estado es alto o es 1 el LED encendera
}
digitalWrite(LED, LOW); // Si no se cumple la condicion el LED estara apagado
}
