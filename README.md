# Closet_Automatico

Este proyecto consiste básicamente en tomar un clóset, con sus respectivas prendas, para armar una combinación de ropa que uno se pueda poner en x día. 

¿Cómo funciouna? Tras haber cargado tus prendas de tu clóset en el programa, (cabe mencionar que las prendas serán deshechables y agregables) el programa recibe un input de preferencias y parámetros para tomar la decisión de qué combinación tomar en cuenta.
Es decir, para la creación del atuendo se responden preguntas cómo: ¿Hará frío, calor, o estará templado?, ¿Debe ser el atuendo formal, semi-formal o casual? Y con esos parámetras será que el programa devuelva el atuendo final. 

# Funcionalidades

Tiene un márgen de público bastante abierto.
Puede ser útil no sólo para personas que no sepan qué ponerse en la mañana cómo yo, sino para empresas que quieran experimentar con distintas combinaciones para fines de modelaje publicitario, por ejemplo. 

# Mejoras a futuro
Será interesante ver cómo este programa pueda evolucionar y cambiar cuando se le introduzca un parámetro de "combinación". En términos simples, que el programa aprenda a combinar ropa. Ahora mismo, por la complejidad y variabilidad de maneras y "reglas" al combinar ropa, no será implementado en el programa. 
Un gran paso que podría tener este proyecto en un futuro podría ser la implementación de machine-learning en el programa, aprendiendo de moda y combinaciones existentes, y por ende, dando un resultado más acorde a la época. 



# Correcciones realizadas

Se realizó la corrección de casos dónde el programa puede fallar, en el archivo "Casos Falla". 
Se corrigió el UML, dónde ya hay ahora una relación directa entre atuendo y prenda, además de la eliminación del concepto prenda_ancla. Esto hace más práctico el programa y fácil de usar.  

Se hicieron correcciones finales en los archivos, tanto los headers o declaraciones de clases, como en el main. 
Nótese la desaparición de la función muestra_atuendo(), pues no supe cómo solucionar el error que tenía, y opté por mejor mostrar las prendas de manera individual mejor, y no de manera colectiva. De esa manera el programa es capaz de mostrar ya el atuendo. 
