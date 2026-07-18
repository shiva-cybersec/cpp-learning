// Topic 1:
// Scope of Variables = The area where a variable can be used.

// A variable declared inside { } can be used only inside those braces.
// Once we come outside the braces, that variable no longer exists
// and cannot be accessed.

// Types of Variables:

// 1. Local Variable
// A variable declared inside a function or block { }.
// It can be used only inside that function or block.
// It is created when the function starts and destroyed when the function ends.
// Local variable has higher priority then global variable

// 2. Global Variable
// A variable declared outside all functions.
// It can be accessed by all functions in the program.
// It is created when the program starts and destroyed when the program ends.
// It has lesser priority than local variable


// Global Variable
int x = 10;      // Can be used by all functions.

// Local Variable
int main() {
    int y = 20;  // Can be used only inside main().
}


// Topic 2:
// Default Values of Formal Parameters (or formal Arguments)

// If a formal parameter is initialized in the function definition,
// the initialized value is called its default value (default formal argument).

// If an actual argument is passed during the function call,
// it replaces the default value.




