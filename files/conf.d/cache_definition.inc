proxy_cache_path        /var/cache/nginx levels=1:2 keys_zone=default:10m inactive=20m max_size=1g use_temp_path=off;
proxy_cache_lock        on;
proxy_cache_path        /var/lib/nginx/cache levels=1:2 keys_zone=imageresizercache:8m max_size=512m;
proxy_cache_key         "$scheme$request_method$host$request_uri$is_args$args";
