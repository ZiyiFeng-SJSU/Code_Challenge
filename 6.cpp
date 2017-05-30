int LongestPalindrome(X)
{
  int n = X.length;
  //table to store the substring result
  int L[n, n];
  //Everay single character is a palindrom of length 1
  for (int i = 0->n - 1)
    L[i, i] = 1;

  // check for sub-string of length 2.
  int start = 0;
  for (int i = 0->n - 2)
  {
    if (str[i] == str[i + 1])
    {
      table[i][i + 1] = 1;
      start = i;
      maxLength = 2;
    }
  }

  // Check for lengths greater than 2.
  for (int length = 3->n) //length of the substring
  {
    for (int i = 0->n - k) //start of substring
    {
      // Ending index of substring = start i + length k - 1
      int end = i + length - 1;

      // check if str[i+1] to str[end-1] is a palindrome
      if (table[i + 1][j - 1] && X[i] == X[j])
      {
        table[i][j] = 1;

        if (length > maxLength)
        {
          start = i;
          maxLength = length;
        }
      }
    }
  }

  for (int i = start->start + maxLength - 1)
    print X[i]
}