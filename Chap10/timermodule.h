 // Header file timermodule.h

 // Reset the timer so it reads 0 seconds
 void reset_timer();

 // Start the timer.  The timer will begin measuring elapsed time.
 void start_timer();

 // Stop the timer.  The timer will retain the current elapsed 
 // time, but it will not measure any time while it is stopped.
 void stop_timer();

 // Return the cummulative time (in seconds) kept by the timer since 
 // it last was reset
 double elapsed_time();

