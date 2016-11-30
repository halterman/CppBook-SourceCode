 #include <map> 
 #include <string> 
 #include <iostream> 
 
 int main() {
     std::map<std::string, int> container;
 
     container["Fred"]   = 22;
     container["Ella"]  = 21;
     container["Owen"] = 34;
     container["Zoe"]  = 29;
 
     std::cout << container["Ella"] << '\n';
     std::cout << container["Zoe"] << '\n';
 }

