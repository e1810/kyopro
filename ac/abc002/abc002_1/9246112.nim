
import strutils, sequtils
var a, b: int
(a, b) = stdin.readline.split.map(parseInt)
echo max(a, b)
