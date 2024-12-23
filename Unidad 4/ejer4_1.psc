Algoritmo ejer4_1
	Dimension x[60]
	Para c <- 1 Hasta 25 Hacer
		Escribir "Escriba un número"
		Leer x[c]
		Leer N
	FinPara
	
	Escribir "x[7]: ", x[7]
	Escribir "x[23]: ", x[23]
	Escribir "x[N]: " , x[N]
	
	Si x[c] % 6 = 0 Entonces
		contador <- contador+1
	FinSi
FinAlgoritmo
