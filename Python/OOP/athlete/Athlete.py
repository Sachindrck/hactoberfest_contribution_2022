class Athlete:
    __OBESITY = "Obesity"
    __OVER_WEIGHT = "Overweight"
    __NORMAL_WEIGHT = "Normal weight"
    __UNDER_WEIGHT = "Underweight"

    def __init__(self, name, age, sport, weight, height):
        self.__name = name
        self.__age = age
        self.__sport = sport
        self.__weight = weight
        self.__height = height

    def __str__(self):
        return (f"Name: {self.__name}\n"
                f"Age: {self.__age}\n"
                f"Sport: {self.__sport}\n"
                f"Height: {self.__height}\n"
                f"Weight: {self.__weight}\n")

    def body_mass_index(self):
        result = self.__body_mass_index_formula()
        self.__body_mass_index_categories(result)

    @classmethod
    def __body_mass_index_categories(cls, result):
        if result <= 18.4:
            print(f"BMI: {cls.__UNDER_WEIGHT}")
        elif 18.5 <= result <= 24.9:
            print(f"BMI: {cls.__NORMAL_WEIGHT}")
        elif 25 <= result <= 29.9:
            print(f"BMI: {cls.__OVER_WEIGHT}")
        else:
            print(f"BMI: {cls.__OBESITY}")

    def __body_mass_index_formula(self):
        result = round(self.__weight / ((self.__height / 100) * 2), 2)
        print(f"BMI result: {result}")
        return result

    def show_data(self):
        print("{}".format(self.__str__()))
