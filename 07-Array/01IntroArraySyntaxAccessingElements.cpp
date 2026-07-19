// Checklist:
// 1) Introduction to Arrays ✅
// 2) Syntax, accessing elements of Arrays ✅
// 3) Printing Output and Taking Input (In 02) ✅✅
// 4) Types of Arrays  (In 04) ✅✅✅
// 5) Size operator  (In 04) ✅✅✅
// 6) Memory allocation in array, address of array elements (In 04)✅✅✅
// 7) Linear Search (in 06) ✅✅✅✅
// 8) Basic problems





// # ================================
// # 1) Introduction to Arrays ✅
// # ================================

// # Array is a data structure used to store multiple values of the same data type.
// # It is also called a list because it stores a collection of similar types of data.
// # 
// # Instead of creating many separate variables:
// #
// # int a = 10;
// # int b = 20;
// # int c = 30;
// #
// # We can create one array that stores all values together:
// #
// # int arr[3] = {10,20,30};
// #
// # Here arr is an integer array that stores 3 integer values.
// #
// # We can also skip giving the size of an array if we assign values immediately:
// #
// # int arr[] = {22,33,12,23};
// #
// # In this case, the compiler automatically calculates the size.
// # Total values = 4
// # So internally it becomes:
// #
// # int arr[4] = {22,33,12,23};
// #
// # But this is not allowed:
// #
// # int arr[]; ❌
// #
// # Because the compiler does not know how many memory boxes to create.
// # Size can only be skipped when values are assigned during declaration.
// #
// # Array stores elements in continuous memory locations.
// # Each element gets its own box of memory with the same size.
// #
// # Example:
// #
// # int arr[7];
// #
// # Creates 7 consecutive boxes.
// # If datatype is int, each box has size 4 bytes.
// #
// # Memory:
// #
// # arr[0]  arr[1]  arr[2]  arr[3]  arr[4]  arr[5]  arr[6]
// #  4B      4B      4B      4B      4B      4B      4B




// # ================================
// # 2) Syntax and Declaration ✅
// # ================================

// # Normal variable:
// int x;          # Declaration (creates one memory box of size 4 bytes)
// x = 5;          # Initialization (assigning value)


// # Array declaration:
// int x[7];

// # Creates an integer array named x with size 7.
// # It creates 7 memory boxes where each box stores an integer value.


// # Declaration + Initialization:
// int x[8] = {23,22,1,3,0,2,99};

// # Creates an array of size 8 and stores values inside it.
// #
// # Index positions:
// #
// # x[0] = 23
// # x[1] = 22
// # x[2] = 1
// # x[3] = 3
// # x[4] = 0
// # x[5] = 2
// # x[6] = 99
// # x[7] = empty


// # Array Update:
// x[0] = 88;

// # Changes the value stored at index 0.
// #
// # Before:
// # x[0] = 23
// # After:
// # x[0] = 88






// # ================================
// # 3) Accessing Elements from Array ✅
// # ================================

// int x[7] = {10,20,30,40,50,60,70};

// # Array indexing always starts from 0.
// #
// # Index:
// # x[0] = 10
// # x[1] = 20
// # x[2] = 30
// # x[3] = 40
// # x[4] = 50
// # x[5] = 60
// # x[6] = 70


// cout << x[2];

// # Accesses and prints the value stored at index number 2.
// #
// # Output:
// # 30


// # Important:
// # Array size = number of elements it can store.
// # Index range = 0 to size-1.
// #
// # Example:
// # int arr[5];
// #
// # Size = 5
// # Valid indexes:
// # 0,1,2,3,4
// #
// # Invalid:
// # arr[5]  ❌ (out of range)