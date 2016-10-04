//Felix Rieg-Baumhauer
//9/18/2016
//Question #1 on Project Euler

# include <stdio.h>
# include <stdlib.h>

int main(){
  int runs = 1000;
  printf("The sum of the multiples of %d is %d\n", runs, runner(runs));
}

int runner(int upper){
  int i;
  int sum = 0;
  for(i=0; i<upper; i++){
    if(multipler(i, 3))
      sum+=i;
    else if(multipler(i,5))
      sum+=i;
  }
  return sum;
}

//if a =6, b = 2, result is true, 1, because 6/2 is int

int multipler(int a, int b){ // a is the big one b is the tryer
  int hold = a/b;
  if((hold*b) == a){
    //printf("%d%d", a, b);
    return 1;
  }
  return 0;
}
