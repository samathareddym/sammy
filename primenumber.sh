
echo "enter a number"
read n
prime1=1
m=`expr $n - 1`
for i in $(seq 2 $m )
do	
	if [ `expr $n % $i` -eq 0 ]
	then
		echo "not prime number"
		prime1=0
		break
	fi
done
if [ $prime1 -eq 1 ]
then
	echo " prime "
fi
