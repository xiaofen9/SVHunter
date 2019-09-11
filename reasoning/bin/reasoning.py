import os, sys, re

pattern1 = re.compile(r'\n\n')
pattern2 = re.compile(r'\[.*')

obsr_path = sys.argv[1]
new_content = ""
with open(obsr_path, 'r') as f:
	content = f.read()
	new_content = re.sub(pattern1, "\n", content)
	new_content = re.sub(pattern2, "", new_content)

with open(obsr_path, 'w') as f:
	f.write(new_content)
