// Exercise 3.17
//
// An alternate rule for translating if statements into goto code is:
//
//     t = test-expr;
//     if (t) goto true;
//     else-statement
//     goto done;
//     true:
//     then-statement
//     done:
//
// 1. Rewrite the goto version of absdiff_se based on this alternate rule.
// 2. Can you think of any reasons for choosing one rule over the other?
//
// Reference code from the chapter (Figure 3.16):
//
//     (a) Original C code
//
//     long lt_cnt = 0;
//     long ge_cnt = 0;
//     long absdiff_se(long x, long y)
//     {
//         long result;
//         if (x < y) {
//             lt_cnt++;
//             result = y - x;
//         }
//         else {
//             ge_cnt++;
//             result = x - y;
//         }
//         return result;
//     }
//
//     (b) Equivalent goto version
//
//     long gotodiff_se(long x, long y)
//     {
//         long result;
//         if (x >= y)
//             goto x_ge_y;
//         lt_cnt++;
//         result = y - x;
//         return result;
//     x_ge_y:
//         ge_cnt++;
//         result = x - y;
//         return result;
//     }

long absdiff_se_goto(long x, long y)
{
    /* TODO */
}
