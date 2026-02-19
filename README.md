*This project has been created as part of the 42 curriculum by bastalze.*

# push_swap

## Description
### Stage one - parcing
1. The program takes arguments as integers that get transformed into "stack a", where the first argument is at the top of the stack. The arguments get checked for validity in `is_valid` (see instructions - valid inputs) and get transformed in usable form with `ft_split` and/or `ft_atoi`.
2. The values get sorted into a doubly linked list (stack a).
3. With `ft_indexing` the numbers get indexed from smallest (1) to largest (amount of numbers). Every number gets compared to all the other numbers. Initially every number starts with the max index number, whenever the number it gets compared to is bigger the index gets lowered by one. At the same time there is a check for doubles.
4. If mallocation fails in any of the above processes the error message "Error" followed by a new line gets displayes on the standard error.
5. The list of numbers gets checked if it's already sorted with `is_sorted` in which chase the program stops.

### Stage two - sorting
I implemented the turk algorithm:
1. If the amount of numbers is less than 4 it gets immediately sorted - `sort_few`.
2. All but the three smallest numbers get pushed to stack b where it gets sorted into two chunks - all bigger than half on the bottom and all smaller than half on the top.
3. The remaining three numbers on stack a gets sorted with `sort_few`.
4. For every number on the stack b it finds a target - the smallest bigger number on stack a and if there is no bigger number, the smallest. Then the cost to top of both gets combinded to total cost. And whatever number on stack b has the smallest total cost gets chosen. First the chosen one gets rotated to top, then the corresponding target on stack a gets rotated to the top and then the top from stack b gets pushed to stack a. This process continues until stack b is empty.
5. In the end the smallest number in stack a gets rotated to the top so the whole list is sorted from smallest to biggest.

## Instrucions
Valid inputs are:
- "integers" as arguments, eg 3 56 -209 -1 0
- one argument with "integers" sepateted by spaces, eg "3 56 -209 -1 0"
In case of something going wrong (mallocation fail) the program displays the error message "Error" followed by a new line on the standard error.

## Resources

### References
- https://en.wikipedia.org/wiki/Algorithm
- https://en.wikipedia.org/wiki/Time_complexity
- https://m4nnb3ll.medium.com/my-journey-to-find-a-good-sorting-algorithm-for-the-push-swap-42-project-4a18bc38b474
- https://m4nnb3ll.medium.com/my-journey-to-find-a-good-sorting-algorithm-for-the-push-swap-42-project-4a18bc38b474
- https://www.pythonmorsels.com/standard-error/

### Peers
Kian as always answered all my questions, gave me advice on the startegy to tackle this project and helped me with debugging. Nils started at the same time so he helped me keep a good pace and was a great person to bounce of iideas of or share encountered pitfalls and tricks we found out on the way. Answers were also given by Anton.

### AI Usage Statement
I used Deepseek to answer questions I couldn'd answer by using a search engine.
