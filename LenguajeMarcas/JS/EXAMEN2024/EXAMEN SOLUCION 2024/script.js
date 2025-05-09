function ejercicio1(){
	document.body.style.backgroundColor="hotpink";
	document.getElementById("ejercicio1").innerHTML="<h1>Beatriz </h1>";
}
function ejercicio2(){
	var array=["coche","ventana","edificio"];

	var tabla="<table border='1px'>"
	
	
	for (var i = 0; i < array.length; i++){
		//alert(array[i]+" "+array[i].length)

		tabla=tabla+"<tr>"
		tabla=tabla+"<td>"+array[i]+"</td>"
		tabla=tabla+"<td>"+array[i].length+"</td>"
		tabla=tabla+="</tr>"
	}

	tabla=tabla+="</table>"
	document.getElementById("ejercicio2").innerHTML=tabla
}
function ejercicio3(){
	var cadenaRegular=/^[0-9]{8}[A-Z]$/;
	var DNI=prompt("Escribe un DNI");

	if(DNI.match(cadenaRegular)){
		document.getElementById("ejercicio3").innerHTML="DNI correcto"
	}else
		document.getElementById("ejercicio3").innerHTML="DNI incorrecto"
}
function ejercicio4(){
	var precio=document.getElementById("precio").value;
	var descuento=document.getElementById("descuento").value;
	var resultado;
	if ((descuento<0) ||(descuento>100)){
		alert("Descuento no valido")
	}else{
		resultado=parseInt(precio)-(parseInt(precio)*parseInt(descuento)/100);
		document.getElementById("resultado").value=resultado;
	}
}
var contador=0;
function ejercicio51(){
	contador++;
	document.getElementById("contador").innerHTML=contador;

}
function ejercicio52(){
	contador=0;
	document.getElementById("contador").innerHTML=contador;

}
function carga(){
	ejercicio1();
	ejercicio2();
	ejercicio3();
	document.getElementById("boton").addEventListener("click",ejercicio4);
	document.getElementById("boton1ej5").addEventListener("click",ejercicio51);
	document.getElementById("boton2ej5").addEventListener("click",ejercicio52);
}
window.addEventListener("DOMContentLoaded", carga);
