using System.Reflection;

namespace Calculator
{

	using System;

	public class CalcEngine
	{
		//
		// Operation Constants.
		//
		public enum Operator:int
		{
			eUnknown = 0,
			eAdd = 1,
			eSubtract = 2,
			eMultiply = 3,
			eDivide = 4,
			eExtent = 5,
			eSqRoot = 6,
			eRev = 7,
			eSq = 8,
			eFact = 9,
			eCubRoot = 10,
			eAbc = 11
		}

		//
		// Module-Level Constants
		//

		private static double negativeConverter = -1;
		// TODO: Upgrade the version number to 3.0.1.1
		private static string versionInfo = "Calculator v2.0.1.1";

		//
		// Module-level Variables.
		//
	
		private static double numericAnswer;
		private static string stringAnswer;
		private static Operator calcOperation;
		private static double firstNumber;
		private static double secondNumber;
		private static bool secondNumberAdded;
		private static bool decimalAdded;
		private static long factNumber;
 
		//
		// Class Constructor.
		//

		public CalcEngine ()
		{
			decimalAdded = false;
			secondNumberAdded = false;
		}

		//
		// Returns the custom version string to the caller.
		//

		public static string GetVersion ()
		{
			return (versionInfo);
		}
		//
		// Called when the Date key is pressed.
		//

		public static string GetDate ()
		{
			DateTime curDate = new DateTime();
			curDate = DateTime.Now;

			stringAnswer = String.Concat (curDate.ToShortDateString(), " ", curDate.ToLongTimeString());

			return (stringAnswer);
		}

		//
		// Called when a number key is pressed on the keypad.
		//

		public static string CalcNumber (string KeyNumber)
		{
			stringAnswer = stringAnswer + KeyNumber;
			return (stringAnswer);
		}

		//
		// Called when an operator is selected (+, -, *, /)
		//

		public static void CalcOperation (Operator calcOper)
		{
			if (stringAnswer != "" && !secondNumberAdded)
			{
				firstNumber = System.Convert.ToDouble(stringAnswer);
				calcOperation = calcOper;
				stringAnswer = "";
				decimalAdded = false;
			}
		}

		//
		// Called when the +/- key is pressed.
		//

		public static string CalcSign ()
		{
			double numHold;

			if (stringAnswer != "")
			{
				numHold = System.Convert.ToDouble (stringAnswer);
				stringAnswer = System.Convert.ToString(numHold * negativeConverter);
			}
		
			return (stringAnswer);
		}

		//
		// Called when the . key is pressed.
		//

		public static string CalcDecimal ()
		{
			if (!decimalAdded && !secondNumberAdded)
			{
				if (stringAnswer != "")
					stringAnswer = stringAnswer + ",";
				else
					stringAnswer = "0,";

				decimalAdded = true;
			}

			return (stringAnswer);
		}

		//
		// Called when = is pressed.
		//

		public static string CalcEqual ()
		{
			bool validEquation = false;

			if (stringAnswer != "")
			{
				secondNumber = System.Convert.ToDouble (stringAnswer);
				secondNumberAdded = true;

				switch (calcOperation)
				{
					case Operator.eUnknown:
						validEquation = false;
						break;

					case Operator.eAdd:
						numericAnswer = firstNumber + secondNumber;
						validEquation = true;
						break;

					case Operator.eSubtract:
						numericAnswer = firstNumber - secondNumber;
						validEquation = true;
						break;

					case Operator.eMultiply:
						numericAnswer = firstNumber * secondNumber;
						validEquation = true;
						break;

					case Operator.eDivide:
						numericAnswer = firstNumber / secondNumber;
						validEquation = true;
						break;

					case Operator.eExtent:
						numericAnswer = Math.Pow(firstNumber, secondNumber);
						validEquation = true;
						break;


					//case Operator.eSqRoot:
					//	numericAnswer = Math.Sqrt(firstNumber);
					//	validEquation = true;
					//	break;


					default:
						validEquation = false;
						break;
				}

				if (validEquation)
					stringAnswer = System.Convert.ToString (numericAnswer);
			}
			
			return (stringAnswer);
		}

		//
		// Resets the various module-level variables for the next calculation.
		//

		public static void CalcReset ()
		{
			numericAnswer = 0;
			firstNumber = 0;
			secondNumber = 0;
			stringAnswer = "";
			calcOperation = Operator.eUnknown;
			decimalAdded = false;
			secondNumberAdded = false;			
		}

        public static string SqRoot()
        {
            if (stringAnswer != "")
            {
                firstNumber = System.Convert.ToDouble(stringAnswer);
                numericAnswer = Math.Sqrt(firstNumber);
                stringAnswer = System.Convert.ToString(numericAnswer);
            }
            return (stringAnswer);
        }

		public static string Rev()
		{
			if (stringAnswer != "")
			{
				firstNumber = System.Convert.ToDouble(stringAnswer);
				numericAnswer = 1/firstNumber;
				stringAnswer = System.Convert.ToString(numericAnswer);
			}
			return (stringAnswer);
		}

		public static string Sq()
		{
			if (stringAnswer != "")
			{
				firstNumber = System.Convert.ToDouble(stringAnswer);
				numericAnswer = firstNumber * firstNumber;
				stringAnswer = System.Convert.ToString(numericAnswer);
			}
			return (stringAnswer);
		}

		public static string Factorial()
		{
			
			if (stringAnswer != "" && decimalAdded == false)
			{
				factNumber = long.Parse(stringAnswer);
				numericAnswer = fact(factNumber);
				stringAnswer = System.Convert.ToString(numericAnswer);

			}
			return (stringAnswer);
		}

		public static string cubRoot()
		{

			if (stringAnswer != "" /*&& decimalAdded == false*/)
			{
				firstNumber = System.Convert.ToDouble(stringAnswer);
				numericAnswer = Math.Pow(firstNumber, 1.0 / 3.0);
				stringAnswer = System.Convert.ToString(numericAnswer);
			}
			return (stringAnswer);
		}

		private static long fact(long x)
        {
			long result = 1;
			int i = 1;
			while(i<=x)
            {
				result = result * i;
				i++;
			}
			return result;
        }

		public static string abc(double a, double b, double c)
		{
			double disc = b * b - 4 * a * c;
			double x1;
			double x2;
			if(disc < 0)
            {
				return "Уравнение не имеет корней";
            }
			else if (disc == 0)
            {
				x1 = -b / (2 * a);
				return "x1 = x2 = " + x1.ToString();

			}
            else
            {
				x1 = Math.Round(((-b + Math.Sqrt(disc)) / (2 * a)),2);
				x2 = Math.Round(((-b - Math.Sqrt(disc)) / (2 * a)),2);
				return "x1 = " + x1.ToString() + ", x2 = " + x2.ToString();
            }
			
		}
	}
}