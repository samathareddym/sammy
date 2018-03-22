select in fileoperations copy remove rename compare difference none
do
	case $fileoperations in 
		copy|remove|rename|compare|difference|none)
		1]
		Copy()
		{
	        echo "Enter filename"
	     	read f1
		
		echo "Enter destination"
				
		read f2
	
		if [ -f $f1 -a -f $f2 ]
	       	then cp $f1 $f2
											  else
												  echo "file doesn't exist"						
											  fi

															  };;
										  2]Remove()
										  {
	        echo "enter the filename you want to remove"
        read f
        if [ -f $f ]
	        then
		                rm $f
		fi
			};;
		3]	Rename()
			{
			        echo "Enter filename"
			        read f1
			        echo "Enter the name that you wish to change to"
			        read f2
			        mv $f1 $f2
			};;
		4]	Compare()
			{
			        echo "enter filename 1"
			        read f1
			        echo "enter filename 2"
			        read f2
			        if [ -f $f1 -a -f $f2 ]
				        then
					                cmp $f1 $f2
						fi
					};;
				5]	Difference()
					{
					         echo "enter filename 1"
					          read f1
					           echo "enter filename 2"
					            read f2
					             if [ -f $f1 -a -f $f2 ]
						              then
							      	 if $f1 $f2
								 };;									 
					
							       esac
					       done
