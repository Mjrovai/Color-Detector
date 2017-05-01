
/* Based on RGB components ==> Determine color */
void getColor()
{  
  readRGB();
  
        if (red > 8 && red < 18 && grn > 9 && grn < 19 && blu > 8 && blu < 16) color = "WHITE";
  else if (red > 80 && red < 125 && grn > 90 && grn < 125 && blu > 80 && blu < 125) color = "BLACK";
  else if (red > 12 && red < 30 && grn > 40 && grn < 70 && blu > 33 && blu < 70) color = "RED";
  else if (red > 50 && red < 95 && grn > 35 && grn < 70 && blu > 45 && blu < 85) color = "GREEN";
  else if (red > 10 && red < 20 && grn > 10 && grn < 25 && blu > 20 && blu < 38) color = "YELLOW";
  else if (red > 65 && red < 125 && grn > 65 && grn < 115 && blu > 32 && blu < 65) color = "BLUE";
  else  color = "NO_COLOR";
}

/* read RGB components */
void readRGB() 
{
  red = 0;
  grn = 0;
  blu = 0;
  int n = 10;
  for (int i = 0; i < n; ++i)
  {
    //read red component
    digitalWrite(s2, LOW);
    digitalWrite(s3, LOW);
    red = red + pulseIn(outPin, LOW);
  
   //read green component
    digitalWrite(s2, HIGH);
    digitalWrite(s3, HIGH);
    grn = grn + pulseIn(outPin, LOW);
    
   //let's read blue component
    digitalWrite(s2, LOW);
    digitalWrite(s3, HIGH);
    blu = blu + pulseIn(outPin, LOW);
  }
  red = red/n;
  grn = grn/n;
  blu = blu/n;
}




