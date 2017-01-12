 #include <string>
 #include <vector>
 #include <iostream>
 
 // Base class for all Text derived classes
 class Text {
     std::string text;
 public:
     Text(const std::string& t): text(t) {}
     virtual std::string get() const {
         return text;
     }
 };
 
 // Provides minimal decoration for the text
 class FancyText: public Text {
     std::string left_bracket;
     std::string right_bracket;
     std::string connector;
 public:
     FancyText(const std::string& t, const std::string& left, 
               const std::string& right, const std::string& conn): 
          Text(t), left_bracket(left), right_bracket(right),
          connector(conn) {}
     std::string get() const override {
         return left_bracket + Text::get() + right_bracket;
     }
 };
 
 // The text is always the word FIXED
 class FixedText: public Text {
 public:
     FixedText(): Text("FIXED") {}
 };
 
 int main() {
     std::vector<Text *> texts { new Text("Wow"), 
                            new FancyText("Wee", "[", "]", "-"),
                            new FixedText, 
                            new FancyText("Whoa", ":", ":", ":") };
     for (auto t : texts)
         std::cout << t->get() << '\n';
 }

