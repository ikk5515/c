var sum=0;
     function f() {
         sum++;
         if(sum==10) clearInterval(id);
     }
     var id = setInterval(“f()”, 200);