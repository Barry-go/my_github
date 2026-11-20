#!/bin/sh
# 추가: sh ex3-8.sh 이름 정보
# 처음부터 다시 작성: sh ex3-8.sh -n
case "$1" in
    -n)
        echo "--- 팀원 정보 ---" > DB.txt
        echo "DB.txt를 처음부터 다시 작성합니다." ;;
    "")
        echo "사용법: sh $0 이름 정보   (초기화: sh $0 -n)" ;;
    *)
        if [ -z "$2" ]
        then
            echo "이름과 정보를 둘 다 입력하세요."
            exit 1
        fi
        echo "$1 $2" >> DB.txt
        echo "추가 완료: $1 $2" ;;
esac
exit 0
