#include "catch2/catch.hpp"
#include "fmt/core.h"
#include "tokenizer/tokenizer.h"
#include "tokenizer/token.h"

#include <sstream>
#include <vector>

// 下面是示例如何书写测试用例
TEST_CASE("Test hello world.") {

  std::string input =
          "begin\n"
          ;
  std::stringstream ss;
  ss.str(input);
  miniplc0::Tokenizer tkz(ss);
  std::vector<miniplc0::Token> output = {};
  auto result = tkz.AllTokens();
  if (result.second.has_value()) {
          FAIL();
  }
  REQUIRE( (result.first[0].GetValueString() == "begin") );

}
