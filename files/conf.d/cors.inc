if ($request_method = 'OPTIONS') {
   add_header 'Access-Control-Allow-Origin' '*' always;
   add_header 'Access-Control-Allow-Credentials' 'true' always;
   add_header 'Access-Control-Allow-Methods' 'GET, POST, OPTIONS, PUT, DELETE' always;
   add_header 'Access-Control-Allow-Headers' 'Authorization,DNT,X-CustomHeader,Keep-Alive,User-Agent,X-Requested-With,If-Modified-Since,Cache-Control,Content-Type,Content-Length,Range,Range-Unit,Accept,Origin,Pragma,Connection,X-Mx-ReqToken,x-ausername,x-portal,x-locale' always;
   add_header 'Access-Control-Max-Age' 1728000 always;
   add_header 'Content-Type' 'text/plain charset=UTF-8' always;
   add_header 'Content-Length' 0 always;
   return 204;
}
if ($request_method ~ (GET|POST|PUT|DELETE) ) {
   add_header 'Access-Control-Allow-Origin' '*' always;
   add_header 'Access-Control-Allow-Credentials' 'true' always;
   add_header 'Access-Control-Allow-Methods' 'GET, POST, OPTIONS, PUT, DELETE' always;
   add_header 'Access-Control-Allow-Headers' 'Authorization,DNT,X-CustomHeader,Keep-Alive,User-Agent,X-Requested-With,If-Modified-Since,Cache-Control,Content-Type,Content-Length,Range,Range-Unit,Accept,Origin,Pragma,Connection,X-Mx-ReqToken,x-ausername,x-portal,x-locale' always;
}
