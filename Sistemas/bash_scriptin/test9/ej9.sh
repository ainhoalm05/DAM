#!/bin/bash

    for SUBDIR in test9/*
    do
        if [ -d $SUBDIR ];
        then

            for archivo in ./$SUBDIR/*.txt
            do
                head -n 1 archivo
            done
        fi
    done
