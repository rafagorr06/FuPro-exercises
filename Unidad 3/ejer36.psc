Algoritmo ejer36
	m <- 0
	h <- 0
	
	Para i<-0 Hasta 5 Con Paso 1 Hacer
		Escribir "Escribir el sexo y la altura"
		Leer sexo, altura
		
		Si sexo = "m" y altura > 1.76 Entonces
			muj <- m+i
		SiNo
		FinSi
		
		Si sexo= "h" y altura > 1.90 Entonces
			hom <- h+i
		SiNo
		FinSi
	FinPara
	
	Escribir "La cantidad de hombres que superan el 1.90 son: ", hom
	Escribir "La cantidad de mujeres que superan el 1.76 son: ", muj


FinAlgoritmo
