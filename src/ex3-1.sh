#!/bin/sh
echo "실행파일 이름 : $0"
echo "입력한 숫자 : $*"
if [ -z "$1" ] || [ -z "$2" ]
then
echo "숫자 2개를 입력하세요."
exit 1
fi
echo "$1 + $2 = `expr $1 + $2`"
echo "$1 - $2 = `expr $1 - $2`"
echo "$1 * $2 = `expr $1 \* $2`"
if [ $2 -eq 0 ]
then
echo "$1 / $2 = 0으로 나눌 수 없습니다."
else
echo "$1 / $2 = `expr $1 / $2`"
fi
exit 0
