names="samatha sahana lavisha quit"
ps3='select names'
select name in names
do
	if[ $name == 'quit' ]
	then
		break
	fi
	echo $name
done
