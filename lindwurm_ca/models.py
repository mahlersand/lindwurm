from django.contrib.auth.models import User
from django.db import models
from django_x509.models import Cert

# Create your models here.

class Eichler(models.Model):

    associated_user = models.OneToOneField(User, on_delete=models.CASCADE)

    eichler_name = models.CharField(max_length=256)

    certs = models.ManyToManyField(Cert)