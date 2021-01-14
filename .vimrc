call plug#begin('~/.vim/plugged')

" Color scheme
Plug 'morhetz/gruvbox'

" Syntax
Plug 'jiangmiao/auto-pairs'

"Competitive companion
Plug 'jmerle/competitive-companion'

call plug#end()

syntax on

set clipboard=unnamedplus
set noerrorbells
set tabstop=4 softtabstop=4
set shiftwidth=4
set expandtab
set smartindent
set nu
set nowrap
set noswapfile
set nobackup
set undofile
set incsearch

set background=light
set t_Co=256
let g:gruvbox_contrast_dark='hard'
let g:gruvbox_contrast_light='hard'
colorscheme gruvbox
