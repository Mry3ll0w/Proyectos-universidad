<html>
<title>Actividad Final</title>
<body>
    <h1 style="font-size:40px;margin-left:700px";><b>Suscripcion Electronica</b></h1><br>
    <form action="final_processor.php" method="post">
        <h1>Nota:Los datos se procesan en otra parte </h1><br>
        Usuario:<input type="text" name="nombre">
        Contraseña:<input type="password" name="passwd">
        E-mail:<input type="email" name="mail"><br><br>
        Contraseña: <input type="password" name="pass"><br>
        <h2>Nivel de Estudios</h2><br>
        <input type="Radio" name="e1"value="Certificado Escolar" >Certificado Escolar 
        <br>
        <input type="Radio" name="e2"value="Certificado ESO" >Certificado ESO
        <br>
        <input type="Radio" name="e3" value="Bachiller/Formacion Profesional">Bachiller/Formacion Profesional
        <br>
        <input type="Radio" name="e4" value="Diplomado">Diplomado
        <br>
        <input type="Radio" name="e5" value="Licenciado/Doctorado">Licenciado/Doctorado
        <br>

        <br>
        <br>
        <h3>Interesado en los siguientes temas</h3><br>
        <input type="checkbox" name="t1" value="Musica">Musica
        <br>
        <input type="checkbox" name="t2" value="Deportes">Deportes
        <br>
        <input type="checkbox" name="t3" value="Cine">Cine
        <br>
        <input type="checkbox" name="t4" value="Libros">Libros
        <br>
        <input type="checkbox" name="t5" value="Ciencia">Ciencia
        <br>


        <br>
        <br>    
        <label for="dia">Dia de la semana cuando quieres recibirlo</label><br>
        <br>
        <select id="opt_s">
            <option value="l">Lunes</option>
            <option value="m">Martes</option>
            <option value="mx">Miércoles</option>
            <option value="m">Jueves</option>
            <option value="m">Viernes</option>
        </select>
        <br>
        <br>
        <label for="texto">Su opinion</label><br>
        <textarea id="texto" name="text" rows="10" cols="100">
        </textarea> 
        <br><br>
        <input type="submit" name="submit" value="Comprobar Formulario">
        <input type="submit" name="submit" value="Borrar Datos">
    </form>


</body>
</html>