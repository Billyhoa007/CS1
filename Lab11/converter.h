 /*This program converts any from base 10 to base 2 and the other way around
 * Bill Hoag 
 * 6/30/2013
 */

#ifdef CONVERTER_H_BILL
#define COVERTER_H_BILL


 bool getinput(int&, int&, int&);
 /*Precondition: input the number you would like to change
  *  * then input the base you would like to convert
  *   * then input the base you would like to convert to
  *    * Postconditions: takes the values the user inputs and inputs the values
  *     * into the equations convert_to_base
  *      */

 int convert_to_base(const int&, const int&, const int&);
 /*Precondtion: takes the values input from the equations from
  *  * the function get input.
  *   * Postconditions: takes the value inputed from getinput and
  *    * and converts it into the right base
  */
#endif
