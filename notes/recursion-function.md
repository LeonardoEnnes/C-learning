# Info
Conteudo sobre: [C] [recursion-function] [[recursion-function]]
Topico: #programação #C #functions
Data: 28-04-2023
Documentação:
- https://www.w3schools.com/c/c_functions_recursion.php
- https://www.youtube.com/watch?v=kepBmgvWNDw&list=PLBlnK6fEyqRjTO_UNGKuaaoxEqvSF0t5h

## Definição
- - O que é?
 Recursão é a técnica de fazer uma chamada de função em si. Esta técnica fornece uma maneira de quebrar problemas complicados em problemas simples que são mais fáceis de resolver.

- Como se define?
	````C
	```
	int sum(int k);
	
	int main(){
		int result = sum(10);
		printf("%d", result);
		return 0;
	}
	int sum(int k){
		if(k > 0) {
			return k + sum(k - 1);
		}else {
			return 0;
		}
	}
	
	```
	````