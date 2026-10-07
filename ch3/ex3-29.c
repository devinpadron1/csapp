// Exercise 3.29
//
// Executing continue in C jumps to the end of the current loop iteration.
// Consider:
//
//     /* Sum even numbers between 0 and 9. */
//     long sum = 0;
//     long i;
//
//     for (i = 0; i < 10; i++) {
//         if (i & 1)
//             continue;
//         sum += i;
//     }
//
// 1. What would result from naively translating this for loop into a while
//    loop?
// 2. What would be wrong with that code?
// 3. Replace the continue statement with a goto so the while loop correctly
//    duplicates the behavior of the for loop.

/* TODO: write both versions here */
