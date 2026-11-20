#!/bin/sh
# 사용법: sh ex3-5.sh [옵션]   예) sh ex3-5.sh -h
opt=$1

user_info () {
    echo "[사용자 정보]"
    echo "사용자 이름 : `whoami`"
    id
    who
}

cpu_info () {
    echo "[CPU 사용률]"
    top -b -n 1 | head -12
}

mem_info () {
    echo "[메모리 사용량] free $opt"
    free $opt
}

disk_info () {
    echo "[디스크 사용량] df $opt"
    df $opt
}

echo "프로그램을 시작합니다. (전달된 옵션: $opt)"
while [ 1 ]
do
    echo "==================="
    echo "1) 사용자 정보"
    echo "2) CPU 사용률 확인"
    echo "3) 메모리 사용량 확인"
    echo "4) 디스크 사용량 확인"
    echo "5) 종료"
    echo "==================="
    echo "번호를 선택하세요:"
    read menu
    case $menu in
        1) user_info ;;
        2) cpu_info ;;
        3) mem_info ;;
        4) disk_info ;;
        5) echo "프로그램을 종료합니다."
           exit 0 ;;
        *) echo "1~5 중에서 선택하세요." ;;
    esac
done
