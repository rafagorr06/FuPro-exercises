Algoritmo ejer4_8
	Dimension a[8,12]
	Dimension b[8,12]
	Dimension suma[8,12]
	Dimension promedio[8,12]
	
	
	Para i <- 1 Hasta 8 Hacer
		Para j <- 1 Hasta 12 Hacer
			Leer a[i,j]
			Leer b[i,j]
		FinPara
	FinPara
	
	Para i <- 1 Hasta 8 Hacer
		Para j <- 1 Hasta 12 Hacer
			suma[i,j] <- a[i,j] + b[i,j]
			Escribir "La matriz suma es: " , suma[i,j]
		FinPara
	FinPara
	
	Para i <- 1 Hasta 8 Hacer
		Para j <- 1 Hasta 12 Hacer
			promedio[i,j] <- suma[i,j] / 2
			Escribir "La matriz promedio es: " , promedio[i,j]
		FinPara
	FinPara
	
FinAlgoritmo

