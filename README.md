# Fibonacci Benchmark
This repository is a comparison for both the iterative and recursive method of the fibonacci sequence.
## Iterative and Recursive
The Iterative Method is written in C as follows :
```c
int fibonacciIterative(int N){
    int F0 = 0;
    int F1 = 1;
    int F2;

    if (N == 0){
        return F0;
    }
    else if (N == 1){
        return F1;
    } 
    else {
        for(int i=2; i <= N; i++){
            F2 = F0 + F1;
            F0 = F1;
            F1 = F2;
        }
        return F2;
    }
}
```
The Recursive Method is written in C as follows :
```c
int fibonacciRecursive(int N){
    if (N == 0){
        return 0;
    }
    else if (N == 1){
        return 1;
    }
    else{
        return fibonacciRecursive(N-1) + fibonacciRecursive(N-2);
    }
}
```
## How To Run
To execute the codes, use these commands in the terminal :
```sh
gcc -o mylib.o -c mylib/mylib.c
gcc -o main.exe main.c mylib.o
./main.exe
```
For the time complexity, use these commands :
```sh
gcc -o mylib.o -c mylib/mylib.c  
gcc -o main_b_time_iterative.exe main_b_time_iterative.c mylib.o
./main_b_time_iterative.exe
```
or
```sh
gcc -o mylib.o -c mylib/mylib.c
gcc -o main_b_time_recursive.exe main_b_time_recursive.c mylib.o
./main_b_time_recursive.exe
```

For the space complexity, use these commands :
```sh
gcc -o main_b_space_recursive.exe main_b_space_recursive.c mylib.o
./main_b_space_recursive.exe

gcc -o main_b_space_iterative.exe main_b_space_iterative.c mylib.o
./main_b_space_iterative.exe
```

## Results
![result](https://user-images.githubusercontent.com/114073275/204583779-df427e67-4631-479f-9d99-e94a4eff767a.png)

Time Complexity

![time](https://user-images.githubusercontent.com/114073275/204584622-7e050a3f-49ce-4f83-bf8a-aa62d280b812.png)

Both the recursive method and the iterative method are done in similiar amounts of time.

Space Complexity

![iterative space](https://user-images.githubusercontent.com/114073275/204585320-708909a0-acd2-4604-993a-43391a362e0e.png)
![recursive space](https://user-images.githubusercontent.com/114073275/204585323-e2d8b129-7668-499d-8acc-72b6e0cc6033.png)

However, the recursive method requires more space as seen in the pictures above, the iterative method only uses about 0.3 Mb, whilist the recursive method uses about
as much as 0.9 Mb.

## Conclusion
Both methods are an effective way to produce the fibonacci sequence. However, the recursive method uses a lot more space in comparison to the iterative method.
