<html>
<head>
                       <title> Curso de PHP </title>
           </head>
           <body>
                       <a> <b>Curso de PHP</b></a><br>
                       <br> 
                       <a>
                       <?php
                            $nombre="Antonio ";
                            $apellido1="Roldan ";/* Ponemos espacios para evitar que se vea mal tras concatenar */
                            $apellido2="Andrade";
                            /* Concatenamos en nombre para evitar tener que crear variable nueva */
                            $nombre= $nombre.$apellido1.$apellido2;
                            echo "$nombre\n";                       
                       ?>
                       </a>
           </body>
</html>