This repo is the LaTeX project for my UC Berkeley Masters Thesis. The topic is

> Oracle-Guided Heap Interpolant Synthesis

To build, use the generate script

```
$ ./generate.sh
```

`pdflatex` and `bibtex` must be available on the system. The generate script also copies the
generated document `p.pdf` to the local Dropbox folder if the `--dropbox` flag is provided. The
Dropbox folder is assumed to be in the home directory.

### Rendering Programs

To add a program as a figure to your output, put code files in the `code` directory. For example,
if you have file `prog.c`, then run `make code/prog.c.tex` to generate a new file `prog.c.tex`
that will be used for the figure. Note that `pygmentize` must be installed on the system for this
to work. After this, add the following in the tex file to include your program.

```
\begin{figure}
  \centering
  \input{code/prog.c}
  \caption{This is prog.}
  \label{fig:prog}
\end{figure}
```