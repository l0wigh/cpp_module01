#!/bin/bash

make
echo -e "\033[32m*********************"
echo -e "test_file avant sedpp"
echo -e "*********************\033[00m"
cat test_file
./sedpp test_file XXXX sedpp
echo -e "\033[32m*****************************"
echo -e "test_file.replace après sedpp"
echo -e "*****************************\033[00m"
cat test_file.replace
