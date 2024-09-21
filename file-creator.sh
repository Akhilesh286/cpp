#!/bin/bash

# Check if the user has provided a number as an argument
if [ "$#" -ne 2 ]; then
    echo "Usage: $0 <number_of_files>"
    exit 1
fi

# Get the number of files from the argument
num_files=$1
path=$2

# Check if the argument is a valid number
if ! [[ "$num_files" =~ ^[0-9]+$ ]]; then
    echo "Error: The argument must be a positive integer."
    exit 1
fi

# Create the specified number of files
for ((i=1; i<=num_files; i++)); do
    echo """#include <iostream>
using namespace std;

int main()
{
    return 0;
}
""" > "$path/p$i.cpp"
    echo "Created p$i.cpp"
done

echo "Created $num_files files."
