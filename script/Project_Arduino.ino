#include "DigiKeyboard.h"

/**
 * Disable Windows Defender
 */

void setup(){
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("echo Hacked");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
void loop() {
  //empty
  }
