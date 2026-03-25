#! /bin/bash
# this program will:
# 1) compile a targeted c program (first argument) 
# 2) name the executable according to how I named the c file
# 3) give me the error codes if it doesn't compile, or tell me it compiled if it did
# 4) write those same error codes or compilation success to a file in obsidian

target=$1
simpledate=$(date +%F)
simpletime=$(date +%T)
objName="${target%.*}"
debugLogTitle="$target file Debug Log"
debugLogName="$objName.md"

# echo $target
# echo $objName
# echo $debugLogName
# echo $debugLogTitle
# echo $simpledate
# echo $simpletime


if [[ -f "$target" ]]; then
    echo "Compiling $target and naming it $objName"
else
    echo "$target does not exist or is not a regular file."
    exit 1
fi

echo $'\n---\n' >> "/Users/dillonkennamer/Documents/Obsidian Vaults/Secundus/DebugLogs/$debugLogName"

if gcc $target -o $objName 2>> "/Users/dillonkennamer/Documents/Obsidian Vaults/Secundus/DebugLogs/$debugLogName"; then
  echo "Compilation success at $simpletime on $simpledate" >> "/Users/dillonkennamer/Documents/Obsidian Vaults/Secundus/DebugLogs/$debugLogName"  
else
  echo "#debugLog Compilation failure at $simpletime on $simpledate" >> "/Users/dillonkennamer/Documents/Obsidian Vaults/Secundus/DebugLogs/$debugLogName"
  echo 2>> "/Users/dillonkennamer/Documents/Obsidian Vaults/Secundus/DebugLogs/$debugLogName"
fi




# echo $'\n---\n' >> "/Users/dillonkennamer/Documents/Obsidian Vaults/Secundus/DebugLogs/$debugLogName"
# echo "#debugLog Compilation attempt at $simpletime on $simpledate" >> "/Users/dillonkennamer/Documents/Obsidian Vaults/Secundus/DebugLogs/$debugLogName"
# gcc $target -o $objName 2>> "/Users/dillonkennamer/Documents/Obsidian Vaults/Secundus/DebugLogs/$debugLogName"

# echo "Failed to compile at 

# filename="data_file.txt.zip"
# name_without_ext="${filename%.*}"
# echo "$name_without_ext"
# Output will be "data_file.txt"
