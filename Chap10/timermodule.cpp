 //  File timermodule.h
 //  Implements the program timer module

 #include <ctime> 

 //  Global variable that keeps track of the 
 //  elapsed time.
 double elapsed;

 //  Global variable that counts the number of
 //  clock ticks since the most recent start time.
 clock_t start_time;

 //  Global flag that indicates whether or not the 
 //  timer is running.
 bool running;

 //  Reset the timer so it reads 0 seconds
 void reset_timer() {
     elapsed = 0.0;
     running = false;  //   Ensure timer is not running
 }

 //  Start the timer.  The timer will
 //  begin measuring elapsed time.
 //  Starting the timer if it already is running has no effect
 void start_timer() {
     //  Starting an already running timer has no effect
     if (!running) {
         running = true;        //  Note that the timer is running
         start_time = clock();  //  Record start time 
     }
 }

 //  Stop the timer.  The timer will 
 //  retain the current elapsed time, but
 //  it will not measure any time while
 //  it is stopped.
 //  Stopping the timer if it is not currently running has no
 //  effect.
 void stop_timer() {
     //  Stopping a non-running timer has no effect
     if (running) {
         clock_t stop_time = clock();  //  Record stop time
         running = false;              //  Stop the clock
         //  Add to the elapsed time how long it has been since we last
         //  started the timer
         elapsed += static_cast<double>((stop_time - start_time))
                                         / CLOCKS_PER_SEC; 
     }
 }

 //  Return the cummulative running time (in seconds)
 //  kept by the timer since it last was reset
 double elapsed_time() {
     if (running) { //  Compute time since last reset
         clock_t current_time = clock();  //  Record current time
         return elapsed + static_cast<double>((current_time - start_time))
                                               / CLOCKS_PER_SEC; 
     }
     else   //  Timer stopped; elapsed already computed in stop_timer
         return elapsed;
 }

