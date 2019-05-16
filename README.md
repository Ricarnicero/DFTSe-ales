# DFTSe-ales
Pequeño programa hecho en C para calcular la DFT conforme lo aprendido
  en clase
## Desarrollo
A continuación se explica de manera breve la construccion de este programa
### Estrucutra del programa
El programa se divide en 2 partes:

```
- tdf.c
- tdf.h
```

Donde:
- tdf.c: Archivo principal que hace el procesamiento de datos para 
  obtener el resultado de la DFT

- tdf.h: Librería que contiene las funciones para calcular la parte
  real e imaginaria de cada componente de la serie.

## Compilando y ejecutando
Para la compilacion de este programa se necesita una bandera en específico
y al momento de ejecutarlo se requiere un parametro como explicaremos a
continuación.

### Compilacion
Para compilar necesitaremos el siguiente comando:

```
gcc tdf.c -lm
```

Nota: La bandera "-lm" sirve para compilar la librería math.h

### Ejecucion
Para ejecutar este programa se necesita pasarle f(x) como argumento 
  del programa. Por ejemplo:
  
```
./a.out 2,3,4,4
```

Donde:

- ./a.out es el ejecutable
- 2,3,4,4 es el argumento del ejecutable y el programa lo entiende 
  como la funcion f(x) para que se realice la DFT

### Resultados

Despúes de ejecutar el programa se puede observar los resultados obtenidos
  por el programa. Para el comando "./a.out 2,3,4,4", la salida es:
  
```
f(x) = {2, 3, 4, 4, }

Para F(0) = 1/4 [
  2(cos(2pi(0)(0)/4) + j sen(2pi(0)(0)/4) ) +
  3(cos(2pi(0)(1)/4) + j sen(2pi(0)(1)/4) ) +
  4(cos(2pi(0)(2)/4) + j sen(2pi(0)(2)/4) ) +
  4(cos(2pi(0)(3)/4) + j sen(2pi(0)(3)/4) ) +
  ]
  
F(0) = 1/4[13.00 + j (0.00)] =  3.25 + j (0.00)

Para F(1) = 1/4 [
	2(cos(2pi(1)(0)/4) + j sen(2pi(1)(0)/4) ) + 
	3(cos(2pi(1)(1)/4) + j sen(2pi(1)(1)/4) ) + 
	4(cos(2pi(1)(2)/4) + j sen(2pi(1)(2)/4) ) + 
	4(cos(2pi(1)(3)/4) + j sen(2pi(1)(3)/4) ) + 
	]
	
F(1) = 1/4[-2.00 + j (1.00)] =  -0.50 + j (0.25)

Para F(2) = 1/4 [
	2(cos(2pi(2)(0)/4) + j sen(2pi(2)(0)/4) ) + 
	3(cos(2pi(2)(1)/4) + j sen(2pi(2)(1)/4) ) + 
	4(cos(2pi(2)(2)/4) + j sen(2pi(2)(2)/4) ) + 
	4(cos(2pi(2)(3)/4) + j sen(2pi(2)(3)/4) ) + 
	]
	
F(2) = 1/4[-1.00 + j (0.00)] =  -0.25 + j (0.00)

Para F(3) = 1/4 [
	2(cos(2pi(3)(0)/4) + j sen(2pi(3)(0)/4) ) + 
	3(cos(2pi(3)(1)/4) + j sen(2pi(3)(1)/4) ) + 
	4(cos(2pi(3)(2)/4) + j sen(2pi(3)(2)/4) ) + 
	4(cos(2pi(3)(3)/4) + j sen(2pi(3)(3)/4) ) + 
	]
	
F(3) = 1/4[-2.00 + j (-1.00)] =  -0.50 + j (-0.25)
```

Donde se muestra el desarrollo completo de cada paso que se realiza para
  la DFT.
  
## Autores
* **Ricardo Torres** - *Programa principal* - [DTFSeñales](https://github.com/Ricarnicero/DFTSe-ales.git)
* **David González** - *Librería para la DFT*

## License

This project is licensed under the MIT License
