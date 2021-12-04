#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Box b0,b1;

  initBox(&b0,4.0,4.0,0.0,0.0);  
  assertEquals("(4,4,0,0)", boxToString(b0), "boxToString(b0)");

  initBox(&b1,4.1674567,3.9387321,1.087654,0.9966543);
  assertEquals("(4.17,3.94,1.09,0.997)", boxToString(b1), "boxToString(b1)");
  assertEquals("(4,4,1,1)", boxToString(b1,1), "boxToString(b1,1)");
  assertEquals("(4.167,3.939,1.088,0.9967)", boxToString(b1,4), "boxToString(b1,4)");
  assertEquals("(4.1675,3.9387,1.0877,0.99665)", boxToString(b1,5), "boxToString(b1,5)");

		   
  return 0;
}
