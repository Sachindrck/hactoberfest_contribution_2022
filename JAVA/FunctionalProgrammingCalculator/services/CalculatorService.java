package FunctionalProgrammingCalculator.services;

import FunctionalProgrammingCalculator.controllers.Operations;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;

public class CalculatorService implements Operations {
    Scanner sc = new Scanner(System.in);
    Logger logger = Logger.getLogger(CalculatorService.class.getSimpleName());

    private final List<Double> calculatorList = new ArrayList<>();
    private final int calculatorListSize;

    public CalculatorService(int calculatorListSize) {
        this.calculatorListSize = calculatorListSize;
    }

    public void addNumbers() {
        for (int i = 0; i < this.calculatorListSize; i++) {
            logger.log(Level.INFO, "Enter the number " + (i + 1));
            double num = sc.nextDouble();
            this.calculatorList.add(num);
        }
    }

    @Override
    public void addition() {
        logger.log(Level.INFO, "Addition result: " + this.calculatorList.stream()
                .reduce(0.0, Double::sum));
    }

    @Override
    public void subtraction() {
        logger.log(Level.INFO, "Subtraction result: " + this.calculatorList.stream()
                .reduce((x, y) -> x - y)
                .get());
    }

    @Override
    public void multiplication() {
        logger.log(Level.INFO, "Multiplication result: " + this.calculatorList.stream()
                .reduce(1.0, (x, y) -> x * y));
    }

    @Override
    public void division() {
        if (this.calculatorList.stream().anyMatch(x -> x == 0)) {
            logger.log(Level.WARNING, "Error, cannot divide by zero");
        }
        logger.log(Level.INFO, "Division result: " + this.calculatorList.stream()
                .filter(x -> x != 0).reduce((x, y) -> x / y)
                .get());
    }

    @Override
    public void remainder() {
        logger.log(Level.INFO, "Remainder result: " + this.calculatorList.stream()
                .reduce((x, y) -> x % y)
                .get());
    }
}
