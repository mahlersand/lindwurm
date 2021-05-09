# lindwurm
A modular VPN ecosystem.

## Planned features:
- Python bindings (maybe for Django?)
- sigc++3.0 (gtkmm 4.0 signals) support (for a later GUI client)
- user based rights management and server administration
- require multiple authentication channels (e.g. ldap, then totp)

## Planned modules (for now):
- Wireguard
- ldap authentication on linux servers via openldap authentication backend
- SSL authentication via the control channel
- TOTP authentication
- ...

## Dependencies
- Boost (asio, i.e. the Boost::system component)
- sigc++3.0 (from gtkmm4)
- libssl 1.1.1j
- botan2
- libldap (from openldap)
- libldapc++ (from openldap/contrib)

### libldapc++ installation help

- get openldap source code
- go to openldap/contrib/libldapc++
- run autoupdate
- run autoconf -f -i
- cd into your build directory, preferrably out of tree
- from there, run the configure script in the openldap/contrib/libldapc++ directory, the --path flag will determine where it will be installed,
 this project assumes /usr, default is /usr/local. The installed path can be configured in CMakeLists.txt
- run make (maybe with -j)
- run sudo make install
- you can also install it into a custom folder in your home directory, so no sudo would be required
