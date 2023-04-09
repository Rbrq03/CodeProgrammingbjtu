> count.txt
more $1 | grep -Eo '\w+' |wc -l >>count.txt
more $1 | grep -o '[a-zA-Z]'|wc -l >>count.txt
more $1 | grep -o '[0-9]'| wc -l >>count.txt
more $1 | grep -o '[  ]' | wc -l >> count.txt
more $1 | grep -o '[^a-zA-Z0-9 ]' | wc -l >> count.txt
echo “sh result:”
cat ./count.txt
echo " "
str1=$1
str1=${str1%.*}
str1=${str1##*/}
str2="./txtResult/${str1}CountResult.txt"
echo "cpp result:"
cat $str2
