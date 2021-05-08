#pragma once

//Qt Exports
//They are just in here if they are needed #l8ter
#if defined(_MSC_VER) || defined(WIN64) || defined(_WIN64) || defined(__WIN64__) || defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
#  define Q_DECL_EXPORT __declspec(dllexport)
#  define Q_DECL_IMPORT __declspec(dllimport)
#else
#  define Q_DECL_EXPORT     __attribute__((visibility("default")))
#  define Q_DECL_IMPORT     __attribute__((visibility("default")))
#endif

#if defined(LIBLINDWURM_LIBRARY)
#  define LIBLINDWURM_EXPORT Q_DECL_EXPORT
#else
#  define LIBLINDWURM_EXPORT Q_DECL_IMPORT
#endif
