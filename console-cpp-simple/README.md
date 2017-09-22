# console-cpp-simple

# Developer Workspace

[![Contribute](http://beta.codenvy.com/factory/resources/codenvy-contribute.svg)](http://beta.codenvy.com/f?id=21w2nx87yto2xi1z)

# Recipe

FROM [codenvy/cpp_gcc](https://hub.docker.com/r/codenvy/cpp_gcc/)

# Commands

| #       | Description           | Command  |
| :------------- |:-------------| :-----|
| 1      | Build and run | `cd ${current.project.path} && make && ./a.out` |


# Output

La aplicacion demostrara los conceptos aprendidos en la clase de teoria y los cuales se aplicaron mediante un programa sencillo 
en c++ utilizando Eclipse Che, en este laboratorio se implementaron cuatro tareas dadas por el docente.
1. Crear un nuevo proyecto utilizando el quickstart de C++ en EclipiseChe
2. Implementar una calculadora de operaciones aritmeticas por valor
    >Se hicieron metodos simples en C++ en los cuales cada uno hacia una operacion aritmetica y se utilizaba como parametro
    valores dados por el usuario
3. Implementar una calculadora de operaciones aritmeticas por referencia
    >En este se hizo basicamente lo mismo que en la tarea anterior pero en este se utizaron referencias, es decir entre los 
    parámetros se implemento un puntero para referenciar un valor ya inicializado en una variable
4. Implemente un metodo que genere un arreglo de 10 posiciones y almacene el resultado de una tabla de multiplicar
    >Se hizo un metro Void en el cual se implemento un ciclo for en el cual se implemento la tabla de multiplicar del 5
