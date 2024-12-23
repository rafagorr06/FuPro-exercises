Algoritmo ejer33
	Escribir "Ingrese el primer numero"
	Leer num1
	Escribir "Ingrese el segundo numero"
	Leer num2
	Escribir "Ingrese el tercer numero"
	Leer num3
	
	Si (num1=num2) o (num2=num3) o (num1=num3) Entonces
		Escribir "Hay un numero igual"
		Repetir
			Escribir "Ingrese el primer numero"
			Leer num1
			Escribir "Ingrese el segundo numero"
			Leer num2
			Escribir "Ingrese el tercer numero"
			Leer num3
		Hasta Que (num1<>num2) o (num2<>num3) o (num1<>num3)
	FinSi
	
	Si (num1>num2) y (num1>num3) Entonces
		Escribir "El primer numero es el mayor: ", num1
	SiNo
		Si (num1<num2) y (num3<num2) Entonces
			Escribir "El segundo número es el mayor: ", num2
		SiNo
			Escribir "El tercer número es el mayor: ", num3
		FinSi
	FinSi
	
	
FinAlgoritmo


// El MIENTRAS evalua la condicon al principo
// El REPETIR evalua la condicion al final 