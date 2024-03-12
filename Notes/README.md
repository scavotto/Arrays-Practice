# Arrays - Part 1

## Storing Multiple Values Under a Single Name Using Arrays

In programming, an array stores multiple values under one name, like grouping variables. Without arrays, each value requires a separate variable. 

For instance:

```cpp
student-name1 = "Jackson"
student-name2 = "Deon"
student-name3 = "Kathryn"
```

However, as the list grows, managing individual variables becomes impractical. Arrays solve this problem.

With an array, you declare a single variable holding multiple values. 

For example:

```cpp
student-names = ["Jackson", "Deon", "Kathryn"]
```

Each element in the array gets a unique index, starting from 0. "Jackson" is at index 0, "Deon" at index 1, and "Kathryn" at index 2.

Arrays provide:

1. **Organization**: They group related data elements under one name, improving code structure.
2. **Efficient access**: Elements can be accessed using their index, allowing easy retrieval or modification.
3. **Iteration**: Arrays integrate well with loops for efficient operations on multiple elements.
4. **Storing and manipulating data**: Useful for storing scores, coordinates, or characters.
5. **Passing data**: Arrays can be passed to functions, simplifying data transfer.

Example:

```cpp
student-names = ["Jackson", "Deon", "Kathryn"]

# Accessing individual elements
print(student-names[0]) # Output: Jackson
print(student-names[2]) # Output: Kathryn

# Iterating over the array
for name in student-names:
    print(name)
```

Arrays are crucial in programming, allowing for efficient data storage and manipulation.

## Populating a List

To populate an array:

1. **Declare an Array**

```cpp
int studentAges[5]; // Array of 5 integers
```

Here, `studentAges` can store 5 integer values.

2. **Initialize the Array**

```cpp
int studentAges[5] = {18, 20, 19, 21, 22}; // Initialized with values
```

Values are assigned to array elements in order, starting from index 0.

3. **Access Array Elements**

```cpp
cout << studentAges[2]; // Output: 19
```

Retrieve specific elements using their index.

4. **Modify Array Elements**

```cpp
studentAges[3] = 23; // Change value at index 3 to 23
```

Assign a new value to an element using its index.

5. **Populate Array Using a Loop**

Use a loop to input values dynamically:

```cpp
for (int i = 0; i < 5; i++) {

cout << "Enter age for student " << i + 1 << ": ";

cin >> studentAges[i];

}
```

Iterate over the array, prompting user input for each element.