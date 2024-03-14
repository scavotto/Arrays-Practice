# Linear Search: A Simple and Versatile Algorithm


## Introduction

Linear search finds an item in a list. It checks each element from start to end. This happens until the item is found or checked.

## Problem Scenario

To start, we have an array of valid items. Each item has a unique 3-digit ID number. The numbers are not in any particular order.

A customer submits an order with an item number. We need to check if it is a valid item. To do this, we use linear search on the array.

## Algorithm Steps

1. Start at the first element
    - We start at the first element of the array. We access the item number stored there. Then we equate it to the ordered item number.
2. Compare and move forward
    - If they are the same, the item is found. We can process the order with that item. The linear search is complete.
    - If not, we move to the next element. We repeat the compare step for that item. We iterate this process through the array. We conclude checking each item number one by one.
3. Handling invalid items
    - If no match is found, the item is invalid. The order cannot be fulfilled as submitted. The customer needs to be notified about it.

## Efficiency Considerations

Linear search is simple but can be slow. It may need to scan the entire array in worst case. The time grows linearly with the array size.

For small arrays, linear search works fine. But for large arrays, it becomes inefficient. Other search algorithms are faster for big data.

## Advantages

Despite this, linear search has advantages. It works on unsorted and unordered arrays. The array items can be in any order. This makes it versatile and easy to implement.

## Conclusion

In summary, linear search is a basic algorithm. It finds an item by scanning a list from start to end. While inefficient for large arrays, it's simple and flexible.
