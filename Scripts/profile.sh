#!/bin/bash
#Shell scripting
#created by Deepa.BI
#created on:01/10/2019

#ans="y"
#while [ $ans = "y" ]
#do
#clear

for i in 1 2 3 4 5
do
echo $i

echo "Profile"
echo "----------"
echo "enter name:"
read name
echo "enter id:"
read Id
echo "your company"
read cname
echo "enter mark-1"
read m1
echo "enter mark-2"
read m2
echo "enter mark-3"
read m3

sum1=`expr $m1 + $m2 + $m3`
avg=`expr $sum1 / 3`
echo "average marks: $avg "



if [ $avg -ge 75 ]
then 
grade=" FCD "

elif [ $avg -ge 60 -a $avg -lt 74 ] 
then
grade=" FirstClass "

elif [ $avg -ge 40 -a $avg -lt 59 ] 
then
grade=" SecClass "

else 
grade=" cleared "
fi

echo " $name $Id $cname $avg $grade ">>ans.txt

#echo "do you wish to continue"
#read ans
done
