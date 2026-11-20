#!/bin/sh
echo "과목 점수를 2개 이상 띄어쓰기로 구분해서 입력하세요. (0~100 정수)"
read scores

sum=0
n=0
for s in $scores
do
    case $s in
        *[!0-9]*)
            echo "$s : 숫자가 아니므로 제외합니다."
            continue ;;
    esac
    if [ $s -gt 100 ]
    then
        echo "$s : 0~100 범위가 아니므로 제외합니다."
        continue
    fi
    n=`expr $n + 1`
    sum=`expr $sum + $s`
    if [ $s -ge 90 ]
    then
        echo "과목$n : $s점 -> A"
    else
        echo "과목$n : $s점 -> B"
    fi
done

if [ $n -lt 2 ]
then
    echo "올바른 점수를 2개 이상 입력해야 합니다."
    exit 1
fi

avg=`expr $sum / $n`
if [ $avg -ge 90 ]
then
    grade=A
else
    grade=B
fi
echo "----------------------"
echo "평균 점수 : $avg점 (소수점 버림) -> 평균 등급 : $grade"
exit 0
