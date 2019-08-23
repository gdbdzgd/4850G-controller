
// This is the command sequence that initialises the HX8357D driver
//
// This setup information uses simple 8 bit SPI writecommand() and writedata() functions
//
// See ST7735_Setup.h file for an alternative format


// Configure HX8369A display
               writeCmd(0xB9);  // SET password 
                writeData(0xFF);   
                writeData(0x83);   
                writeData(0x69);   
            
                                        
                writeCmd(0xB1);  //Set Power 
                writeData(0x01);                           
                writeData(0x00);                           
                writeData(0x34);                           
                writeData(0x06);                           
                writeData(0x00);                           
                writeData(0x11);                           
                writeData(0x11);                           
                writeData(0x27);                           
                writeData(0x32);                           
                writeData(0x3F);                           
                writeData(0x3F);                           
                writeData(0x07);                           
                writeData(0x23);                           
                writeData(0x01);                           
                writeData(0xE6);                           
                writeData(0xE6);                           
                writeData(0xE6);                           
                writeData(0xE6);                           
                writeData(0xE6);                           
                                                    

                writeCmd(0xB2);     // Set display related parameters
                writeData(0x00);   
                writeData(0x2B);    //set 480RGBx800, RGB mode, bypass GRAM mode
                writeData(0x03);    //VBP[7:0] = 5 lines 
                writeData(0x03);    //VFP[7:0] = 5 lines
                writeData(0x70);   
                writeData(0x00);   
                writeData(0xFF);   
                writeData(0x00);   
                writeData(0x00);   
                writeData(0x00);   
                writeData(0x00);   
                writeData(0x03);   
                writeData(0x03);   
                writeData(0x00);   
                writeData(0x01);   

                writeCmd(0xB4);  // SET Display waveform cycle
                writeData(0x00);   
                writeData(0x0C);   
                writeData(0xA0); 
                writeData(0x0E);   
                writeData(0x06);   

                writeCmd(0xB6);  // SET VCOM 
                writeData(0x0d);
                writeData(0x0d);   

                writeCmd(0xD5);   
                writeData(0x00);   
                writeData(0x05);   
                writeData(0x03);   
                writeData(0x00);   
                writeData(0x01);   
                writeData(0x09);   
                writeData(0x10);   
                writeData(0x80);   
                writeData(0x37);   
                writeData(0x37);   
                writeData(0x20);   
                writeData(0x31);   
                writeData(0x46);   
                writeData(0x8A);   
                writeData(0x57);   
                writeData(0x9B);   
                writeData(0x20);   
                writeData(0x31);   
                writeData(0x46);   
                writeData(0x8A);   
                writeData(0x57);   
                writeData(0x9B);   
                writeData(0x07);   
                writeData(0x0F);   
                writeData(0x02);   
                writeData(0x00);   

                writeCmd(0xE0); 
                writeData(0x00); 
                writeData(0x08); 
                writeData(0x0D); 
                writeData(0x2D); 
                writeData(0x34); 
                writeData(0x3F); 
                writeData(0x19); 
                writeData(0x38); 
                writeData(0x09); 
                writeData(0x0E); 
                writeData(0x0E); 
                writeData(0x12); 
                writeData(0x14); 
                writeData(0x12); 
                writeData(0x14); 
                writeData(0x13); 
                writeData(0x19); 
                writeData(0x00); 
                writeData(0x08); 
                writeData(0x0D); 
                writeData(0x2D); 
                writeData(0x34); 
                writeData(0x3F); 
                writeData(0x19); 
                writeData(0x38); 
                writeData(0x09); 
                writeData(0x0E); 
                writeData(0x0E); 
                writeData(0x12); 
                writeData(0x14); 
                writeData(0x12); 
                writeData(0x14); 
                writeData(0x13); 
                writeData(0x19); 
                     
                //set DGC 
                writeCmd(0xC1); 
                writeData(0x01); //enable DGC function 
                writeData(0x02); //SET R-GAMMA 
                writeData(0x08); 
                writeData(0x12); 
                writeData(0x1A); 
                writeData(0x22); 
                writeData(0x2A); 
                writeData(0x31); 
                writeData(0x36); 
                writeData(0x3F); 
                writeData(0x48); 
                writeData(0x51); 
                writeData(0x58); 
                writeData(0x60); 
                writeData(0x68); 
                writeData(0x70); 
                writeData(0x78); 
                writeData(0x80); 
                writeData(0x88); 
                writeData(0x90); 
                writeData(0x98); 
                writeData(0xA0); 
                writeData(0xA7); 
                writeData(0xAF); 
                writeData(0xB6); 
                writeData(0xBE); 
                writeData(0xC7); 
                writeData(0xCE); 
                writeData(0xD6); 
                writeData(0xDE); 
                writeData(0xE6); 
                writeData(0xEF); 
                writeData(0xF5); 
                writeData(0xFB); 
                writeData(0xFC); 
                writeData(0xFE); 
                writeData(0x8C); 
                writeData(0xA4); 
                writeData(0x19); 
                writeData(0xEC); 
                writeData(0x1B); 
                writeData(0x4C); 
                writeData(0x40);   
                
                writeData(0x02); //SET G-Gamma 
                writeData(0x08); 
                writeData(0x12); 
                writeData(0x1A); 
                writeData(0x22); 
                writeData(0x2A); 
                writeData(0x31); 
                writeData(0x36); 
                writeData(0x3F); 
                writeData(0x48); 
                writeData(0x51); 
                writeData(0x58); 
                writeData(0x60); 
                writeData(0x68); 
                writeData(0x70); 
                writeData(0x78); 
                writeData(0x80); 
                writeData(0x88); 
                writeData(0x90); 
                writeData(0x98); 
                writeData(0xA0); 
                writeData(0xA7); 
                writeData(0xAF); 
                writeData(0xB6); 
                writeData(0xBE); 
                writeData(0xC7); 
                writeData(0xCE); 
                writeData(0xD6); 
                writeData(0xDE); 
                writeData(0xE6); 
                writeData(0xEF); 
                writeData(0xF5); 
                writeData(0xFB); 
                writeData(0xFC); 
                writeData(0xFE); 
                writeData(0x8C); 
                writeData(0xA4); 
                writeData(0x19); 
                writeData(0xEC); 
                writeData(0x1B); 
                writeData(0x4C); 
                writeData(0x40); 
                
                writeData(0x02); //SET B-Gamma 
                writeData(0x08); 
                writeData(0x12); 
                writeData(0x1A); 
                writeData(0x22); 
                writeData(0x2A); 
                writeData(0x31); 
                writeData(0x36); 
                writeData(0x3F); 
                writeData(0x48); 
                writeData(0x51); 
                writeData(0x58); 
                writeData(0x60); 
                writeData(0x68); 
                writeData(0x70); 
                writeData(0x78); 
                writeData(0x80); 
                writeData(0x88); 
                writeData(0x90); 
                writeData(0x98); 
                writeData(0xA0); 
                writeData(0xA7); 
                writeData(0xAF); 
                writeData(0xB6); 
                writeData(0xBE); 
                writeData(0xC7); 
                writeData(0xCE); 
                writeData(0xD6); 
                writeData(0xDE); 
                writeData(0xE6); 
                writeData(0xEF); 
                writeData(0xF5); 
                writeData(0xFB); 
                writeData(0xFC); 
                writeData(0xFE); 
                writeData(0x8C); 
                writeData(0xA4); 
                writeData(0x19); 
                writeData(0xEC); 
                writeData(0x1B); 
                writeData(0x4C); 
                writeData(0x40); 

                writeCmd(0x3A);   //set pixel format
                writeData(0x77);  //24BIT RGB 
                    
                writeCmd(0x11);   
                delay(120); 

                writeCmd(0x29);    //sleep out        
