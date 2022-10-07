from tkinter import *
from tkinter import font
from tkinter.tix import ButtonBox
import time
from PIL import ImageTk, Image
import datetime 
import threading as th

root = Tk()

###### Dictionary/map for Movies #######
movies={'Avatar':'!rent','Avengers: Endgame':'!rent','Avengers: Infinity War':"!rent",'Spider-Man: No Way Home':"!rent",'Jurassic World':"!rent",'The Lion King':"!rent",'Furious 7':"!rent",'Black Panther':"!rent",'Minions':"!rent"} 


root.geometry('1366x768')
root.minsize(400,400)

#### HEADING ######
title_app= Label(root,text="Movie Rent App",bg='red',fg='white',font=('batang', 20, 'bold'), relief=GROOVE)
title_app.pack(fill=X,padx=10)

##### Background Image #######
img = ImageTk.PhotoImage(Image.open("e:\zgeTuV.png")) #location for image 
l=Label(image=img)
l.pack()

#### FRAME For Listing #####
f1=Frame(width=400,height=600,bg='red') 
f1.place(x=0,y=150)
f1.pack_propagate(False)                # Frame=Fixed Size



##### Function for Time Check #########
def check(p,m):
    d= datetime.datetime.now()
    print(p)
    if(d.strftime("%M")==str(p)):
        y1['button'+str(m)].config(text='Rent')
        return 1


#### Button Event Function #####
def expire(m):
    d= datetime.datetime.now()
    if(movies[m]=='!rent'):
        movies=='rent'
        p=int(d.strftime("%M"))+1
        y1['button'+str(m)].config(text=f'Rented for 1 Min')
        check(p,m)
        st = th.Timer(60.0,check,args=(p,m))            #Call for check every 60 second
        st.start()
    else:
        pass


x=0         #Variable for listing       
y1={}       #Dictionary for button
y={}        #Dictionary for Label

    
for i in movies.keys():                 #Dynamic Var Creation 
    
    y1.update({'button'+str(i):(Button(f1,text='Rent',bg='black',fg='white',command= lambda m=str(i): expire(m)))})
    y.update({'label'+str(i):Label(f1,text=str(x+1)+'-'+i,bg='red',fg='white',font=('arial',11,'bold'))})
    
    y['label'+str(i)].pack(pady=5,anchor='w')
    y1['button'+str(i)].pack(padx=50,anchor='w')                
    x+=1


headin=Label(root,text='MOVIES Avaliable for Rent',bg='red',fg='white',font=('calibari',15,'bold'),relief=SUNKEN)
headin.place(x=0,y=130)



root.mainloop()