from tkinter import *
from tkinter import messagebox

screen = Tk()
screen.title('Tic Tak Toe')

def disable_all():
    button1.config(state='disable')
    button2.config(state='disable')
    button3.config(state='disable')
    button4.config(state='disable')
    button5.config(state='disable')
    button6.config(state='disable')
    button7.config(state='disable')
    button8.config(state='disable')
    button9.config(state='disable')

def check_win():

    global winner
    winner = False
    #x cha tam zzamm
    #rows
    if button1['text'] +button2['text'] + button3['text'] == 'xxx':
        button1.config(bg='red')
        button2.config(bg='red')
        button3.config(bg='red')
        winner - True
        messagebox.showinfo('Tik Tak Toe','x jitlaa babu')
        dissable_all()
    elif button4['text'] +button5['text'] + button6['text'] == 'xxx':
        button4.config(bg='red')
        button5.config(bg='red')
        button6.config(bg='red')
        winner - True
        messagebox.showinfo('Tik Tak Toe','x jitlaa babu')
        dissable_all()
    elif button7['text'] +button8['text'] + button9['text'] == 'xxx':
        button7.config(bg='red')
        button8.config(bg='red')
        button9.config(bg='red')
        winner - True
        messagebox.showinfo('Tik Tak Toe','x jitlaa babu')
        dissable_all()
    #col
    elif button1['text'] +button4['text'] + button7['text'] == 'xxx':
        button1.config(bg='red')
        button4.config(bg='red')
        button7.config(bg='red')
        winner - True
        messagebox.showinfo('Tik Tak Toe','x jitlaa babu')
        dissable_all()
    elif button2['text'] +button5['text'] + button8['text'] == 'xxx':
        button2.config(bg='red')
        button5.config(bg='red')
        button8.config(bg='red')
        winner - True
        messagebox.showinfo('Tik Tak Toe','x jitlaa babu')
        dissable_all()
    elif button3['text'] +button6['text'] + button9['text'] == 'xxx':
        button3.config(bg='red')
        button6.config(bg='red')
        button9.config(bg='red')
        winner - True
        messagebox.showinfo('Tik Tak Toe','x jitlaa babu')
        dissable_all()
    #diagonal
    elif button1['text'] +button5['text'] + button9['text'] == 'ooo':
        button1.config(bg='red')
        button5.config(bg='red')
        button9.config(bg='red')
        winner - True
        messagebox.showinfo('Tik Tak Toe','o jitlaa babu')
        dissable_all()
    elif button3['text'] +button5['text'] + button7['text'] == 'ooo':
        button3.config(bg='red')
        button5.config(bg='red')
        button7.config(bg='red')
        winner - True
        messagebox.showinfo('Tik Tak Toe','o jitlaa babu')
        dissable_all()

    #O sathi kam suru
    elif button1['text'] +button2['text'] + button3['text'] == 'ooo':
        button1.config(bg='red')
        button2.config(bg='red')
        button3.config(bg='red')
        winner - True
        messagebox.showinfo('Tik Tak Toe','0 jitlaa babu')
        dissable_all()
    elif button4['text'] +button5['text'] + button6['text'] == 'ooo':
        button4.config(bg='red')
        button5.config(bg='red')
        button6.config(bg='red')
        winner - True
        messagebox.showinfo('Tik Tak Toe','o jitlaa babu')
        dissable_all()
    elif button7['text'] +button8['text'] + button9['text'] == 'ooo':
        button7.config(bg='red')
        button8.config(bg='red')
        button9.config(bg='red')
        winner - True
        messagebox.showinfo('Tik Tak Toe','o jitlaa babu')
        dissable_all()
    #col
    elif button1['text'] +button4['text'] + button7['text'] == 'ooo':
        button1.config(bg='red')
        button4.config(bg='red')
        button7.config(bg='red')
        winner - True
        messagebox.showinfo('Tik Tak Toe','o jitlaa babu')
        dissable_all()
    elif button2['text'] +button5['text'] + button8['text'] == 'ooo':
        button2.config(bg='red')
        button5.config(bg='red')
        button8.config(bg='red')
        winner - True
        messagebox.showinfo('Tik Tak Toe','o jitlaa babu')
        dissable_all()
    elif button3['text'] +button6['text'] + button9['text'] == 'ooo':
        button3.config(bg='red')
        button6.config(bg='red')
        button9.config(bg='red')
        winner - True
        messagebox.showinfo('Tik Tak Toe','o jitlaa babu')
        dissable_all()
    #diagonal
    elif button1['text'] +button5['text'] + button9['text'] == 'ooo':
        button1.config(bg='red')
        button5.config(bg='red')
        button9.config(bg='red')
        winner - True
        messagebox.showinfo('Tik Tak Toe','o jitlaa babu')
        dissable_all()
    elif button3['text'] +button5['text'] + button7['text'] == 'ooo':
        button3.config(bg='red')
        button5.config(bg='red')
        button7.config(bg='red')
        winner - True
        messagebox.showinfo('Tik Tak Toe','o jitlaa babu')
        dissable_all()
    
    if count == 9 and winner == False:
        messagebox.showinfo('Tik Tak Toe','tie')
        disable_all
    

def b_click(b):
    global count ,clicked
    
    if b['text'] == ' ' and clicked == True:
        b['text'] = 'x'
        clicked = False
        count = count + 1
        check_win()
    elif b['text'] == ' ' and clicked == False:
        b['text'] = 'o'
        clicked = True
        count = count + 1
        check_win()
    else:
        messagebox.showerror('Addhich bharalay be te','already filled')
        
count = 0
clicked = True

button1 = Button(screen, text=' ' , font=('TIMES NEW ROMAN',20),height= 3 , width= 6 , bg='silver',command=lambda : b_click(button1))
button2 = Button(screen, text=' ' , font=('TIMES NEW ROMAN',20),height= 3 , width= 6 , bg='silver',command=lambda : b_click(button2))
button3 = Button(screen, text=' ' , font=('TIMES NEW ROMAN',20),height= 3 , width= 6 , bg='silver',command=lambda : b_click(button3))

button4 = Button(screen, text=' ' , font=('TIMES NEW ROMAN',20),height= 3 , width= 6 , bg='silver',command=lambda : b_click(button4))
button5 = Button(screen, text=' ' , font=('TIMES NEW ROMAN',20),height= 3 , width= 6 , bg='silver',command=lambda : b_click(button5))
button6 = Button(screen, text=' ' , font=('TIMES NEW ROMAN',20),height= 3 , width= 6 , bg='silver',command=lambda : b_click(button6))

button7 = Button(screen, text=' ' , font=('TIMES NEW ROMAN',20),height= 3 , width= 6 , bg='silver',command=lambda : b_click(button7))
button8 = Button(screen, text=' ' , font=('TIMES NEW ROMAN',20),height= 3 , width= 6 , bg='silver',command=lambda : b_click(button8))
button9 = Button(screen, text=' ' , font=('TIMES NEW ROMAN',20),height= 3 , width= 6 , bg='silver',command=lambda : b_click(button9))

button1.grid(row = 0 , column= 0)
button2.grid(row = 0 , column= 1)
button3.grid(row = 0 , column= 2)

button4.grid(row = 1 , column= 0)
button5.grid(row = 1 , column= 1)
button6.grid(row = 1 , column= 2)

button7.grid(row = 2 , column= 0)
button8.grid(row = 2 , column= 1)
button9.grid(row = 2 , column= 2)

