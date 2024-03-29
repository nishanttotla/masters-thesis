#!/bin/bash

# run pdflatex once
pdflatex p.tex

# generate references
bibtex p.aux

# now run pdflatex twice (latex is weird)
pdflatex p.tex
pdflatex p.tex

if [ "$1" == "--dropbox" ]; then
  # copy generated PDF to Dropbox for easy sharing
  echo "Copying to Dropbox..."
  cp p.pdf ~/Dropbox
fi

