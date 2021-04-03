# lindwurm
A modular VPN ecosystem.

Planned features:
- Python bindings (maybe for Django?)
- sigc++3.0 (gtkmm 4.0 signals) support (for a later GUI client)
- user based rights management and server administration
- require multiple authentication channels (e.g. ldap, then totp)

Planned modules (for now):
- Wireguard
- ldap authentication on linux servers via openldap authentication backend
- SSL authentication via the control channel
- TOTP authentication
- ...
