echo $FT_NBR1 + $FT_NBR2 | tr "\'\\\\\"?\!" "01234"| tr "mrdoc" "01234" | xargs  echo "ibase=5; obase=13;" | bc | tr "0123456789ABC" "gtaio lusSnemf" 
