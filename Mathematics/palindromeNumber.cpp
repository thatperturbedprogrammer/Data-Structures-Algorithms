bool isPal(int n){
  int rev = 0;
  int temp = n;

  while(temp != 0){
    int ld = temp % 10;      // take last digit
    rev = rev * 10 + ld;    // reverse
    temp = temp / 10;    // remove last digit
  }
  
  return (rev == n);
}
