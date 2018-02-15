i=2
echo "enter a number"
read n
for n in {2...$n}
do
	if [ $n%$i == 1 ]
	then
		        echo "prime number"
		else
			        echo "not a prime number"
			fi
		done

