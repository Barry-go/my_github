#!/bin/sh
if [ -z "$1" ]
then
    echo "사용법: sh $0 폴더이름"
    exit 1
fi

if [ -d $1 ]
then
    echo "$1 폴더가 이미 있습니다."
else
    mkdir $1
    echo "$1 폴더가 없어서 새로 만들었습니다."
fi

cd $1
for i in 0 1 2 3 4
do
    echo "file$i 의 내용입니다." > file$i.txt
done
echo "[파일 5개 생성]"
ls

echo "[압축] $1.tar.gz"
tar -czvf $1.tar.gz file0.txt file1.txt file2.txt file3.txt file4.txt

mkdir -p unzip
echo "[unzip 폴더에 압축 해제]"
tar -xzvf $1.tar.gz -C unzip
ls unzip
exit 0
