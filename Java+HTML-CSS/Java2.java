public class ParejaNumeros {
   //Atributos ->variables
   int num1;
   int num2;
   
   //Métodos-> funciones
   //CONSTRUCTOR
   ParejaNumeros(int num1Enviado,int num2Enviado){
       num1=num1Enviado;
       num2=num2Enviado;    
   }
   //Resto
   int devuelveSuma(){
       int respuesta;
       respuesta=num1+num2;
       return respuesta;
   }
   int devuelveResta(){
       int respuesta;
       respuesta=num1-num2;
       return respuesta;        
       
   }
   int devuelveMultiplicacion(){
       int respuesta;
       respuesta=num1*num2;
       return respuesta;        
       
   }
   float devuelveDivision() {
       float respuesta;
       respuesta=num1/num2;
       return respuesta;
   }
   

}
