mcxi文字列プログラム

演習課題


#include <iostream>
#include <cstdlib>

namespace cpp2 {
    
    
    /* --------------------------------------------------------------------- */
    /*
       mcxi

       mcxi 記法を解析するクラスです。
     */
    /* --------------------------------------------------------------------- */
    class mcxi {
      
    private:
        
        int result;
        
        int char_toInt;
        
    
    public:
        
        
        mcxi(const std::string s) {
            
           result = 0;
           
           char_toInt = 1;
            
            for (int i = 0; i[pos]; i++){
            
                if(i[pos] == 'm'){
                
                result += 1000 * char_toInt;
                
                char_toInt = 1;
                }
                
                else if (i[pos] == 'c'){
                
                   result += 100 * char_toInt;
                   
                   char_toInt = 1;
                
                }
                
                else if (i[pos] == 'x') {
                
                    result += 10 * char_toInt;
                    
                    char_toInt = 1;
                
                }
                
                else if (i[pos] == 'i') {
                
                    result += 1 * char_toInt;
                    
                    char_toInt = 1;
                
                }
              
                else if (i[pos] == '2' || '3' || '4' || '5' || '6' || '7' || '8' || '9'){
                    
                    char_toInt = int(i[pos] - '0');
                    
                }
             
             }
             
         cout << "入力"　<< i << "変換後": << result << endl; {
            
        std::sering to_string(){
            
            return "a";
            
        }
                 
        mcxi operator+(const mcxi& rhs) {
            return rhs;
        }
     }:
     
int main(){
  cpp2::mcxi a0("xi");
  cpp2::mcxi b0("x9i");
  auto result0 = a0 + b0;
  std::cout << "3x" <<" " << result0.to_string() << std::endl;
  
  /*
  cpp2::mcxi a1("i");
  cpp2::mcxi b1("9i");
  auto result1 = a1 + b1;
  std::cout << "x" << " " << result1.to_string() << std::endl;

  cpp2::mcxi a2("c2x2i");
  cpp2::mcxi b2("4c8x8i");
  auto result2 = a2 + b2;
  std::cout << "6cx" << " " << result2.to_string() << std::endl;

  cpp2::mcxi a3("m2ci");
  cpp2::mcxi b3("4m7c9x8i");
  auto result3 = a3 + b3;
  std::cout << "5m9c9x9i" << " " << result3.to_string() << std::endl;

  cpp2::mcxi a4("9c9x9i");
  cpp2::mcxi b4("i");
  auto result4 = a4 + b4;
  std::cout << "m" << " " << result4.to_string() << std::endl;

  cpp2::mcxi a5("i");
  cpp2::mcxi b5("9m9c9x8i");
  auto result5 = a5 + b5;
  std::cout << "9m9c9x9i" << " " << result5.to_string() << std::endl;

  cpp2::mcxi a6("m");
  cpp2::mcxi b6("i");
  auto result6 = a6 + b6;
  std::cout << "mi" << " " << result6.to_string() << std::endl;

  cpp2::mcxi a7("i");
  cpp2::mcxi b7("m");
  auto result7 = a7 + b7;
  std::cout << "mi" << " " << result7.to_string() << std::endl;

  cpp2::mcxi a8("m9i");
  cpp2::mcxi b8("i");
  auto result8 = a8 + b8;
  std::cout << "mx" << " " << result8.to_string() << std::endl;

  cpp2::mcxi a9("9m8c7xi");
  cpp2::mcxi b9("c2x8i");
  auto result9 = a9 + b9;
  std::cout << "9m9c9x9i" << " " << result9.to_string() << std::endl;
  */
}
// GCC reference:
//   https://gcc.gnu.org/

// C++ language references:
//   https://cppreference.com/
//   https://isocpp.org/
//   http://www.open-std.org/jtc1/sc22/wg21/

// Boost libraries references:
//   https://www.boost.org/doc/
