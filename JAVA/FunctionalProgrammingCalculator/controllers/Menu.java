package FunctionalProgrammingCalculator.controllers;

import FunctionalProgrammingCalculator.services.CalculatorService;

import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;

public class Menu {

    public static final String HOW_MANY_NUMBERS_YOU_WANT_TO_ENTER = "How many numbers you want to enter?";
    public static final String SEE_YOU_NEXT_TIME = "See you next time!";
    public static final String WRONG_OPTION_TRY_AGAIN = "Wrong option, try again";
    Scanner sc = new Scanner(System.in);
    Logger logger = Logger.getLogger(CalculatorService.class.getSimpleName());

    private CalculatorService calculator;

    public void start() {
        int selection;

        do {
            selection = getSelection();

            switch (selection) {
                case 1 -> {
                    logger.log(Level.INFO, HOW_MANY_NUMBERS_YOU_WANT_TO_ENTER);
                    int numSize = sc.nextInt();
                    this.calculator = new CalculatorService(numSize);
                    this.calculator.addNumbers();
                }
                case 2 -> this.calculator.addition();
                case 3 -> this.calculator.subtraction();
                case 4 -> this.calculator.multiplication();
                case 5 -> this.calculator.division();
                case 6 -> this.calculator.remainder();
                case 7 -> logger.log(Level.INFO, SEE_YOU_NEXT_TIME);
                default -> logger.log(Level.INFO, WRONG_OPTION_TRY_AGAIN);
            }
        } while (selection != 7);
    }

    private int getSelection() {
        int selection;
        String calculatorOptions = """
                Welcome to your calculator, please select an option from below:\040
                1. Add numbers
                2. Addition
                3. Subtraction
                4. Multiplication
                5. Division
                6. Remainder
                7. Exit
                """;
        logger.log(Level.INFO, calculatorOptions);
        selection = sc.nextInt();
        return selection;
    }
}
