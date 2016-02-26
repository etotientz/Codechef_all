import re
batRegex = re.compile(r'abc|defg|hijkl|mnopqrst')
mo1 = batRegex.findall(raw_input())
#print mo1.group(),mo1.group(0),mo1.group(1)
s=''
for i in range(len(mo1)):
    if mo1[i]=='abc':
        s+='1'
    if mo1[i]=='defg':
        s+='23'
    if mo1[i]=='hijkl':
        s+='456'
    if mo1[i]=='mnopqrst':
        s+='7890'
print s