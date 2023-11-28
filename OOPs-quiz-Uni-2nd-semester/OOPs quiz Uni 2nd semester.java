 /* OOPS Quiz [2nd Semester]
   Question: 
   * Make a class named calculation power. 
   * The class should have the "main" class. The class should have the variable "x" of the type double, the value of x = 5.0
   * The class should have a method "power". 
   * The method should be static and return double
   * The method should recieve two parameters, first parameter should be "x" of the type double and the second should be "n" of type int.
   * Inside the body of the function following condition should be meet:
     1. If (n>1) then return x * power(x, n-1)
	 2. If (n<0) then return 1.0 / power(x, -n)
	 3. else return n == 0 ?  1.0 : x */

  // Source code:

  class Main powerCalculator 
  {
    double x = 5.0;
   
   public static double power(double x, int n)
   {
    
	if (x>1)
    {
	return x * power(x, n-1);}
    
    else if (x<0)
    {
     return 1.0 / power(x, -n);
    }
    
    else
    { 
     return n==0 ? 1.0 : x;
	} 
   }
  }   