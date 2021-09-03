# C++

Followed [this](https://www.youtube.com/watch?v=vLnPwxZdW4Y) video

## New things I'm picking up after the video

- Name of the array is a pointer to the first element in the array

  cout << myArray; -> Will print the address of the first element of myArray
  
  cout << &myArray; -> Will also print the address of the first element of myArray (this doesn't apply when a pointer variable is being used. Say we have int\*p = &age; &p will give the address of the *variable p* and not the address of variable age. p will give the memory address of the variable age. Whereas, in case of an array name being a pointer, &myArray and myArray, both will give the memory address of the first element)
  
  cout << \*myArray; -> Will print the first element of myArray
  
  \*myArray + 1  -> This will add 1 to the first element of myArray
  
  \*(myArray + 1) -> This will give the second element of myArray 

- Can use printf and scanf in C++

    int a;
    
    long b;
    
    char c;
    
    float d;
    
    double e;
    
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    
    printf("%d\n", a);
    
    printf("%ld\n", b);
    
    printf("%c\n", c);
    
    printf("%f\n", d);
    
    printf("%lf\n", e);
    
