location ~ /\. {
    return 404;
}

location ~ /(provision|composer.json|composer.lock|package.json|gulpfile.js|docker-compose.yml)$ {
    return 404;
}
