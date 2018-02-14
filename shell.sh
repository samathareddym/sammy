echo "enter a num"
read n
if [ $n -ge 90 ]
then 
echo "A"
elif [ $n -ge 80 -a $n -lt 90 ]
then
	echo "B"
elif [ $n -ge 70 -a $n -lt 80 ] 
then
	echo "C"
elif [ $n -ge 60 -a $n -lt 70 ]
then
	echo "D"
else 
	echo "fail"
fi	
