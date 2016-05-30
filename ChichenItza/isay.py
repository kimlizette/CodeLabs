#!/usr/bin/python

import os
import subprocess

def isay(language, message):

    if language is "english":
         language = "en-us"
    if language is "espanol":
         language = "es-mx"

    message = str(message)

    directorycurrent = os.path.dirname(os.path.realpath(__file__))
    voicerss = directorycurrent + '/voicerss.sh'
    command = [voicerss, language, message]
    proc = subprocess.call(command)

if __name__ == "__main__":

    isay("english", "Hello World of Text To Speech via Voice RSS")
    isay("espanol", "Hola Mundo de Texto a Voz")

# End Of File
