# LamparaRGB
Proyecto de la lampara RGB, controlada por potenciometros
Este proyecto se hizo con PlatfromIO, por lo que el programa principal se encuentra en
```python
/src/main.cpp
```
Esta compilado para el arduino MICRO, para cambiar el compilador para otra placa basta con modificar el archivo 
```python
/platformio.ini
```
Y sustituir por la placa deseada, por ejemplo para el arduino uno quedaria asi:

```python
[env:uno]
platform = atmelavr
framework = arduino
board = uno
```
