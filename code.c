def permutation(a, first, last):
	if first == last:
		print(','.join(a)) #123
	else:
		for i in range(first, last+1):
			a[first], a[i] = a[i], a[first]
			print('a[first] : , a[i]: ', first, i, a[first], a[i])
			print('first+1, last ', first+1,last)
			permutation(a, first+1, last)
			a[first], a[i] = a[i], a[first]
			print('a[firsttt] : , a[iiii]: ',first,i, a[first], a[i])


arrange = input()
arrange = arrange.split(',')
n = len(arrange)
permutation(arrange, 0, n-1)
