
#include <iostream>
#include <string>
#include <absl/strings/string_view.h>

void Show(absl::string_view sv) {  // 使用值传递
  std::cout << sv.data() << std::endl;
}

int main() {
//  Show(sv);  // 使用值传递

  std::string str = "like";
  Show(str);  // 实参可以直接使用 std::string 类型


  const char* cs = "Tired like a dog";
  absl::string_view sv(cs + 6);  
  std::cout << sv.data() << std::endl;  // 输出 ”like a dog"，即string_view 指向的区间
  std::cout << sv.length() << std::endl; // 输出指向的区间长度
  std::cout << sv.size() << std::endl; // 同length
  std::cout << sv.front() << std::endl;  // 输出子区间首字符 'l'
  std::cout << sv.back() << std::endl;  // 输出子区间尾字符 'g'
 
  return 0;
}
