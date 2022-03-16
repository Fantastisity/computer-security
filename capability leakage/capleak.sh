#!/bin/bash

gcc -o cap_leak cap_leak.c
sudo chown root cap_leak
sudo chmod 4755 cap_leak
ls -l cap_leak

./cap_leak
