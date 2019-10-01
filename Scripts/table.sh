#FOR
#echo "enter a num"
#read n

#for ((i=1 ; i<=10; i++ ))
#do
#	echo $n "*" $i "=" `expr $n \* $i`
#done

echo "enter the choice 1-add 2-sub 3-mul 4-div 5-exit"
read op

echo "enter first no:"
read n1
echo "enter sec no:"
read n2

case $op in
	1) a=`expr $n1 + $n2`
		echo "addition:$a";;

	2) a=`expr $n1 - $n2`
		echo "subtraction:$a";;

	3) a=`expr $n1 \* $n2`
		echo "multiplication:$a";;

	4) a=`expr $n1 / $n2`
		echo "division:$a";;
	5) exit;;

esac
sh table.sh


