location /.git {
    return 404;
}

location ~ /\. {
    return 404;
}
location ~ /(.git|.svn|.env|provision|composer.json|composer.lock|package.json|gulpfile.js|docker-compose.yml)$ {
    return 404;
}
