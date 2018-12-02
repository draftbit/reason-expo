#!/bin/bash

if [ "$1" != "" ]; then
  git clone https://github.com/FiberJW/reason-expo.git reason-expo-temp
  mv reason-expo-temp/template .
  rm -rf reason-expo-temp
  mv template $1
  cd $1
  yarn
else
  echo "Provide a project name as the first argument to this script."
fi

