import turtle

from random import randint
t = turtle.Turtle()
s = turtle.Screen()
s.bgcolor("black")
#color = ("red","blue","yellow","green","orange","purple")
t.pencolor("white")
t.speed(100)

#stoping the while looop
c = 0
# 2nd pattern
d = 0

while True:
    
    for i in range(4):
        t.forward(80)
        t.right(120)#90
    t.right(25)#15
    c += 1
    if c >= 390/20:#15
        t.forward(50)
        c = 0
        d += 1
        if d >= 18:#12
            break

t.hideturtle()


turtle.done()
print("pikaaa p......")


