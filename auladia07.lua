--[[ primeira quest�o
 a = io.read("*n")
b = io.read("*n")
c = io.read("*n")

s = (a + b + c)/2

area = math.sqrt (s*(s-a)*(s-b)*(s-c))

print(area) ]]--

-- segunda quest�o


--[[ terceira quest�o

function Fib(termo1, termo2, limite)
	soma = termo1+termo2
	print(soma)
	if soma<limite then
		Fib(termo2, soma, limite)
	end
end

print(Fib(0,1,20)) ]]--


--[[ quarta quest�o

print("Informe a primeira cadeia de caracteres")
	cadeia1 = io.read()
print("Informe a segunda cadeia de caracteres")
	cadeia2 = io.read()
print("Informe a terceira cadeia de caracteres")
	cadeia3 = io.read()

print(cadeia3)
print(cadeia2)
print(cadeia1) ]]--





-- quinta quest�o


-- sexta quest�o

function primeiroImpar(a, b, c)
	if a%2==1 then
	return a
	end
		if b%2==1 then
		return b
		end
return c
end

print(primeiroImpar(1,2,3))
