/***************************************************
* Showing capured data at LCD
****************************************************/
void showDataLCD(void)
{
  lcd.clear();
  lcd.setCursor (0,0);
  lcd.print("R");
  lcd.setCursor (1,0);
  lcd.print("    ");
  lcd.setCursor (1,0);
  lcd.print(red);
  lcd.setCursor (5,0);
  lcd.print(" G");
  lcd.setCursor (7,0);
  lcd.print("    ");
  lcd.setCursor (7,0);
  lcd.print(grn);
  lcd.setCursor (12,0);
  lcd.print("B");
  lcd.setCursor (13,0);
  lcd.print("    ");
  lcd.setCursor (13,0);
  lcd.print(blu);
  
  lcd.setCursor (0,1);
  lcd.print("Color: ");
  lcd.setCursor (7,1); 
  lcd.print("        ");
  lcd.setCursor (7,1);  
  lcd.print(color);
  
}

/***************************************************
* Showing captured data at Serial Monitor
****************************************************/
void printData(void)
{
  Serial.print("red= ");
  Serial.print(red);
  Serial.print("   green= ");
  Serial.print(grn);
  Serial.print("   blue= ");
  Serial.print(blu);
  Serial.print (" - ");
  Serial.print (color);
  Serial.println (" detected!");
}

