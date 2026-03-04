*This project has been created as part of the 42 curriculum by alaorden.*

*Este proyecto ha sido creado como parte del plan de estudios de 42 por alaorden.*

# Push_swap 

### Description
The **Push_swap** project  algorithm project: data must be sorted. You have at your disposal a set of integer values, two stacks (`stack_a` and `stack_b`), and a set of instructions to manipulate both stacks. 

The primary goal of this project is to write a program in C called `push_swap` which calculates and displays on the standard output the smallest program, made of Push_swap language instructions, that sorts the integers received as arguments. For this project, a **K-Sort** algorithm logic was implemented to ensure maximum efficiency for both 100 and 500 numbers, scoring within the top grading brackets.

### Instructions
#### Compilation
To compile the project, a `Makefile` is provided. It compiles the source files and the `libft` library.
- Run `make` to compile the `push_swap` executable.
- Run `make clean` to remove object files (`.o`).
- Run `make fclean` to remove object files and the executable.
- Run `make re` to recompile the entire project from scratch.

#### Execution
Run the program by passing a list of integers as arguments. The program will output the list of operations required to sort the stack.

```bash
# Example with a specific list of numbers
./push_swap 42 -10 99 0 5


Resources and References
To carry out this project and ensure its correct operation, I have relied on the following resources:

Artificial Intelligence (AI): An AI assistant (Gemini) was used as a support and tutoring tool. 

External Repositories: Several GitHub repositories from the 42 community were consulted for study purposes. 

Generate random numbers: https://push-swap42-visualizer.vercel.app/