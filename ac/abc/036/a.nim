import strutils,sequtils
var a=stdin.readline.split.map(parseInt)
echo int((a[0]+a[1]-1)/a[0])
