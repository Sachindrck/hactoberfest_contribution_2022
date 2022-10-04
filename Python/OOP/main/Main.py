from hactoberfest_contribution_2022.Python.OOP.athlete.Athlete import Athlete
from hactoberfest_contribution_2022.Python.OOP.basketball_player.Basketball_player import BasketballPlayer
from hactoberfest_contribution_2022.Python.OOP.soccer_player.Soccer_player import SoccerPlayer

athlete = Athlete("Juan", 26, "Basketball", 85, 181)
athlete.show_data()
athlete.body_mass_index()
print()
basketball_player = BasketballPlayer("Michael", 28, "Basketball", 94, 198, "Guard", "Bulls")
basketball_player.show_data()
basketball_player.body_mass_index()
print()
soccerPlayer = SoccerPlayer("Cristiano", 7, "Soccer", 84, 185, "Forward", "Manchester United")
soccerPlayer.show_data()
soccerPlayer.body_mass_index()
