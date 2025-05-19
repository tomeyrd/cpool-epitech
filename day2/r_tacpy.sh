#!/bin/bash
cut -d ":" -f 1 | sed -n 'p;n' | rev | sort -r | sed -n "{$MY_LINE1},{$MY_LINE2}p"
