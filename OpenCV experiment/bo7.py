import pyttsx3

import datetime

import wikipedia

import webbrowser

import speech_recognition as sr

import os

import random

import sys







engine = pyttsx3.init('sapi5')

voices = engine.getProperty('voices')

#print(voices)

engine.setProperty('voice',voices[1].id)




def speak(audio):

    engine.setProperty('rate' , 175)

    engine.say(audio)

    engine.runAndWait()



#wish krega time ke hisabb se ...

def time_wishing():

    hour = int(datetime.datetime.now().hour)





    if hour >= 6 and hour < 12:

        speak("good morning,sir!")



    elif hour >= 1 and hour < 6:

        speak("good Afternoon,sir !")

    else:

        speak("good evening,sir!")

    

    speak("this is bumblebee B 07")

    speak("how may i help you...")

'''

abb iss me apka micropone use hoyrgaa...

our fir output milegaa...

mahol...let's begin...

'''

def command_Task():



    r= sr.Recognizer()

    with sr.Microphone() as source:

        print("okay i am listening...")

        r.pause_threshold = 1

        audio = r.listen(source)

        #bhai delk jab bi error aayega tab apko try likhh na hai 

        #then ye command ko leke jayegaa direct google pe..


    try:

        print("wait a sec...")

        query = r.recognize_google(audio , language = 'en-in')

        print(f"sir said :- {query}\n")



#if rec. krte smy koi error aaaya tho wo display krega except exception...



    except Exception as e:

        #print(e)

        print("i can't able to listen it properly ...repeat it once ")

        return "none"

    return query



if __name__ == "__main__":

    time_wishing()

    while True:

        query=  command_Task().lower()



        #wilipedia ke liye logic..

        if 'wikipedia' in query:

            speak("searching wikipedia...wait a sec")

            query = query.replace("wikipedia ","")

            result = wikipedia.summary(query,sentences=5)

            speak("with the help of wikipedia")

            print(result)

            speak(result)


        elif 'hi' in query:
            speak("hiii Ruche ..... i am b07.....")
           


        elif 'ash' in query:

            speak("your friend , sir ,i know her...")

            speak("hii, aishwarya this is sir's new friend ")



        elif 'looks' in query:

            speak("i like this Aishwarya very much , she is simpler and more cute than heroine")

            speak("sorry sir , i talked too much...")

            speak("sorry , aishwarya")





        elif 'how are you ' in query:

            speak("fine , sir ")

            speak("i am really enjoying this project")



        elif 'anushka' in query:

            speak("hey aunshka , i don't know why but..")

            speak(" you are the studiest person and..., i know that")

            speak("topper personality,anushka")

            speak("yes,you are the topper")


        elif 'birthday' in query:
            speak("happy birthday sakshi ..... ")
            speak(" May..you have wonderful moments on your celebration.")
            speak("i know i am pronouncing wrong name but .... sir can fixed it as possible as")
            speak("have a great day...")

        elif 'moto' in query:

            speak("The relationship between human intelligence and artificial intelligence (HI + AI) will necessarily be one of symbiosis."

                        "The challenge and potential of exploring this co-evolutionary future is "

                        "the biggest story of the next century and one in which a closeness in development velocity is a necessity.")

            speak("by the way sir, code me for just a fun")

            speak("i am just a small project")



        elif 'gf' and 'girlfriend' in query:

            speak("i am single bro")

            speak("sir's love is coding")

            speak("and i am just a project so no girlfriend no pain...lol")



        #this statement is use to use the websites which you want to visit ..

        elif 'youtube' in query:

            speak("wait a second sir, opening youtube")

            webbrowser.open("youtube.com")

        elif 'google' in query:
            speak("chief what should i search ?")
            command = command_Task().lower
            webbrowser.open(f"{command}")


        elif 'time' in query:

            strTime = datetime.datetime.now().strftime("%H:%M:%S")    

            speak(f"Sir, the time is {strTime}")



        #bro random music is not working like as we want to code it so plz repair it as soon as

            '''  

        elif 'play music' in query:

            music_dir = "E:\\papa Songs"

            songs = random.choice(music_dir)

        # print(songs)    

            os.startfile(os.path.join(music_dir,songs[length - 1]))

            '''

        

        



        #exit code ...terminate the program...

        elif 'exit' or 'quit' or 'terminate' in query:

            speak("okay")

            #speak("i enjoyed working with you ")
            speak("i am terminating the process.")
            speak("bye chief")
            

            sys.exit()



    

   







    

    