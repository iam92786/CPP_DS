// Return a string array answer (1-indexed) where:
// - answer[i] == "Fizz" if i is divisible by 3.
// - answer[i] == "Buzz" if i is divisible by 5.
// - answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
// - answer[i] == i (as a string) if none of the above conditions are true.
// The returned array must be malloced, assume caller calls free(). Update returnSize with the size of returned array.
// Examples:
// n = 2 => ["1","2"]
// n = 3 => ["1","2","Fizz"]
// n = 5 => ["1","2","Fizz","4","Buzz"]
// n = 15 => ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]
#define ZERO 0
char** fizzBuzz(int n, int* returnSize) {

  int *ptr = (int*) malloc(sizeof(int)*n);
  if(ptr == NULL)
  {
    printf("malloc() : failed");
    return;
  }

  for(int i = 1; i <= n; i++)
  {
    if((i%3 == ZERO))   // 5%5 = 
    {
      if(i%5 == ZERO)
      {
        //FizzBuzz
        char *cptr = (char *) malloc(sizeof(char)*8);
        strcpy(cptr, "");
        ptr[i] = cptr;
        continue;
      }
      //Fizz
    }
    else if (i%5 == ZERO)
    {
      //Buzz
      continue;
    }
    else 
    {
      //Normal Number
    }
  }  
}


/*


*/
