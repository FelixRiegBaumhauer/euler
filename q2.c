//By Felix Rieg-Baumhauer
//9/18/2016
//#2 on Project Euler

#include <stdio.h>
#include <stdlib.h>

int fibMaker(int preVal, int twoAgo){
  int curVal = preVal+twoAgo;
  //printf("%d\n", curVal);
  if (curVal+preVal < 4000000)//first test
    if((curVal/2)*2 == curVal)//if even we add if not we just re move up
      return curVal+fibMaker(curVal,preVal);
    else
      return fibMaker(curVal, preVal);
  return 0;
}

int main(){
  int x = fibMaker(1,0);
  printf("The sum of the even numbered fibonacci numbers is %d\n", x);
}
