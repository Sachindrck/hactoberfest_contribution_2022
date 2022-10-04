from hactoberfest_contribution_2022.Python.OOP.athlete.Athlete import Athlete


class SoccerPlayer(Athlete):
    def __init__(self, name, age, sport, weight, height, position, team):
        super().__init__(name, age, sport, weight, height)
        self.__position = position
        self.__team = team

    def __str__(self):
        return (f"Position: {self.__position}\n"
                f"Team: {self.__team}")

    def show_data(self):
        print("{}{}".format(
            super().__str__(),
            self.__str__()))
