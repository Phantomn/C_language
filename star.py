print "Q1"
for i in range(0,5):
	print "*",
print "\n"

print "Q2"
for i in range(0,5):
	print "*"

print "Q3"
for i in range(0,5):
	for j in range(0,5):
		print "*",
	print ""

print "Q4"
for i in range(1,6):
	for j in range(1,6):
		print i,
	print ""

print "Q5"
for i in range(1,6):
	for j in range(1,6):
		print j,
	print ""

print "Q6"
for i in range(1,6):
	for j in range(1,6):
		if j>=i:
			print j,
	print ""