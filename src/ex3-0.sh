#!/bin/sh
if [ -n "$MYENV" ]
then
    echo "MYENV 값 : $MYENV"
else
    echo "MYENV가 설정되어 있지 않습니다."
fi
exit 0
