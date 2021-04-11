# Read from the file words.txt and output the word frequency list to stdout.
grep -o -E '\w+' words.txt | sort -u -f | (while read x; do echo -n "$x "; grep -on -i -w "$x" words.txt | wc -l; done;) | sort -k2 -n -r 
