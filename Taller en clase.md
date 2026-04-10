# Ejercicio de Ciberseguridad en C++

## Escenario General
Una empresa ha sufrido múltiples intentos de acceso no autorizado a su sistema. Tu trabajo como ingeniero de seguridad es construir herramientas básicas de protección usando C++.

---

## Parte 1 — Validador de Contraseña Segura (`parte1.cpp`)
**Temas:** strings, booleans, ciclo `for`, `if/else`

### Instrucciones
1. Pide al usuario que ingrese una contraseña
2. Tu programa debe verificar si la contraseña cumple estas 4 reglas:
   - Tiene **8 caracteres o más**
   - Contiene al menos **una letra mayúscula** (A-Z)
   - Contiene al menos **un número** (0-9)
   - Contiene al menos **un carácter especial** de estos: `! @ # $ % & *`
3. Según cuántas reglas cumple, imprime:
   - 0 a 2 reglas → `"DÉBIL"`
   - 3 reglas → `"MEDIA"`
   - 4 reglas → `"FUERTE"`

### Pistas
- Recorre la contraseña carácter por carácter con un `for`
- Usa variables `bool` para marcar si cada regla se cumple
- Puedes comparar caracteres así: `password[i] >= 'A' && password[i] <= 'Z'`
- Suma los `bool` para obtener el puntaje total (en C++ `true` vale 1)

### Ejemplo de ejecución esperada
```
Ingrese una contraseña: hola
Nivel: DÉBIL

Ingrese una contraseña: Segura123!
Nivel: FUERTE
```

---

## Parte 2 — Login con Bloqueo por Intentos (`parte2.cpp`)
**Temas:** strings, ints, booleans, ciclo `while`, `if/else`

### Instrucciones
1. Define en tu código un usuario y contraseña correctos (hardcoded)
2. Pide al usuario que ingrese su usuario y contraseña
3. Si son correctos, imprime `"Acceso concedido"` y termina
4. Si son incorrectos, deja que intente de nuevo
5. Después de **3 intentos fallidos**, imprime `"CUENTA BLOQUEADA"` y termina el programa
6. En cada intento, muestra en qué intento va (ejemplo: `"Intento 2 de 3"`)

### Pistas
- Usa un `while` que se detenga cuando haya acceso o se acaben los intentos
- Necesitas un contador de intentos (`int`) y una bandera de acceso (`bool`)
- La condición del `while` debe revisar ambas cosas: `intentos < 3 && !acceso`

### Ejemplo de ejecución esperada
```
--- Intento 1 de 3 ---
Usuario: admin
Contraseña: 1234
Credenciales incorrectas.

--- Intento 2 de 3 ---
Usuario: admin
Contraseña: Segura123!
¡Acceso concedido!
```

---

## Parte 3 — Cifrado César (`parte3.cpp`)
**Temas:** strings, ints, ciclo `for`

### Instrucciones
1. Pide al usuario un mensaje (sin espacios) y un número de desplazamiento (1-25)
2. Cifra el mensaje desplazando cada letra esa cantidad de posiciones en el alfabeto
   - Ejemplo con desplazamiento 3: `a → d`, `b → e`, `z → c`
3. Las mayúsculas se mantienen como mayúsculas, las minúsculas como minúsculas
4. Si un carácter no es letra, déjalo igual

### Pistas
- Para una letra minúscula: `nueva = (letra - 'a' + desplazamiento) % 26 + 'a'`
- El operador `%` (módulo) te ayuda a "dar la vuelta" al alfabeto cuando llegas a la `z`
- Haz lo mismo para mayúsculas pero con `'A'`

### Ejemplo de ejecución esperada
```
Ingrese el mensaje: hola
Ingrese el desplazamiento: 3
Mensaje cifrado: krod
```

---

## Parte 4 — Registro de Accesos / Log de Seguridad (`parte4.cpp`)
**Temas:** arrays, strings, ints, floats, ciclo `for`, `if/else`

### Instrucciones
1. Simula 5 intentos de login (usa un `for` para pedirlos uno por uno)
2. En cada intento, pide usuario y contraseña, y verifica contra la clave correcta
3. Guarda en un **arreglo de strings** los nombres de usuario, y en un **arreglo de bool** si el acceso fue exitoso o no
4. Al terminar los 5 intentos, imprime un **reporte** que muestre:
   - Cada usuario y si su acceso fue `"OK"` o `"FALLIDO"`
   - Cuántos intentos fueron exitosos y cuántos fallidos
   - La **tasa de fallo** como porcentaje (usa `float`)
5. Si la tasa de fallo es mayor al 60%, imprime una **alerta de seguridad**

### Pistas
- Declara `string usuarios[5]` y `bool exitoso[5]`
- Para el porcentaje: `float tasa = ((float)fallidos / total) * 100;`
- Necesitas dos `for`: uno para pedir datos y otro para imprimir el reporte

### Ejemplo de ejecución esperada
```
--- Registro #1 ---
Usuario: maria
Contraseña: abc
-> Acceso denegado

... (se repite 5 veces) ...

========== REPORTE DE SEGURIDAD ==========
Usuario: maria    | Estado: FALLIDO
Usuario: juan     | Estado: OK
Usuario: pedro    | Estado: FALLIDO
Usuario: maria    | Estado: FALLIDO
Usuario: ana      | Estado: FALLIDO

Intentos exitosos: 1/5
Tasa de fallo: 80%
*** ALERTA: Tasa de fallo alta - posible ataque ***
```

---

## Cómo compilar y ejecutar

```bash
g++ parte1.cpp -o parte1.exe
.\parte1.exe
```

Repite para cada parte cambiando el nombre del archivo.

## Entregables
- Un archivo `.cpp` por cada parte: `parte1.cpp`, `parte2.cpp`, `parte3.cpp`, `parte4.cpp`
- Cada programa debe compilar y ejecutar sin errores
- El código debe estar comentado explicando qué hace cada sección
