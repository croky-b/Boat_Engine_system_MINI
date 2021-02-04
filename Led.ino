// =======================================================================================================
// LED
// =======================================================================================================

void led() {

   if(Seq1LedPart1OnOff){
               #ifdef SEQ1_LED_PART1_1
                Led1.on();
                #endif
                #ifdef SEQ1_LED_PART1_2
                Led2.on();
                #endif
                #ifdef SEQ1_LED_PART1_3
                Led3.On();
                #endif
                #ifdef SEQ1_LED_PART1_4
                Led4.on();
                #endif
                #ifdef SEQ1_LED_PART1_5
                Led5.On();
                #endif
               
                #ifdef SEQ1_FLASH_PART1_1
                Led1.flash(ONTIME_SEQ1_PART1,ONTIME_SEQ1_PART1,0,0,0);
                #endif
                #ifdef SEQ1_FLASH_PART1_2
                Led2.flash(ONTIME_SEQ1_PART1,ONTIME_SEQ1_PART1,0,0,0);
                #endif
                #ifdef SEQ1_FLASH_PART1_3
                Led3.flash(ONTIME_SEQ1_PART1,ONTIME_SEQ1_PART1,0,0,0);
                #endif
                #ifdef SEQ1_FLASH_PART1_4
                Led4.flash(ONTIME_SEQ1_PART1,ONTIME_SEQ1_PART1,0,0,0);
                #endif
                #ifdef SEQ1_FLASH_PART1_5
                Led5.flash(ONTIME_SEQ1_PART1,ONTIME_SEQ1_PART1,0,0,0);
                #endif
               
  }
  else if (!Seq1LedPart1OnOff && !Seq2LedPart1OnOff)  {
                #ifdef SEQ1_LED_PART1_1
                Led1.off();
                #endif
                #ifdef SEQ1_LED_PART1_2
                Led2.off();
                #endif
                #ifdef SEQ1_LED_PART1_3
                Led3.off();
                #endif
                #ifdef SEQ1_LED_PART1_4
                Led4.off();
                #endif
                #ifdef SEQ1_LED_PART1_5
                Led5.off();
                #endif

                #ifdef SEQ1_FLASH_PART1_1
                Led1.off();
                #endif
                #ifdef SEQ1_FLASH_PART1_2
                Led2.off();
                #endif
                #ifdef SEQ1_FLASH_PART1_3
                Led3.off();
                #endif
                #ifdef SEQ1_FLASH_PART1_4
                Led4.off();
                #endif
                #ifdef SEQ1_FLASH_PART1_5
                Led5.off();
                #endif
               
  }


    if(Seq1LedPart2OnOff){
                #ifdef SEQ1_LED_PART2_1
                 Led1.on();
                #endif
                #ifdef SEQ1_LED_PART2_2
                 Led2.on();
                #endif
                #ifdef SEQ1_LED_PART2_3
                 Led3.on();
                #endif
                #ifdef SEQ1_LED_PART2_4
                 Led4.on();
                #endif
                #ifdef SEQ1_LED_PART2_5
                 Led5.on();
                #endif
               
                #ifdef SEQ1_FLASH_PART2_1
                Led1.flash( ONTIME_SEQ1_PART2,OFFTIME_SEQ1_PART2,0,0,0);
                #endif
                #ifdef SEQ1_FLASH_PART2_2
                Led2.flash( ONTIME_SEQ1_PART2,OFFTIME_SEQ1_PART2,0,0,0);
                #endif
                #ifdef SEQ1_FLASH_PART2_3
                Led3.flash( ONTIME_SEQ1_PART2,OFFTIME_SEQ1_PART2,0,0,0);
                #endif
                #ifdef SEQ1_FLASH_PART2_4
                Led4.flash( ONTIME_SEQ1_PART2,OFFTIME_SEQ1_PART2,0,0,0);
                #endif
                #ifdef SEQ1_FLASH_PART2_5
                Led5.flash( ONTIME_SEQ1_PART2,OFFTIME_SEQ1_PART2,0,0,0);
                #endif
                
  }
  else if (!Seq1LedPart2OnOff && !Seq2LedPart2OnOff)  {
    #ifdef SEQ1_LED_PART2_1
                 Led1.off();
                #endif
                #ifdef SEQ1_LED_PART2_2
                 Led2.off();
                #endif
                #ifdef SEQ1_LED_PART2_3
                 Led3.off();
                #endif
                #ifdef SEQ1_LED_PART2_4
                 Led4.off();
                #endif
                #ifdef SEQ1_LED_PART2_5
                 Led5.off();
                #endif

                #ifdef SEQ1_FLASH_PART2_1
                 Led1.off();
                #endif
                #ifdef SEQ1_FLASH_PART2_2
                 Led2.off();
                #endif
                #ifdef SEQ1_FLASH_PART2_3
                 Led3.off();
                #endif
                #ifdef SEQ1_FLASH_PART2_4
                 Led4.off();
                #endif
                #ifdef SEQ1_FLASH_PART2_5
                 Led5.off();
                #endif

              
               
  }  
  
  
  if(Seq1LedPart3OnOff){
                #ifdef SEQ1_LED_PART3_1
                 Led1.on();
                #endif
                #ifdef SEQ1_LED_PART3_2
                 Led2.on();
                #endif
                #ifdef SEQ1_LED_PART3_3
                 Led3.on();
                #endif
                #ifdef SEQ1_LED_PART3_4
                 Led4.on();
                #endif
                #ifdef SEQ1_LED_PART3_5
                 Led5.on();
                #endif
               
                #ifdef SEQ1_FLASH_PART3_1
                Led1.flash( ONTIME_SEQ1_PART3,OFFTIME_SEQ1_PART3,0,0,0);
                #endif
                #ifdef SEQ1_FLASH_PART3_2
                Led2.flash( ONTIME_SEQ1_PART3,OFFTIME_SEQ1_PART3,0,0,0);
                #endif
                #ifdef SEQ1_FLASH_PART3_3
                Led3.flash( ONTIME_SEQ1_PART3,OFFTIME_SEQ1_PART3,0,0,0);
                #endif
                #ifdef SEQ1_FLASH_PART3_4
                Led4.flash( ONTIME_SEQ1_PART3,OFFTIME_SEQ1_PART3,0,0,0);
                #endif
                #ifdef SEQ1_FLASH_PART3_5
                Led5.flash( ONTIME_SEQ1_PART3,OFFTIME_SEQ1_PART3,0,0,0);
                #endif
                
  }
  else if (!Seq1LedPart3OnOff && !Seq2LedPart3OnOff)  {
                #ifdef SEQ1_LED_PART3_1
                 Led1.off();
                #endif
                #ifdef SEQ1_LED_PART3_2
                 Led2.off();
                #endif
                #ifdef SEQ1_LED_PART3_3
                 Led3.off();
                #endif
                #ifdef SEQ1_LED_PART3_4
                 Led4.off();
                #endif
                #ifdef SEQ1_LED_PART3_5
                 Led5.off();
                #endif

                #ifdef SEQ1_FLASH_PART3_1
                 Led1.off();
                #endif
                #ifdef SEQ1_FLASH_PART3_2
                 Led2.off();
                #endif
                #ifdef SEQ1_FLASH_PART3_3
                 Led3.off();
                #endif
                #ifdef SEQ1_FLASH_PART3_4
                 Led4.off();
                #endif
                #ifdef SEQ1_FLASH_PART3_5
                 Led5.off();
                #endif
               
  }

  
     if(Seq1LedPart4OnOff){
     #ifdef SEQ1_LED_PART4_1
                 Led1.on();
                #endif
                #ifdef SEQ1_LED_PART4_2
                 Led2.on();
                #endif
                #ifdef SEQ1_LED_PART4_3
                 Led3.on();
                #endif
                #ifdef SEQ1_LED_PART4_4
                 Led4.on();
                #endif
                #ifdef SEQ1_LED_PART4_5
                 Led5.on();
                #endif
                
                #ifdef SEQ1_FLASH_PART4_1
                Led1.flash( ONTIME_SEQ1_PART4,OFFTIME_SEQ1_PART4,0,0,0);
                #endif
                #ifdef SEQ1_FLASH_PART4_2
                Led2.flash( ONTIME_SEQ1_PART4,OFFTIME_SEQ1_PART4,0,0,0);
                #endif
                #ifdef SEQ1_FLASH_PART4_3
                Led3.flash( ONTIME_SEQ1_PART4,OFFTIME_SEQ1_PART4,0,0,0);
                #endif
                #ifdef SEQ1_FLASH_PART4_4
                Led4.flash( ONTIME_SEQ1_PART4,OFFTIME_SEQ1_PART4,0,0,0);
                #endif
                #ifdef SEQ1_FLASH_PART4_5
                Led5.flash( ONTIME_SEQ1_PART4,OFFTIME_SEQ1_PART4,0,0,0);
                #endif
               
  }
  else if (! Seq1LedPart4OnOff && !Seq2LedPart4OnOff ){
    #ifdef SEQ1_LED_PART4_1
                 Led1.off();
                #endif
                #ifdef SEQ1_LED_PART4_2
                 Led2.off();
                #endif
                #ifdef SEQ1_LED_PART4_3
                 Led3.off();
                #endif
                #ifdef SEQ1_LED_PART4_4
                 Led4.off();
                #endif
                #ifdef SEQ1_LED_PART4_5
                 Led5.off();
                #endif

                #ifdef SEQ1_FLASH_PART4_1
                 Led1.off();
                #endif
                #ifdef SEQ1_FLASH_PART4_2
                 Led2.off();
                #endif
                #ifdef SEQ1_FLASH_PART4_3
                 Led3.off();
                #endif
                #ifdef SEQ1_FLASH_PART4_4
                 Led4.off();
                #endif
                #ifdef SEQ1_FLASH_PART4_5
                 Led5.off();
                #endif
                
  }

if(Seq2LedPart1OnOff){
     #ifdef SEQ2_LED_PART1_1
                 Led1.on();
                #endif
                #ifdef SEQ2_LED_PART1_2
                 Led2.on();
                #endif
                #ifdef SEQ2_LED_PART1_3
                 Led3.on();
                #endif
                #ifdef SEQ2_LED_PART1_4
                 Led4.on();
                #endif
                #ifdef SEQ2_LED_PART1_5
                 Led5.on();
                #endif
               
                #ifdef SEQ2_FLASH_PART1_1
                Led1.flash( ONTIME_SEQ2_PART1,OFFTIME_SEQ2_PART1,0,0,0);
                #endif
                #ifdef SEQ2_FLASH_PART1_2
                Led2.flash( ONTIME_SEQ2_PART1,OFFTIME_SEQ2_PART1,0,0,0);
                #endif
                #ifdef SEQ2_FLASH_PART1_3
                Led3.flash( ONTIME_SEQ2_PART1,OFFTIME_SEQ2_PART1,0,0,0);
                #endif
                #ifdef SEQ2_FLASH_PART1_4
                Led4.flash( ONTIME_SEQ2_PART1,OFFTIME_SEQ2_PART1,0,0,0);
                #endif
                #ifdef SEQ2_FLASH_PART1_5
                Led5.flash( ONTIME_SEQ2_PART1,OFFTIME_SEQ2_PART1,0,0,0);
                #endif
                
  }
  else if ( !Seq2LedPart1OnOff && !Seq1LedPart1OnOff)  {
    #ifdef SEQ2_LED_PART1_1
                 Led1.off();
                #endif
                #ifdef SEQ2_LED_PART1_2
                 Led2.off();
                #endif
                #ifdef SEQ2_LED_PART1_3
                 Led3.off();
                #endif
                #ifdef SEQ2_LED_PART1_4
                 Led4.off();
                #endif
                #ifdef SEQ2_LED_PART1_5
                 Led5.off();
                #endif

                #ifdef SEQ2_FLASH_PART1_1
                 Led1.off();
                #endif
                #ifdef SEQ2_FLASH_PART1_2
                 Led2.off();
                #endif
                #ifdef SEQ2_FLASH_PART1_3
                 Led3.off();
                #endif
                #ifdef SEQ2_FLASH_PART1_4
                 Led4.off();
                #endif
                #ifdef SEQ2_FLASH_PART1_5
                 Led5.off();
                #endif
                
  }


    if(Seq2LedPart2OnOff){
     #ifdef SEQ2_LED_PART2_1
                 Led1.on();
                #endif
                #ifdef SEQ2_LED_PART2_2
                 Led2.on();
                #endif
                #ifdef SEQ2_LED_PART2_3
                 Led3.on();
                #endif
                #ifdef SEQ2_LED_PART2_4
                 Led4.on();
                #endif
                #ifdef SEQ2_LED_PART2_5
                 Led5.on();
                #endif
               
                #ifdef SEQ2_FLASH_PART2_1
                Led1.flash( ONTIME_SEQ2_PART2,OFFTIME_SEQ2_PART2,0,0,0);
                #endif
                #ifdef SEQ2_FLASH_PART2_2
                Led2.flash( ONTIME_SEQ2_PART2,OFFTIME_SEQ2_PART2,0,0,0);
                #endif
                #ifdef SEQ2_FLASH_PART2_3
                Led3.flash( ONTIME_SEQ2_PART2,OFFTIME_SEQ2_PART2,0,0,0);
                #endif
                #ifdef SEQ2_FLASH_PART2_4
                Led4.flash( ONTIME_SEQ2_PART2,OFFTIME_SEQ2_PART2,0,0,0);
                #endif
                #ifdef SEQ2_FLASH_PART2_5
                Led5.flash( ONTIME_SEQ2_PART2,OFFTIME_SEQ2_PART2,0,0,0);
                #endif
                
  }
  else if ( ! Seq2LedPart2OnOff && !Seq1LedPart2OnOff) {
    #ifdef SEQ2_LED_PART2_1
                 Led1.off();
                #endif
                #ifdef SEQ2_LED_PART2_2
                 Led2.off();
                #endif
                #ifdef SEQ2_LED_PART2_3
                 Led3.off();
                #endif
                #ifdef SEQ2_LED_PART2_4
                 Led4.off();
                #endif
                #ifdef SEQ2_LED_PART2_5
                 Led5.off();
                #endif

                #ifdef SEQ2_FLASH_PART2_1
                 Led1.off();
                #endif
                #ifdef SEQ2_FLASH_PART2_2
                 Led2.off();
                #endif
                #ifdef SEQ2_FLASH_PART2_3
                 Led3.off();
                #endif
                #ifdef SEQ2_FLASH_PART2_4
                 Led4.off();
                #endif
                #ifdef SEQ2_FLASH_PART2_5
                 Led5.off();
                #endif
                
  }  
  
  
  if(Seq2LedPart3OnOff){
     #ifdef SEQ2_LED_PART3_1
                 Led1.on();
                #endif
                #ifdef SEQ2_LED_PART3_2
                 Led2.on();
                #endif
                #ifdef SEQ2_LED_PART3_3
                 Led3.on();
                #endif
                #ifdef SEQ2_LED_PART3_4
                 Led4.on();
                #endif
                #ifdef SEQ2_LED_PART3_5
                 Led5.on();
                #endif
                
                #ifdef SEQ2_FLASH_PART3_1
                Led1.flash( ONTIME_SEQ2_PART3,OFFTIME_SEQ2_PART3,0,0,0);
                #endif
                #ifdef SEQ2_FLASH_PART3_2
                Led2.flash( ONTIME_SEQ2_PART3,OFFTIME_SEQ2_PART3,0,0,0);
                #endif
                #ifdef SEQ2_FLASH_PART3_3
                Led3.flash( ONTIME_SEQ2_PART3,OFFTIME_SEQ2_PART3,0,0,0);
                #endif
                #ifdef SEQ2_FLASH_PART3_4
                Led4.flash( ONTIME_SEQ2_PART3,OFFTIME_SEQ2_PART3,0,0,0);
                #endif
                #ifdef SEQ2_FLASH_PART3_5
                Led5.flash( ONTIME_SEQ2_PART3,OFFTIME_SEQ2_PART3,0,0,0);
                #endif
                
  }
  else if (! Seq2LedPart3OnOff && ! Seq1LedPart3OnOff) {
    #ifdef SEQ2_LED_PART3_1
                 Led1.off();
                #endif
                #ifdef SEQ2_LED_PART3_2
                 Led2.off();
                #endif
                #ifdef SEQ2_LED_PART3_3
                 Led3.off();
                #endif
                #ifdef SEQ2_LED_PART3_4
                 Led4.off();
                #endif
                #ifdef SEQ2_LED_PART3_5
                 Led5.off();
                #endif

                #ifdef SEQ2_FLASH_PART3_1
                 Led1.off();
                #endif
                #ifdef SEQ2_FLASH_PART3_2
                 Led2.off();
                #endif
                #ifdef SEQ2_FLASH_PART3_3
                 Led3.off();
                #endif
                #ifdef SEQ2_FLASH_PART3_4
                 Led4.off();
                #endif
                #ifdef SEQ2_FLASH_PART3_5
                 Led5.off();
                #endif
               
  }

  
     if(Seq2LedPart4OnOff){
     #ifdef SEQ2_LED_PART4_1
                 Led1.on();
                #endif
                #ifdef SEQ2_LED_PART4_2
                 Led2.on();
                #endif
                #ifdef SEQ2_LED_PART4_3
                 Led3.on();
                #endif
                #ifdef SEQ2_LED_PART4_4
                 Led4.on();
                #endif
                #ifdef SEQ2_LED_PART4_5
                 Led5.on();
                #endif
               
                #ifdef SEQ2_FLASH_PART4_1
                Led1.flash( ONTIME_SEQ2_PART4,OFFTIME_SEQ2_PART4,0,0,0);
                #endif
                #ifdef SEQ2_FLASH_PART4_2
                Led2.flash( ONTIME_SEQ2_PART4,OFFTIME_SEQ2_PART4,0,0,0);
                #endif
                #ifdef SEQ2_FLASH_PART4_3
                Led3.flash( ONTIME_SEQ2_PART4,OFFTIME_SEQ2_PART4,0,0,0);
                #endif
                #ifdef SEQ2_FLASH_PART4_4
                Led4.flash( ONTIME_SEQ2_PART4,OFFTIME_SEQ2_PART4,0,0,0);
                #endif
                #ifdef SEQ2_FLASH_PART4_5
                Led5.flash( ONTIME_SEQ2_PART4,OFFTIME_SEQ2_PART4,0,0,0);
                #endif
                
  }
  else if (!Seq2LedPart4OnOff && ! Seq1LedPart4OnOff) {
 
                #ifdef SEQ2_LED_PART4_1
                 Led1.off();
                #endif
                #ifdef SEQ2_LED_PART4_2
                 Led2.off();
                #endif
                #ifdef SEQ2_LED_PART4_3
                 Led3.off();
                #endif
                #ifdef SEQ2_LED_PART4_4
                 Led4.off();
                #endif
                #ifdef SEQ2_LED_PART4_5
                 Led5.off();
                #endif

                #ifdef SEQ2_FLASH_PART4_1
                 Led1.off();
                #endif
                #ifdef SEQ2_FLASH_PART4_2
                 Led2.off();
                #endif
                #ifdef SEQ2_FLASH_PART4_3
                 Led3.off();
                #endif
                #ifdef SEQ2_FLASH_PART4_4
                 Led4.off();
                #endif
                #ifdef SEQ2_FLASH_PART4_5
                 Led5.off();
                #endif
               
  }
 
#ifdef ACTION1_MULTI
 if (Fishing_Led /*&& lightsOn*/ ) {

    if (action1Switch==1){
                
                #ifdef ACTION1A_1
                 Led1.on();
                #endif
                #ifdef ACTION1A_2
                 Led2.on();
                #endif
                #ifdef ACTION1A_3
                 Led3.on();
                #endif
                #ifdef ACTION1A_4
                 Led4.on();
                #endif
                #ifdef ACTION1A_5
                 Led5.on();
                #endif
               
                #ifdef ACTION1A_FLASH_1
                Led1.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1A_FLASH_2
                Led2.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1A_FLASH_3
                Led3.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1A_FLASH_4
                Led4.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1A_FLASH_5
                Led5.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                

    }

     else if (action1Switch==2){

      
                #ifdef ACTION1A_1
                 Led1.on();
                #endif
                #ifdef ACTION1A_2
                 Led2.on();
                #endif
                #ifdef ACTION1A_3
                 Led3.on();
                #endif
                #ifdef ACTION1A_4
                 Led4.on();
                #endif
                #ifdef ACTION1A_5
                 Led5.on();
                #endif
                
                #ifdef ACTION1A_FLASH_1
                Led1.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1A_FLASH_2
                Led2.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1A_FLASH_3
                Led3.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1A_FLASH_4
                Led4.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1A_FLASH_5
                Led5.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                
                #ifdef ACTION1B_1
                 Led1.on();
                #endif
                #ifdef ACTION1B_2
                 Led2.on();
                #endif
                #ifdef ACTION1B_3
                 Led3.on();
                #endif
                #ifdef ACTION1B_4
                 Led4.on();
                #endif
                #ifdef ACTION1B_5
                 Led5.on();
                #endif
               
                
                #ifdef ACTION1B_FLASH_1
                Led1.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1B_FLASH_2
                Led2.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1B_FLASH_3
                Led3.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1B_FLASH_4
                Led4.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1B_FLASH_5
                Led5.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                
     } 
     else if (action1Switch==3){
   
        
                #ifdef ACTION1A_1
                 Led1.on();
                #endif
                #ifdef ACTION1A_2
                 Led2.on();
                #endif
                #ifdef ACTION1A_3
                 Led3.on();
                #endif
                #ifdef ACTION1A_4
                 Led4.on();
                #endif
                #ifdef ACTION1A_5
                 Led5.on();
                #endif
                #ifdef ACTION1A_6
                Led.On(5);
                #endif
                
                #ifdef ACTION1A_FLASH_1
                Led1.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1A_FLASH_2
                Led2.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1A_FLASH_3
                Led3.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1A_FLASH_4
                Led4.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1A_FLASH_5
                Led5.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                
                #ifdef ACTION1B_1
                 Led1.on();
                #endif
                #ifdef ACTION1B_2
                 Led2.on();
                #endif
                #ifdef ACTION1B_3
                 Led3.on();
                #endif
                #ifdef ACTION1B_4
                 Led4.on();
                #endif
                #ifdef ACTION1B_5
                 Led5.on();
                #endif
               
                
                #ifdef ACTION1B_FLASH_1
                Led1.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1B_FLASH_2
                Led2.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1B_FLASH_3
                Led3.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1B_FLASH_4
                Led4.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1B_FLASH_5
                Led5.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
               
                #ifdef ACTION1C_1
                 Led1.on();
                #endif
                #ifdef ACTION1C_2
                 Led2.on();
                #endif
                #ifdef ACTION1C_3
                 Led3.on();
                #endif
                #ifdef ACTION1C_4
                 Led4.on();
                #endif
                #ifdef ACTION1C_5
                 Led5.on();
                #endif
                
                
                #ifdef ACTION1C_FLASH_1
                Led1.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1C_FLASH_2
                Led2.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1C_FLASH_3
                Led3.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1C_FLASH_4
                Led4.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1C_FLASH_5
                Led5.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
               
     }
     else if (action1Switch==4){
     
                #ifdef ACTION1C_1
                 Led1.off();
                #endif
                #ifdef ACTION1C_2
                 Led2.off();
                #endif
                #ifdef ACTION1C_3
                 Led3.off();
                #endif
                #ifdef ACTION1C_4
                 Led4.off();
                #endif
                #ifdef ACTION1C_5
                 Led5.off();
                #endif

                #ifdef ACTION1C_FLASH_1
                 Led1.off();
                #endif
                #ifdef ACTION1C_FLASH_2
                 Led2.off();
                #endif
                #ifdef ACTION1C_FLASH_3
                 Led3.off();
                #endif
                #ifdef ACTION1C_FLASH_4
                 Led4.off();
                #endif
                #ifdef ACTION1C_FLASH_5
                 Led5.off();
                #endif
                
     
     }
     
     else if (action1Switch==5){
     
                #ifdef ACTION1B_1
                 Led1.off();
                #endif
                #ifdef ACTION1B_2
                 Led2.off();
                #endif
                #ifdef ACTION1B_3
                 Led3.off();
                #endif
                #ifdef ACTION1B_4
                 Led4.off();
                #endif
                #ifdef ACTION1B_5
                 Led5.off();
                #endif

                #ifdef ACTION1B_FLASH_1
                 Led1.off();
                #endif
                #ifdef ACTION1B_FLASH_2
                 Led2.off();
                #endif
                #ifdef ACTION1B_FLASH_3
                 Led3.off();
                #endif
                #ifdef ACTION1B_FLASH_4
                 Led4.off();
                #endif
                #ifdef ACTION1B_FLASH_5
                 Led5.off();
                #endif
               
     
     
     
     }
            }
            else {

        
                
                #ifdef ACTION1A_1
                 Led1.off();
                #endif
                #ifdef ACTION1A_2
                 Led2.off();
                #endif
                #ifdef ACTION1A_3
                 Led3.off();
                #endif
                #ifdef ACTION1A_4
                 Led4.off();
                #endif
                #ifdef ACTION1A_5
                 Led5.off();
                #endif
               
        
                #ifdef ACTION1B_1
                 Led1.off();
                #endif
                #ifdef ACTION1B_2
                 Led2.off();
                #endif
                #ifdef ACTION1B_3
                 Led3.off();
                #endif
                #ifdef ACTION1B_4
                 Led4.off();
                #endif
                #ifdef ACTION1B_5
                 Led5.off();
                #endif
               
        
                #ifdef ACTION1C_1
                 Led1.off();
                #endif
                #ifdef ACTION1C_2
                 Led2.off();
                #endif
                #ifdef ACTION1C_3
                 Led3.off();
                #endif
                #ifdef ACTION1C_4
                 Led4.off();
                #endif
                #ifdef ACTION1C_5
                 Led5.off();
                #endif

                #ifdef ACTION1A_FLASH_1
                 Led1.off();
                #endif
                #ifdef ACTION1A_FLASH_2
                 Led2.off();
                #endif
                #ifdef ACTION1A_FLASH_3
                 Led3.off();
                #endif
                #ifdef ACTION1A_FLASH_4
                 Led4.off();
                #endif
                #ifdef ACTION1A_FLASH_5
                 Led5.off();
                #endif

                 #ifdef ACTION1B_FLASH_1
                 Led1.off();
                #endif
                #ifdef ACTION1B_FLASH_2
                 Led2.off();
                #endif
                #ifdef ACTION1B_FLASH_3
                 Led3.off();
                #endif
                #ifdef ACTION1B_FLASH_4
                 Led4.off();
                #endif
                #ifdef ACTION1B_FLASH_5
                 Led5.off();
                #endif

                #ifdef ACTION1C_FLASH_1
                 Led1.off();
                #endif
                #ifdef ACTION1C_FLASH_2
                 Led2.off();
                #endif
                #ifdef ACTION1C_FLASH_3
                 Led3.off();
                #endif
                #ifdef ACTION1C_FLASH_4
                 Led4.off();
                #endif
                #ifdef ACTION1C_FLASH_5
                 Led5.off();
                #endif
               
            }
            #else

             if (Fishing_Led && lightsOn ) {
                
                #ifdef ACTION1A_1
                 Led1.on();
                #endif
                #ifdef ACTION1A_2
                 Led2.on();
                #endif
                #ifdef ACTION1A_3
                 Led3.on();
                #endif
                #ifdef ACTION1A_4
                 Led4.on();
                #endif
                #ifdef ACTION1A_5
                 Led5.on();
                #endif
               
                #ifdef ACTION1A_FLASH_1
                Led1.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1A_FLASH_2
                Led2.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1A_FLASH_3
                Led3.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1A_FLASH_4
                Led4.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
                #ifdef ACTION1A_FLASH_5
                Led5.flash( ONTIME_1,OFFTIME_1,0,0,0);
                #endif
               
                
            }
            else {
                
                #ifdef ACTION1A_1
                 Led1.off();
                #endif
                #ifdef ACTION1A_2
                 Led2.off();
                #endif
                #ifdef ACTION1A_3
                 Led3.off();
                #endif
                #ifdef ACTION1A_4
                 Led4.off();
                #endif
                #ifdef ACTION1A_5
                 Led5.off();
                #endif

                #ifdef ACTION1A_FLASH_1
                 Led1.off();
                #endif
                #ifdef ACTION1A_FLASH_2
                 Led2.off();
                #endif
                #ifdef ACTION1A_FLASH_3
                 Led3.off();
                #endif
                #ifdef ACTION1A_FLASH_4
                 Led4.off();
                #endif
                #ifdef ACTION1A_FLASH_5
                 Led5.off();
                #endif
                
            }
        #endif

    if (Fog_Led /*&& lightsOn*/ ) {
                
                #ifdef ACTION3_1
                 Led1.on();
                #endif
                #ifdef ACTION3_2
                 Led2.on();
                #endif
                #ifdef ACTION3_3
                 Led3.on();
                #endif
                #ifdef ACTION3_4
                 Led4.on();
                #endif
                #ifdef ACTION3_5
                 Led5.on();
                #endif
                
                #ifdef ACTION3_FLASH_1
                Led1.flash( ONTIME_3,OFFTIME_3,0,0,0);
                #endif
                #ifdef ACTION3_FLASH_2
                Led2.flash( ONTIME_3,OFFTIME_3,0,0,0);
                #endif
                #ifdef ACTION3_FLASH_3
                Led3.flash( ONTIME_3,OFFTIME_3,0,0,0);
                #endif
                #ifdef ACTION3_FLASH_4
                Led4.flash( ONTIME_3,OFFTIME_3,0,0,0);
                #endif
                #ifdef ACTION3_FLASH_5
                Led5.flash( ONTIME_3,OFFTIME_3,0,0,0);
                #endif
               
                
            }
            else {
                
                #ifdef ACTION3_1
                 Led1.off();
                #endif
                #ifdef ACTION3_2
                 Led2.off();
                #endif
                #ifdef ACTION3_3
                 Led3.off();
                #endif
                #ifdef ACTION3_4
                 Led4.off();
                #endif
                #ifdef ACTION3_5
                 Led5.off();
                #endif

                #ifdef ACTION3_FLASH_1
                 Led1.off();
                #endif
                #ifdef ACTION3_FLASH_2
                 Led2.off();
                #endif
                #ifdef ACTION3_FLASH_3
                 Led3.off();
                #endif
                #ifdef ACTION3_FLASH_4
                 Led4.off();
                #endif
                #ifdef ACTION3_FLASH_5
                 Led5.off();
                #endif
                
                
            }
  
  #ifdef ACTION4_ENABLE
    
    if (Manoeuvre_Led && lightsOn) {
        
        #ifdef ACTION4_1
         Led1.on();
        #endif
        #ifdef ACTION4_2
         Led2.on();
        #endif
        #ifdef ACTION4_3
         Led3.on();
        #endif
        #ifdef ACTION4_4
         Led4.on();
        #endif
        #ifdef ACTION4_5
         Led5.on();
        #endif
        
        
    }
    else {
        
        #ifdef ACTION4_1
         Led1.off();
        #endif
        #ifdef ACTION4_2
         Led2.off();
        #endif
        #ifdef ACTION4_3
         Led3.off();
        #endif
        #ifdef ACTION4_4
         Led4.off();
        #endif
        #ifdef ACTION4_5
         Led5.off();
        #endif

        
        
    }
  
  #endif
    
  
  #ifdef ACTION6_ENABLE
    if (machinGunFlash) {
        
        #ifdef ACTION6_1
         Led1.on();
        #endif
        #ifdef ACTION6_2
         Led2.on();
        #endif
        #ifdef ACTION6_3
         Led3.on();
        #endif
        #ifdef ACTION6_4
         Led4.on();
        #endif
        #ifdef ACTION6_5
         Led5.on();
        #endif
        
        
    }
    else {
        
        #ifdef ACTION6_1
         Led1.off();
        #endif
        #ifdef ACTION6_2
         Led2.off();
        #endif
        #ifdef ACTION6_3
         Led3.off();
        #endif
        #ifdef ACTION6_4
         Led4.off();
        #endif
        #ifdef ACTION6_5
         Led5.off();
        #endif
       
        
    }
  
  #endif
  
  
  #ifdef ACTION7_ENABLE
    
    if (cannonFlash) {
        
        #ifdef ACTION7_1
         Led1.on();
        #endif
        #ifdef ACTION7_2
         Led2.on();
        #endif
        #ifdef ACTION7_3
         Led3.on();
        #endif
        #ifdef ACTION7_4
         Led4.on();
        #endif
        #ifdef ACTION7_5
         Led5.on();
        #endif
        
        
    }
    else {
        
        #ifdef ACTION7_1
         Led1.off();
        #endif
        #ifdef ACTION7_2
         Led2.off();
        #endif
        #ifdef ACTION7_3
         Led3.off();
        #endif
        #ifdef ACTION7_4
         Led4.off();
        #endif
        #ifdef ACTION7_5
         Led5.off();
        #endif
       
        
    }
  
  #endif
  
  #ifdef ACTION8_ENABLE 
    if (Alarm_Led) {
        
        #ifdef ACTION8_FLASH_1
        Led1.flash( ONTIME_8,OFFTIME_8,0,0,0);
        #endif
        #ifdef ACTION8_FLASH_2
        Led2.flash( ONTIME_8,OFFTIME_8,0,0,0);
        #endif
        #ifdef ACTION8_FLASH_3
        Led3.flash( ONTIME_8,OFFTIME_8,0,0,0);
        #endif
        #ifdef ACTION8_FLASH_4
        Led4.flash( ONTIME_8,OFFTIME_8,0,0,0);
        #endif
        #ifdef ACTION8_FLASH_5
        Led5.flash( ONTIME_8,OFFTIME_8,0,0,0);
        #endif
        
        
    }
    else {
        
        #ifdef ACTION8_FLASH_1
        Led1.off();
        #endif
        #ifdef ACTION8_FLASH_2
        Led2.off();
        #endif
        #ifdef ACTION8_FLASH_3
        Led3.off();
        #endif
        #ifdef ACTION8_FLASH_4
        Led4.off();
        #endif
        #ifdef ACTION8_FLASH_5
        Led5.off();
        #endif
        
        
    }
  
  #endif
  
    
    if (AutoLight) {
        
        if (engineRunning) {
            
            #ifdef ACTION9_1
             Led1.on();
            #endif
            #ifdef ACTION9_2
             Led2.on();
            #endif
            #ifdef ACTION9_3
             Led3.on();
            #endif
            #ifdef ACTION9_4
             Led4.on();
            #endif
            #ifdef ACTION9_5
             Led5.on();
            #endif
            
      
      
            #ifdef ACTION9_FLASH_1
            Led1.flash( ONTIME_9,OFFTIME_9,0,0,0);
            #endif
            #ifdef ACTION9_FLASH_2
            Led2.flash( ONTIME_9,OFFTIME_9,0,0,0);
            #endif
            #ifdef ACTION9_FLASH_3
            Led3.flash( ONTIME_9,OFFTIME_9,0,0,0);
            #endif
            #ifdef ACTION9_FLASH_4
            Led4.flash( ONTIME_9,OFFTIME_9,0,0,0);
            #endif
            #ifdef ACTION9_FLASH_5
            Led5.flash( ONTIME_9,OFFTIME_9,0,0,0);
            #endif
          
      
      
            
        }
        
        
    }
    else {
        
        if (LightManualOn) {
            
            #ifdef ACTION9_1
             Led1.on();
            #endif
            #ifdef ACTION9_2
             Led2.on();
            #endif
            #ifdef ACTION9_3
             Led3.on();
            #endif
            #ifdef ACTION9_4
             Led4.on();
            #endif
            #ifdef ACTION9_5
             Led5.on();
            #endif
           
            #ifdef ACTION9_FLASH_1
            Led1.flash( ONTIME_9,OFFTIME_9,0,0,0);
            #endif
            #ifdef ACTION9_FLASH_2
            Led2.flash( ONTIME_9,OFFTIME_9,0,0,0);
            #endif
            #ifdef ACTION9_FLASH_3
            Led3.flash( ONTIME_9,OFFTIME_9,0,0,0);
            #endif
            #ifdef ACTION9_FLASH_4
            Led4.flash( ONTIME_9,OFFTIME_9,0,0,0);
            #endif
            #ifdef ACTION9_FLASH_5
            Led5.flash( ONTIME_9,OFFTIME_9,0,0,0);
            #endif
            
            
            
        }
        else {
            
            #ifdef ACTION9_1
             Led1.off();
            #endif
            #ifdef ACTION9_2
             Led2.off();
            #endif
            #ifdef ACTION9_3
             Led3.off();
            #endif
            #ifdef ACTION9_4
             Led4.off();
            #endif
            #ifdef ACTION9_5
             Led5.off();
            #endif

            #ifdef ACTION9_FLASH_1
                 Led1.off();
                #endif
                #ifdef ACTION9_FLASH_2
                 Led2.off();
                #endif
                #ifdef ACTION9_FLASH_3
                 Led3.off();
                #endif
                #ifdef ACTION9_FLASH_4
                 Led4.off();
                #endif
                #ifdef ACTION9_FLASH_5
                 Led5.off();
                #endif
           
        }
        
        
    }
   
    if (!lightsOn ) {
      
            #ifdef ACTION9_1
             Led1.off();
            #endif
            #ifdef ACTION9_2
             Led2.off();
            #endif
            #ifdef ACTION9_3
             Led3.off();
            #endif
            #ifdef ACTION9_4
             Led4.off();
            #endif
            #ifdef ACTION9_5
             Led5.off();
            #endif

            #ifdef ACTION9_FLASH_1
                 Led1.off();
                #endif
                #ifdef ACTION9_FLASH_2
                 Led2.off();
                #endif
                #ifdef ACTION9_FLASH_3
                 Led3.off();
                #endif
                #ifdef ACTION9_FLASH_4
                 Led4.off();
                #endif
                #ifdef ACTION9_FLASH_5
                 Led5.off();
                #endif
            

       /*      
         Led1.off();
         Led2.off();
         Led3.off();
         Led3.off();
         Led4.off();
         Led5.off();
        Led.Off(5);
        Led.Off(6);
        Led.Off(8);
        Led.Off(9);
        Led.Off(12);
        Led.Off(13);
        Led.Off(14);
        Led.blinkStop(0);
        Led.blinkStop(1);
        Led.blinkStop(2);
        Led.blinkStop(2);
        Led.blinkStop(3);
        Led.blinkStop(4);
        Led.blinkStop(5);
        Led.blinkStop(6);
        Led.blinkStop(8);
        Led.blinkStop(9);
        Led.blinkStop(12);
        Led.blinkStop(13);
        Led.blinkStop(14);
       */   
    }
  
    
}

//
