 class Trafficlight {
 public:
     // Class constants available to clients
     enum SignalColor { Red, Green, Yellow };
 private:
     SignalColor color;  // The light's current color: Red, Green, or Yellow
 public:
 
     Trafficlight(SignalColor initial_color);
     void change();
     SignalColor get_color() const;
 };

