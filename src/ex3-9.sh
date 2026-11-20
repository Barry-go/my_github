#!/bin/sh
if [ -z "$1" ]
then
    echo "사용법: sh $0 이름"
    exit 1
fi
if [ ! -f DB.txt ]
then
    echo "DB.txt 파일이 없습니다. ex3-8.sh로 먼저 기록하세요."
    exit 1
fi

result=`grep "^$1" DB.txt`
if [ -z "$result" ]
then
    echo "'$1' 검색 결과가 없습니다."
else
    echo "[검색 결과]"
    echo "$result"
fi
exit 0
