Algoritmo ejer34
	Escribir "Ingrese tres lados de un triangulo"
	Leer c1, c2, c3
	Si c1>c2 y c1>c3 Entonces
		mayor <- c1
	SiNo
		Si c2>c1 y c2>c3 Entonces
			mayor <- c2
		SiNo
			mayor <- c3
		FinSi
	FinSi
	Si c1^2 + c2^2 + c3^2 - mayor^2 = mayor^2 Entonces
		Escribir "Es un triángulo rectángulo"
		A <- ((c1 * c2 * c3 / mayor)/2)
		Escribir "Su área es de ", A
	SiNo
		Escribir "No es un triangulo rectángulo"
	FinSi
FinAlgoritmo
