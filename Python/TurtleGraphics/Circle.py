from turtle import *

bgcolor("black")
pensize(2)
speed(0)

for i in range(6):
    for colors in ["red","magenta","blue","cyan","green","yellow","white"]:
        color(colors)
        circle(75)
        left(10)

hideturtle()
exitonclick()
