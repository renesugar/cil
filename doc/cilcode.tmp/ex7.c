int main() {
  enum { 
     FIVE = 5, 
     SIX, SEVEN, 
     FOUR = FIVE - 1, 
     EIGHT = sizeof(double)
  } x = FIVE;
 return x;
}

