import java.util.Scanner;

public class TipCalculator {
	public static void main(String[] args) {

		// Set up Scanner to take User Input
		Scanner input = new Scanner(System.in); 

		// Welcome Statement - Get Price
		System.out.println("This is a Tip Calculator. Please input the amount you are paying: ");
		double price = 0;
		price = input.nextDouble();

		// Get Tip Percentage
		System.out.println("Enter, as a decimal number, the percent tip you are paying (e.g. 15% is .15): ");
		double tip = 0;
		tip = input.nextDouble();

		// Make initial computations
		double tipTotal = 0;
		tipTotal = price * tip;

		// Print Tip Total
		System.out.println(tipTotal);

		// Figure out Split
		System.out.println("With how many people are you splitting the bill?: ");
		double split = 0;
		split = input.nextDouble();

		// More Computations
		double pricePerPersonSansTip = price / split ;
		double tipPerPersonSansPrice = tipTotal / split;

		System.out.println("Pay "+ pricePerPersonSansTip + " for the cost of your meal, plus " + tipPerPersonSansPrice + " in tip.");
		System.out.println("The total amount you have to pay on your own is " + (pricePerPersonSansTip + tipPerPersonSansPrice) + ".");
		System.out.println("The total cost of the bill is " + (price + tipTotal) + ".");




		







	}
}