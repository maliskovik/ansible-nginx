# Nginx role

This role installs the nginx web server.

You should store all nignx config files for a host in a directory. This role uses the following naming scheme for files:
* .inc - file is added to the sites-enabled and is used only if included in other config files
* -main.conf - Used for CI environments. This file is not edited by the CI.
* -upstream.conf - This files contain upstreams. They are meant to be edited by the CI env, so ansible only creates them, if they do not exists, otherwise they are not changed
* - static.conf - this files  are normal nginx configs.
* - include.conf - this files are copied to nginx/conf.d directory where they are include into the main nginx.conf file by default.


## Mandatory variables
* nginx_config_files - where you store nginx files for the host locally
* nginx_main_config - nginx.conf to use

## Optional variables

* nginx_allowed_ip - which IP to permit when setting basic auth
* nginx_includes - custom include files for nginx config
* nginx_ubuntu_packages_optional - packages to install together with nginx
* nginx_package - which nginx package to install (nginx/nginx-core/nginx-extras)
* nginx_http_port: HTTP port - defaults to 80
* nginx_https_port: HTTPS port - defaults to 443
* nginx_http_open: Should HTTP port be open on firewall
* nginx_https_open: Should HTTPS port be open on firewall
* nginx_http_proxy: Is HTTP port behind proxy
* nginx_https_proxy: Is HTTPS port behind proxy
* nginx_http_proxy_ip: HTTP proxy IP
* nginx_https_proxy_ip: HTTP proxy IP
