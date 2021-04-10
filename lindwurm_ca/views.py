from django.shortcuts import render

# Create your views here.

def index(request):
    return render(request, "lindwurm_ca/index.html")

def get_certificate(request):
    return render(request, "lindwurm_ca/certificate.html")

