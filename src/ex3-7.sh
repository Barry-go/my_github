#!/bin/sh
if [ -z "$1" ]
then
    echo "사용법: sh $0 폴더이름"
    exit 1
fi

if [ ! -d $1 ]
then
    mkdir $1
fi
cd $1

for i in 0 1 2 3 4
do
    echo "file$i 의 내용입니다." > file$i.txt
    mkdir -p file$i
    ln -sf ../file$i.txt file$i/file$i.txt
done

echo "[$1 폴더]"
ls
echo "[file0 폴더 안의 링크]"
ls -l file0
echo "[링크로 내용 읽기]"
cat file0/file0.txt
exit 0
