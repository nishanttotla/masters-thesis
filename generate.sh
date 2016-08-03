#!/bin/bash

# run pdflatex once
pdflatex p.tex

# generate references
bibtex p.aux

# now run pdflatex twice (latex is weird)
pdflatex p.tex
pdflatex p.tex

# copy generated PDF to Dropbox for easy sharing
cp p.pdf ~/Dropbox