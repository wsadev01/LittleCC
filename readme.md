# Little C Collection
I am currently learning C, and I am creating some projects, for a harder retention, I am not using any IDE with text completion, using very basic nvim and its configuration, I will post
my init.nvim here because I made a little remap to compile and run.


```init.nvim
" Make program
set makeprg=gcc\ ./%\ -o\ $PWD/bin/%:r.o

" Keymapping
nnoremap <C-F10> :make && !./bin/%:r.o<CR>
nnoremap <F10> :!./bin/%:r.o<CR>
nnoremap <F9> :make<CR>

" Linux kernel code-style
set ruler
set shiftwidth=8
set expandtab
set smarttab
set incsearch
set autoindent
```
