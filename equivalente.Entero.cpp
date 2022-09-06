#include <iostream>
using std::cin;
using std::cout;
using std::endl;
 
int main()
{
   cout << 'A' << " = " << static_cast< int >( 'A' ) << endl
      << 'B' << " = " << static_cast< int >( 'B' ) << endl
      << 'C' << " = " << static_cast< int >( 'C' ) << endl
      << 'a' << " = " << static_cast< int >( 'a' ) << endl
      << 'b' << " = " << static_cast< int >( 'b' ) << endl
      << 'c' << " = " << static_cast< int >( 'c' ) << endl
    return 0;
}