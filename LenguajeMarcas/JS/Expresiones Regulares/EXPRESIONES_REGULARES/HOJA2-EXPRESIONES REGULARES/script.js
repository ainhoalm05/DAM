function isFecha(fecha){
  //Formato fecha dd,mm,aaaa
  const regex = /^(0[1-9]|[1-2][0-9]|3[0-1]),(0[1-9]|1[0-2]),(19|20\d{2})$/
  ///\b[0-9]\b/
  if(regex.test(fecha)){
    return true;
  }else{
    return false;
  }
}
function isUserCorrect(usuario){
  const regex=/^[a-zA-Z0-9._]$/;
  if(regex.test(usuario)){
    return true;
  }else{
    return false;
  }
}
function isDomainCorrect(dominio){
  const regex=/^[a-zA-Z]+\.[a-z]{2,3}$/
  if(regex.test(dominio)){
    return true;
  }else{
    return false;
  }
}
function isEmail(correo){
  const regex=/^[a-zA-Z0-9._]+@[a-zA-Z]+\.[a-z]{2,3}/;
  if(regex.test(correo)){
    return true;
  }else{
    return false;
  }
}
function isTelephone(telefono){
  let regex=/^\d{2}-\d{3}-\d{2}-\d{2}$/;
  if(regex.test(telefono)){
    return true;
  }else{
    return false;
  }
}
function isPasswordCorrect(password){
 //let regex=/^[a-z]+[A-Z]+$/;
 let regex=/^(?=.*[a-z])(?=.*[A-Z])(?=.*[0-9]).+$/;
 if(regex.test(password)){
    return true;
  }else{
    return false;
  }
}
function contienePalabra(palabra,frase){
  let partes=frase.split(palabra);
  return partes.length()-1;
}
function reemplazarPalabra(palabra,reemplazo,frase){
  return frase.replace(new RegExp(palabra,"gi"),reemplazo);
}
/*Pendiente de arreglar porque no resta bien*/
function ejercicio1(){
  let fecha= prompt("Introduce una fecha: ");
  if(isFecha(fecha)){
    document.writeln("Formato Fecha es correcto "+fecha);
    let FechaPorPartes=fecha.split(",");
    let day = parseInt(FechaPorPartes[0]);
    let month = parseInt(FechaPorPartes[1])-1;
    let year = parseInt(FechaPorPartes[2]);

    //Creamos el objeto de la fecha
    let fechaIntroducida= new Date(day,month,year);

    //Fecha Actual
    let fechaActual = new Date();

    //La diferencia la devuelve en milisegundos
    let diferencia = fechaActual.getDate()- fechaIntroducida.getDate();

    let diasTranscurridos=Math.round(diferencia/(1000*60*60*24));

    alert(diasTranscurridos);
  }else{
    document.writeln("Formato Fecha NO es correcto "+fecha);
  }
}
function ejercicio2(){
  let correo=prompt("Introduce el correo electrónico");
  let partesCorreo=correo.split("@");
  alert(correo);
  if(isEmail(correo)){
    //el número de letras del usuario -> partesCorreo[0]
    document.writeln("<h2>"+partesCorreo[0].length+"</h2>");
  }else{
    if(!isUserCorrect(partesCorreo[0])){
      if(!isDomainCorrect(partesCorreo[1])){
        document.writeln("Tanto el usuario como el dominio no cumplen que tengan letras y numeros (usuario)"+partesCorreo[0]+" en el dominio no tiene letras.extension (dos a tres caracteres)"+partesCorreo[1])
      }else{
        document.writeln("El usuario es incorrecto no tiene letras y numeros: "+partesCorreo[0]);
      }
    }else{
      if(!isDomainCorrect(partesCorreo[1])){
        document.writeln("El dominio es incorrecto no tiene la forma indicada: "+partesCorreo[1]);
      }
      else{
        // No entra nunca porque la funcion split divide por @ y al no existir entiende que todo es usuario
        document.writeln("El correo está mal formado porque le falta el @");
      }
    }
  
  }
}
  function ejercicio3()
  {
    let prefijos=[
      {prefijo:'945',ciudad:'Alava'},
      {prefijo:'967',ciudad:'Albacete'},
      {prefijo:'966',ciudad:'Alicante'},
      {prefijo:'965',ciudad:'Alicante'},
      {prefijo:'950',ciudad:'Almeria'},
      {prefijo:'984',ciudad:'Asturias'},
      {prefijo:'985',ciudad:'Asturias'},
      {prefijo:'920',ciudad:'Avila'},
      {prefijo:'924',ciudad:'Badajoz'},
      {prefijo:'971',ciudad:'Baleares'},
      {prefijo:'93',ciudad:'Barcelona'},
      {prefijo:'947',ciudad:'Burgos'},
      {prefijo:'927',ciudad:'Caceres'},
      {prefijo:'956',ciudad:'Cadiz'},
      {prefijo:'91',ciudad:'Madrid'}];

    let phone=prompt("Escribe un telefono...");
    if(isTelephone(phone)){
      let prefix=phone.split("-")[0];
      let origen=null;

      //Buscamos en el array
      //for(let i=0;i<prefijos.length;i++){
      let i=0;
      while((origen===null) && (i<prefijos.length)){
        if(prefijos[i].prefijo===prefix){
          origen=prefijos[i].ciudad;
        }
        i++;
      }
      document.writeln("La ciudad es: "+origen);
    }else{
      let caracteres=phone.replace(/-/g,"").length;
      if(caracteres>12){
        document.writeln("Al telefono le sobran números");
      }else{
        document.writeln("Al telefono le faltan números");
      }
    }
  }
function ejercicio4(){
  //Pasamos lo que hemos introduccido a minuscula
  let oracion = prompt("Introduce una oración").toLowerCase();
  let palabra = prompt("Introduce una palabra a buscar").toLowerCase();;

  let regex= new RegExp(palabra,'g');
  let coincidencias=oracion.match(regex).length;

  document.writeln("La palabra introduccida ha aparecido "+coincidencias);

}
function ejercicio5(){
  //Pasamos lo que hemos introduccido a minuscula
  let oracion = prompt("Introduce una oración").toLowerCase();
  let palabra = prompt("Introduce una palabra a reemplazar").toLowerCase();
  let reemplazo = prompt("Introduce una palabra a reemplazar").toLowerCase();


  document.writeln("La frase final "+reemplazarPalabra(palabra,reemplazo,oracion));

}
function ejercicio6(){
  let password = prompt("Introduce una contraseña correcta");
  if(isPasswordCorrect(password)){
    document.writeln("Contraseña válida");
  }else{
    document.writeln("Contraseña inválida");
  }
}
function load(){
	//ejercicio1();
  //ejercicio2();
  //ejercicio3();
  //ejercicio4();
  ejercicio6();
}
window.addEventListener("DOMContentLoaded", load, false);