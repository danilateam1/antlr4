#include <iostream>
#include <string>
#include <sstream>

#include "antlr4-runtime.h"
#include "pascalUserVisitor.h"
#include "pascalParser.h"
#include "pascalLexer.h"

namespace sample {

std::string functionality =
"const\n"
"   step : integer = 10;"
"var\n"
"   a, b, c : integer;"
"begin\n"
"   begin\n"
"       c := 5;"
"   end;"
""
"   if c div 5 = 0 then\n"
"   begin\n"
"       writeln(0);"
"   end\n"
"   else\n"
"       writeln(1);"
""
"   a := 3;"
"   b := 4;"
""
"   writeln(9-2 * (b-1) div 1);"
"   writeln(10*(a * b + 2 * b) div step);"
"   writeln(30-40);"
""
"   if c = 5 then\n"
"       if a = 3 then\n"
"           writeln(90);"
""
"   writeln('string constant');"
"end.";

std::string number_sign =
"var "
"  no : integer;"
"begin"
"  write('Enter a number:');"
"  read(no);"
""
"  if no > 0 then"
"    writeln('You enter Positive Number')"
"  else"
"    if no < 0 then"
"      writeln('You enter Negative number')"
"    else"
"      if no = 0 then"
"      writeln('You enter Zero');"
"end.";

std::string digits = 
"var\n"
"   x: integer;"
"   c1, c2: integer;"
"begin\n"
"   write('Enter two digits number: ');"
"   read(x);"
"   c1 := x div 10;"
"   c2 := x mod 10;"
"   write('First digit : ');"
"   writeln(c1);"
"   write('Second digit : ');"
"   writeln(c2);"
"end.";

std::string existing_triangle =
"var\n"
"    a, b, c: integer;"
"begin\n"
"    write('Enter length 1: ');"
"    read(a);"
"    write('Enter length 2: ');"
"    read(b);"
"    write('Enter length 3: ');"
"    read(c);"
""
"    if a < b+c then\n"
"    begin\n"
"        if b < a+c then\n"
"        begin\n"
"            if c < a+b then\n"
"            begin\n"
"                writeln('Triangle exists');"
"            end\n"
"            else\n"
"                writeln('Triangle doesnt exists');"
"        end\n"
"        else\n"
"        writeln('Triangle doesnt exists');"
"    end\n"
"    else\n"
"       writeln('Triangle doesnt exists');"
"end.";

} // sample

int main() {
    
    int sample_number;
    std::cout << "Enter sample number : ";
    std::cin >> sample_number;

    std::string program;
    std::cout << "==================== ";
    switch (sample_number)
    {
    case 1 :
        std::cout << "functionality";
        program = sample::functionality;
        break;
    case 2:
        std::cout << "number_sign";
        program = sample::number_sign;
        break;
    case 3:
        std::cout << "digits";
        program = sample::digits;
        break;
    case 4:
        std::cout << "existing_triangle";
        program = sample::existing_triangle;
        break;
    default:
        exit(-1);
    }
    std::cout << " ====================" << std::endl;

    std::stringstream stream(program);
    antlr4::ANTLRInputStream input(stream);
    pascalLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    pascalParser parser(&tokens);
    pascalUserVisitor visitor;
    int return_val = std::any_cast<int>(
    visitor.visit(parser.program())
    );

    return return_val;
}