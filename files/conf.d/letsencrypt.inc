location ~ /.well-known {
    auth_basic  off;
    root        /opt/letsencrypt/challenge;
    try_files   $uri $uri/ =404;
}
