location ~ /.well-known {
    allow       all;
    root        /opt/letsencrypt/challenge;
    try_files   $uri $uri/ =404;
    access_log  /var/log/nginx/le_access.log;
    error_log   /var/log/nginx/le_error.log;
}
