#!/bin/bash

for archivo in test5/*; do
  if [[ $archivo == *.jpg ]]; then
    nuevo_nombre=$(echo "$archivo" | sed 's/.jpg$/.old/')
    mv "$archivo" "$nuevo_nombre"
  fi
done

