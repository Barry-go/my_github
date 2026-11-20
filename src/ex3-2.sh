#!/bin/sh
echo "y = 1/2 * x^2 를 계산합니다."
echo "x 값을 2개 이상 띄어쓰기로 구분해서 입력하세요. (예: 2 3.5 -1.2)"
read nums

count=0
for x in $nums
do
    count=`expr $count + 1`
done

if [ $count -lt 2 ]
then
    echo "값을 2개 이상 입력해야 합니다."
    exit 1
fi

for x in $nums
do
    y=`awk "BEGIN { print 0.5 * $x * $x }"`
    echo "x = $x  ->  y = $y"
done
exit 0
