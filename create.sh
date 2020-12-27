#!/bin/bash

script_dir=$(dirname $0)

function find_template_dir ()
{
    while [[ $PWD != "/" ]]; do
        if [[ -e "$1" ]]; then
            pwd
        fi
        cd ..
    done
} 

template_dir='.template'
IFS=$'\n'
template_dirs=($(find_template_dir "$template_dir"))
unset IFS

for it in ${!template_dirs[@]}; do
    template_dirs[$it]=${template_dirs[$it]}/$template_dir
done

for file_path in "$@"; do
    prob_name=$(basename $file_path)
    if [[ -e "$file_path" ]]; then
        echo "$file_path already exists"
	continue
    fi

    mkdir -p "$file_path"
    for dir in ${template_dirs[@]}; do
	cp -r $dir/* $file_path/
    done
    
    find $file_path -type f -print0 | xargs -0 rename "template" "$prob_name" 
done    


