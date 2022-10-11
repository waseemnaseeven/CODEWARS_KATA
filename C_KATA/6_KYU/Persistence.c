/* Write a function, persistence, that takes in a positive parameter num and
returns its multiplicative persistence, which is the number of times you must multiply
the digits in num until you reach a single digit. */

// Exemple : 39 = 3*9 = 27 = 2*7 = 14 = 1*4 = 4. result = 4.

// Using recursivity
int persistence(int n)
{

  int   num = 1; // 1 car > à 0

  if (n < 10)
  {
    return n; // return the single digit we reach
  }

  while (n > 0)
  {
    num *= n % 10; // on prend le reste de n, on multiplie et on l'affecte à num
    n/= 10;
  }

  return (1 + persistence(num));

}