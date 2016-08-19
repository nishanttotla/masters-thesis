This repo is the LaTeX project for my UC Berkeley Masters Thesis. The topic is

> Oracle-Guided Heap Invariant Synthesis

To build, use the generate script

```
$ ./generate.sh
```

`pdflatex` and `bibtex` must be available on the system. The generate script also copies the generated document `p.pdf` to the local Dropbox folder if the `--dropbox` flag is provided. The Dropbox folder is assumed to be in the home directory.