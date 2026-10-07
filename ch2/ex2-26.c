/* Exercise 2.26
 *
 * You are given the assignment of writing a function that determines whether
 * one string is longer than another. You decide to make use of the string
 * library function strlen having the following declaration:
 *
 *     size_t strlen(const char *s);
 *
 * Below is your first attempt at the function. When you test this on some
 * sample data, things do not seem to work quite right. You investigate
 * further and determine that, when compiled as a 32-bit program, data type
 * size_t is defined (via typedef) in header file stdio.h to be unsigned.
 *
 * A. For what cases will this function produce an incorrect result?
 *    TODO
 * B. Explain how this incorrect result comes about.
 *    TODO
 * C. Show how to fix the code so that it will work reliably.
 *    TODO (below)
 */

#include <string.h>

/* Determine whether string s is longer than string t */
/* WARNING: This function is buggy */
int strlonger(char *s, char *t) {
    return strlen(s) - strlen(t) > 0;
}

/* TODO: fixed version */
