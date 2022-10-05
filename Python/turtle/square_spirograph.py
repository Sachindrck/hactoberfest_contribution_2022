import turtle

turtle.speed(0)
turtle.bgcolor("black")

for i in range(5):
    for colours in ["red", "magenta", "blue", "cyan", "green", "yellow", "white"]:
        turtle.color(colours)
        turtle.width(2)
        turtle.pen(10)
        turtle.left(12)
        turtle.forward(200)
        turtle.left(90)
        turtle.forward(200)
        turtle.left(90)
        turtle.forward(200)
        turtle.left(90)
        turtle.forward(200)
        turtle.left(90)

turtle.left(6)

for i in range(5):
    for colours in ["red", "magenta", "blue", "cyan", "green", "yellow", "white"]:
        turtle.color(colours)
        turtle.width(2)
        turtle.pen(10)
        turtle.left(12)
        turtle.forward(200)
        turtle.left(90)
        turtle.forward(200)
        turtle.left(90)
        turtle.forward(200)
        turtle.left(90)
        turtle.forward(200)
        turtle.left(90)


turtle.hideturtle()
turtle.done()
