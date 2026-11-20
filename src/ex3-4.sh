#!/bin/sh
list=""
sum=0
n=0

while [ 1 ]
do
    echo "==================="
    echo "1) 과목 성적 추가"
    echo "2) 입력된 모든 점수 보기"
    echo "3) 평균 점수 확인"
    echo "4) 평균 등급 (GPA) 변환"
    echo "5) 종료"
    echo "==================="
    echo "번호를 선택하세요:"
    read menu

    case $menu in
    1)
        echo "과목 이름 (띄어쓰기 없이):"
        read subj
        echo "점수 (0~100 정수):"
        read score
        case $score in
            ""|*[!0-9]*)
                echo "숫자만 입력하세요."
                continue ;;
        esac
        if [ $score -gt 100 ]
        then
            echo "0~100 사이로 입력하세요."
            continue
        fi
        list="$list $subj:$score"
        sum=`expr $sum + $score`
        n=`expr $n + 1`
        echo "$subj $score점 추가 완료" ;;
    2)
        if [ $n -eq 0 ]
        then
            echo "입력된 성적이 없습니다."
            continue
        fi
        echo "[입력된 점수]"
        for item in $list
        do
            echo "$item"
        done ;;
    3)
        if [ $n -eq 0 ]
        then
            echo "입력된 성적이 없습니다."
            continue
        fi
        avg=`expr $sum / $n`
        echo "총점 $sum점, $n과목, 평균 $avg점 (소수점 버림)" ;;
    4)
        if [ $n -eq 0 ]
        then
            echo "입력된 성적이 없습니다."
            continue
        fi
        avg=`expr $sum / $n`
        if [ $avg -ge 95 ]; then g="A+"; gpa=4.5
        elif [ $avg -ge 90 ]; then g="A"; gpa=4.0
        elif [ $avg -ge 85 ]; then g="B+"; gpa=3.5
        elif [ $avg -ge 80 ]; then g="B"; gpa=3.0
        elif [ $avg -ge 75 ]; then g="C+"; gpa=2.5
        elif [ $avg -ge 70 ]; then g="C"; gpa=2.0
        elif [ $avg -ge 65 ]; then g="D+"; gpa=1.5
        elif [ $avg -ge 60 ]; then g="D"; gpa=1.0
        else g="F"; gpa=0.0
        fi
        echo "평균 $avg점 -> 등급 $g (GPA $gpa / 4.5)" ;;
    5)
        echo "프로그램을 종료합니다."
        exit 0 ;;
    *)
        echo "1~5 중에서 선택하세요." ;;
    esac
done
