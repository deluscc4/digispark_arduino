# Digispark

## Programmable circuit board. Acting as a keyboard, and therefore, undetectable by antivirus. Physical attacks are the most effective and dangerous. Human Interface Device (HID) attacks are made to compromise a client, you just need to insert a preprogrammed USB stick that is read as an HID, in this case a keyboard that will type and execute the payload.

### Setting up:
1. IDE download: https://www.arduino.cc/en/software
2. File > Preferences > Put the URL below for the Digispark configuration: https://raw.githubusercontent.com/digistump/arduino-boards-index/master/package_digistump_index.json
3. Tools > Board > Boards Manager > Search for "Digispark" > Select "Digistump AVR Boards"
4. Tools > Board > Digistump AVR Boards > Default
5. Digispark drivers: https://github.com/digistump/DigistumpArduino/releases/download/1.6.7/Digistump.Drivers.zip 
6. Extract it > Install DPinst64.exe

**Note**: <br>
PT-BR keyboard: https://raw.githubusercontent.com/Al0nnso/PendriveHacker-Scripts/main/DigiKeyboardPtBr.h <br>
Save it as into your code folder and in your code use: <br>
``#include "DigiKeyboardPtBr.h"`` instead of ``#include "DigiKeyboard.h"``, and for the codes: <br>
``DigiKeyboardPtBr.sendKeyStroke(KEY_R);`` instead of ``DigiKeyboard.sendKeyStroke(KEY_R);`` for instance, and so on.


### CMD and Powershell Commands

``dir`` => Listing directories <br>
``cd`` => Changing directory <br>
``mkdir`` => Making a new directory <br>
``echo <message>`` => Printing message <br>
``echo <message> > <archive_name>.txt`` => Creating an archive.txt with the given message <br>
``type <archive_name>.txt`` => Reading a file <br>
``del <archive_name>.txt`` => Deleting an archive <br>
``shutdown`` => Turning off the PC and ``shutdown ?/`` => Listing all possible shutdown commands



