
void setup() 
{ 
   std_io_setup();
   led_manager_setup();
   wheels_init();
   wheels_stop();
} 

void loop() 
{  
  wheels_loop();
  mil_tracker_loop(wheels_are_moving());
  mil_reporter_loop();
}
