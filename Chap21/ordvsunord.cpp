 #include <iostream>
 #include <string>
 #include <map>
 #include <unordered_map>
 
 int main() {
     std::map<std::string, int> m;
     std::unordered_map<std::string, int> um;
 
     m["fred"] = 23;
     um["fred"] = 23;
     m["adam"] = 99;
     um["adam"] = 99;
     m["cathy"] = 2;
     um["cathy"] = 2;
     m["wilma"] = 50;
     um["wilma"] = 50;
     m["betty"] = 19;
     um["betty"] = 19;
     m["roger"] = 44;
     um["roger"] = 44;
     m["kim"] = 7;
     um["kim"] = 7;
     m["doug"] = 10;
     um["doug"] = 10;
     m["zach"] = 5;
     um["zach"] = 5;
     m["tom"] = 34;
     um["tom"] = 34;
 
     for (auto& p : m)
         std::cout << p.first << ":" << p.second << "  ";
     std::cout << '\n';
     std::cout << "-------------------\n";
     for (auto& p : um)
         std::cout << p.first << ":" << p.second << "  ";
     std::cout << '\n';
     std::cout << "===================\n";
     
     m["tammy"] = 80;
     um["tammy"] = 80;
 
     for (auto& p : m)
         std::cout << p.first << ":" << p.second << "  ";
     std::cout << '\n';
     std::cout << "-------------------\n";
     for (auto& p : um)
         std::cout << p.first << ":" << p.second << "  ";
     std::cout << '\n';
 }

