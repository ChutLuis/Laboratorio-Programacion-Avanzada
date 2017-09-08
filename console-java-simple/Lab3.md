# Laboratorio Numero 3

# Developer Workspace

[![Contribute](http://beta.codenvy.com/factory/resources/codenvy-contribute.svg)](http://beta.codenvy.com/f?id=omriatu352kkthua)

# Recipe

FROM [codenvy/ubuntu_jdk8](https://hub.docker.com/r/codenvy/ubuntu_jdk8/)

# Commands

| #       | Command           | 
| :------------- |:------------- |
| 1      | `mvn -f ${current.project.path} clean install && java -jar ${current.project.path}/target/*.jar` |

# App output

App output is streamed into a console. Note that if your app expects user input, do not use command but execute jars in the terminal directly.


# Conceptos
### ¿Que es una interfaz?
>Un interfaz es una lista de acciones que puede llevar a cabo un determinado objeto. Sorpresa, ¿eso no eran los métodos que se definen en una clase? Casi, en una clase además de aparecer los métodos aparecía el código para dichos métodos, en cambio en un interfaz sólo existe el prototipo de una función, no su código. 
### ¿Que es una clase abstracta?
>Este Tipo de Clases nos permiten crear “método generales”, que recrean un comportamiento común, pero sin especificar cómo lo hacen. A nivel de  código tienen por particularidad que algunos de sus métodos no tienen “cuerpo de declaración”, ¿qué quiere decir esto? no tienen las llaves { } ni código dentro de ellos y deben estar precedidos por la palabra clave abstract. Si una clases contiene uno o más métodos abstractos está clase debe ser abstracta. Estas clases como son generalidades no pueden ser instanciadas por ningún objeto (se dice que su nivel de abstracción es demasiado alto), entonces su único fin es ser heredado/extendido por otras clases.
### ¿Que diferencia hay entre herencia e interfaces?
>La herencia es un mecanismo para extender las funcionalidades y atributos de una clase.
>Una interfaz es un tipo especial de clase (que también puede tener herencia) que no posee funcionalidad implementada, solo define un conjunto de funcionalidades para las clases que la implementen (un conjunto de métodos con parámetros pero sin código)
### ¿Cual es la diferencia entre pila, cola y lista?
>En una lista los datos pueden almacenarse (insertarse) en cualquier orden, y eliminarse desde cualquier lugar. Es decir puedes insertar al comienzo, al final, en el medio... y de la misma manera se puede eliminar.

>Una Cola es una lista FIFO: First In, First Out. "Primero en Entrar, Primero en Salir", en castellano. Es decir los elementos se ordenan desde un extremo (el frente) y se van ordenando uno detrás del otro. El elemento que está en primer lugar entonces se eliminará, y ahora el segundo pasará a ser el primero. La representación más visual y que aclara esto lo puedes ver cada vez que haces cola o fila para ser atendida en caja. Naturalmente, el último en llegar, será el último en salir.

>En cambio, la Pila es una lista LIFO: Last In, First Out. "Primero en Entrar, Último en Salir". Es decir los elementos se van formando de forma inversa, llega el primero, a continuación el segundo se ubica delante de él, y así hasta llegar el último. Ahora en el tope de la pila estará el último. Por tanto a eliminarse, se van retirando en forma inversa, desde el último hacia el primero. Un ejemplo típico: cuando apilas los platos al lavar y secar.

>En términos técnicos, los elementos tienen un puntero (dirección de memoria) que permite "apuntar" al elemento próximo en la lista. 
