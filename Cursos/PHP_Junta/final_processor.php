<h1 style="font-size:40px;margin-left:700px";>Datos Introducidos:</h1>
<br>
<?php
    echo("Usuario: ");
    echo htmlspecialchars($_POST['nombre']);
?>
<br>
<?php
    echo("E-Mail: ");
    echo htmlspecialchars($_POST['mail']);
?>
<br>
Nivel de Estudios: 
<?php 
    echo htmlspecialchars($_POST['e1']);
    echo (", ");
    echo htmlspecialchars($_POST['e2']);
    echo (", ");
    echo htmlspecialchars($_POST['e3']);
    echo (", ");
    echo htmlspecialchars($_POST['e4']);
    echo (", ");
    echo htmlspecialchars($_POST['e5']);
    echo (".");
?>
<br>
Interesado en los siguientes temas:  
<?php  
     echo htmlspecialchars($_POST['t1']);
     echo (", ");
     echo htmlspecialchars($_POST['t2']);
     echo (", ");
     echo htmlspecialchars($_POST['t3']);
     echo (", ");
     echo htmlspecialchars($_POST['t4']);
     echo (", ");
     echo htmlspecialchars($_POST['t5']);
     echo (".");
?>
<br>
Dia de la semana que desea recibirse:
<?php
    echo htmlspecialchars($_POST['opts'])
?>
<br>
Opinion dada:
<br>
<?php
    echo htmlspecialchars($_POST['text'])
?>
    

