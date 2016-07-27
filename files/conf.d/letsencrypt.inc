location ~ /.well-known {
    allow     all;
    root     /opt/letsencrypt/challenge;
    try_files $uri $uri/ =404;
}
