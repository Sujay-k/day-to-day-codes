#! /bin/sh -
if ["$#" -gt 0]; then
	echo git add "$1"
	echo git commit -m "$2"
	echo git push origin master
	echo Sujay-k
	echo sujay@1996
	echo gitPush complete!
else
	echo >&2 Not given enough arguments
	exit 1
fi
	
