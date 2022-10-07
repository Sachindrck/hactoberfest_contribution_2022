import turtle

flag = turtle.Turtle()

flag.speed(5)
flag.pensize(2)
flag.color("#0000FF")

def draw(x,y):
    flag.penup()
    flag.goto(x,y)
    flag.pendown()

#Ashok chakra
for i in range(24):
    flag.forward(80)
    flag.backward(80)
    flag.left(15)
draw(0,-80)

flag.circle(80,360)

#gree rectangle
flag.color("green")
flag.begin_fill()

flag.forward(350)
flag.backward(700)
flag.right(90)
flag.forward(200)
flag.left(90)
flag.forward(700)
flag.left(90)
flag.forward(200)
flag.left(90)

flag.end_fill()

#orange rectangle
flag.color("orange")
draw(-350,80)

flag.begin_fill()

flag.right(180)
flag.forward(700)
flag.left(90)
flag.forward(200)
flag.left(90)
flag.forward(700)
flag.left(90)
flag.forward(200)

flag.end_fill()

turtle.done()
