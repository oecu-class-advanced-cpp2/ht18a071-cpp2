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
        
        
        mcxi(const std::string& s) : value_(0) {
            
            int num = 0;
            
            for (auto pos = a.begin(); pos != s.end(); ++pos){
                if (*pos == '2' || *pos == '3' || *pos == '4' || pos == '5' || *pos == '6' || *pos == '7' || *pos == '8' || *pos == '9'){
                    
             switch(*pos){
                 case '2' : num = 2; break;
                     
                 case '3' : num = 3; break;
                     
                 case '4' : num = 4; break;
                     
                 case '5' : num = 5; break;
                     
                 case '6' : num = 6; break;
                     
                 case '7' : num = 7; break;
                     
                 case '8' : num = 8; break;
                     
                 case '9' : num = 9; break;
             }
             
                    
            } else {
                    switch ([*pos]){
                        
                    case '1000' : m = 1000; break;
                    
                    case '100' : c = 100; break;
                    
                    case '10' : x = 10; break;
                    
                    case '1' : i = 1; break
                        
                    }
                    m -> 1000
                    c -> 100
                    x -> 10
                    i -> 1
               
                        
        }


        std::sering to_string(){
            
            return "a";
            
        }
                
                
                
        mcxi operator+(const mcxi& rhs) {
            return rhs;
        }

        /* ----------------------------------------------------------------- */
        /*
           to_string

           現在の値を mcxi 記法に変換します。
         */
        /* ----------------------------------------------------------------- */
        std::string to_string() const {
            return "XXX";
        }
        
        void debug_mcxi() {
            std::cout << "value_:" << value_ << std::endl;
        }

    private:
        int value_;
    };
}

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
