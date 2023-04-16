/*
Brut force technique :
check with each character with each other
Linear scan for every single substring = n * n^2 -> Time = O(n^3)
To improve:
keep a middle character and expand outward and check if they palindrome
Edge case : It does not work for even palindromes
fix it in code
*/
