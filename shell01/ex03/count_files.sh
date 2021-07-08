#!/bin/bash
find . -type f -o -type dir | wc -l | tr -d ' '
