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

Then, if you wanted to print out the age of a specific student, you'd need to use an if statement to check which student number it is:

```cpp
if (studentNumber == 1) {
    cout << student1Age;
} else if (studentNumber == 2) {
    cout << student2Age;
} else if (studentNumber == 3) {
    cout << student3Age;
}
// And so on...

```

As you can see, this approach quickly becomes cumbersome and inefficient as the number of students grows. You'd have to declare separate variables for each student and write lengthy if statements to access the right variable based on the student number.

This is where arrays come in handy. With an array, you can store all the student ages under a single variable name, like this:

```cpp
int studentAges[numStudents];

```

Here, `numStudents` is the number of students in the class. Now, instead of creating separate variables, you can store each student's age in the array using an index, starting from 0.

To access or modify a specific student's age, you can simply use the array indexing operator `[]` with the appropriate index. For example:

```cpp
cout << studentAges[studentNumber - 1];

```

This line will print the age of the student with the given `studentNumber`. Note that we subtract 1 from `studentNumber` because array indices start at 0.

Using arrays eliminates the need for lengthy if statements to access individual values. You can easily access or modify values using the array index, making your code more concise and efficient.

Moreover, arrays allow you to perform operations on multiple elements easily using loops. For example, you can calculate the average age of all students like this:

```cpp
int sum = 0;
for (int i = 0; i < numStudents; i++) {
    sum += studentAges[i];
}
double average = static_cast<double>(sum) / numStudents;

```

This code iterates over the array, adding up all the ages, and then calculates the average by dividing the sum by the number of students.

So, in summary, arrays provide a more organized, efficient, and flexible way to store and work with collections of related values compared to using separate variables and if statements. They simplify your code and enable you to perform operations on multiple elements easily using loops.

## Using a For Loop

A while loop repeats a block of code as long as a condition is true. In this program, we want the loop to keep running until the theater manager enters a negative number.

We can use a sentinel value to control the loop. A sentinel is a special value that signals the end of input. In this case, the sentinel is any negative number.

Here's how you can write the while loop:

```cpp
while (numStars >= 0) {
    totalStars += numStars;
    numPatrons++;

    cout << "Enter rating for featured movie: ";
    cin >> numStars;
}
```

The loop condition `numStars >= 0` checks if the entered rating is non-negative. As long as this condition is true, the loop keeps executing.

Inside the loop, we add the current `numStars` to the `totalStars` to keep a running total of all the ratings. We also increment `numPatrons` to count the number of patrons who have rated the movie.

At the end of each iteration, we prompt for the next rating. This is important because it allows the loop to continue with the next iteration or exit if a negative number is entered.

After the loop ends, we can calculate the average rating:

```cpp
if (numPatrons > 0) {
    averageStars = totalStars / numPatrons;
} else {
    averageStars = 0;
}
```

We first check if there were any patrons (`numPatrons > 0`). If so, we calculate the average by dividing `totalStars` by `numPatrons`. If there were no patrons, we set `averageStars` to 0 to avoid dividing by zero.

Finally, we display the average star rating.

So, the sentinel-controlled while loop allows us to keep accepting ratings until a special value (negative number) is entered, at which point the loop stops, and we can calculate and display the results.## Storing Multiple Values Under a Single Name Using Arrays

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

Then, if you wanted to print out the age of a specific student, you'd need to use an if statement to check which student number it is:

```cpp
if (studentNumber == 1) {
    cout << student1Age;
} else if (studentNumber == 2) {
    cout << student2Age;
} else if (studentNumber == 3) {
    cout << student3Age;
}
// And so on...

```

As you can see, this approach quickly becomes cumbersome and inefficient as the number of students grows. You'd have to declare separate variables for each student and write lengthy if statements to access the right variable based on the student number.

This is where arrays come in handy. With an array, you can store all the student ages under a single variable name, like this:

```cpp
int studentAges[numStudents];

```

Here, `numStudents` is the number of students in the class. Now, instead of creating separate variables, you can store each student's age in the array using an index, starting from 0.

To access or modify a specific student's age, you can simply use the array indexing operator `[]` with the appropriate index. For example:

```cpp
cout << studentAges[studentNumber - 1];

```

This line will print the age of the student with the given `studentNumber`. Note that we subtract 1 from `studentNumber` because array indices start at 0.

Using arrays eliminates the need for lengthy if statements to access individual values. You can easily access or modify values using the array index, making your code more concise and efficient.

Moreover, arrays allow you to perform operations on multiple elements easily using loops. For example, you can calculate the average age of all students like this:

```cpp
int sum = 0;
for (int i = 0; i < numStudents; i++) {
    sum += studentAges[i];
}
double average = static_cast<double>(sum) / numStudents;

```

This code iterates over the array, adding up all the ages, and then calculates the average by dividing the sum by the number of students.

So, in summary, arrays provide a more organized, efficient, and flexible way to store and work with collections of related values compared to using separate variables and if statements. They simplify your code and enable you to perform operations on multiple elements easily using loops.

