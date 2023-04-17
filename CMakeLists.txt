cmake_minimum_required(VERSION 3.25)
project(3ESD C)

set(CMAKE_C_STANDARD 11)

include_directories(.ccls-cache/@@home@runner@3ESD)
include_directories(.ccls-cache/@@home@runner@C)
include_directories(.ccls-cache/@home@runner@3ESD)
include_directories(.ccls-cache/@home@runner@C)
include_directories("atividades/atv 1/TAD ponto")
include_directories("atividades/atv 1/TAD triangulo")
include_directories("atividades/lista TAD/6 carn�/apenas TAD data")
include_directories("atividades/lista TAD/6 carn�/com TAD boleto(completo)")
include_directories("atividades/TAD circulo")
include_directories("atividades/TAD triangulo")

add_executable(3ESD
        .ccls-cache/@@home@runner@3ESD/@nix@store@1gf2flfqnpqbr1b4p4qz2f72y42bs56r-gcc-11.3.0@include@c++@11.3.0@bits@std_abs.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@1gf2flfqnpqbr1b4p4qz2f72y42bs56r-gcc-11.3.0@include@c++@11.3.0@math.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@1gf2flfqnpqbr1b4p4qz2f72y42bs56r-gcc-11.3.0@include@c++@11.3.0@stdlib.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@1gf2flfqnpqbr1b4p4qz2f72y42bs56r-gcc-11.3.0@include@c++@11.3.0@x86_64-unknown-linux-gnu@bits@c++config.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@1gf2flfqnpqbr1b4p4qz2f72y42bs56r-gcc-11.3.0@include@c++@11.3.0@x86_64-unknown-linux-gnu@bits@cpu_defines.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@1gf2flfqnpqbr1b4p4qz2f72y42bs56r-gcc-11.3.0@include@c++@11.3.0@x86_64-unknown-linux-gnu@bits@os_defines.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@alloca.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@atomic_wide_counter.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@byteswap.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@endian.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@endianness.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@floatn-common.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@floatn.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@flt-eval-method.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@fp-fast.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@fp-logb.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@libc-header-start.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@libm-simd-decl-stubs.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@long-double.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@math-vector.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@mathcalls-helper-functions.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@mathcalls.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@pthreadtypes-arch.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@pthreadtypes.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@select.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@stdint-intn.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@stdio_lim.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@stdlib-float.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@struct_mutex.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@struct_rwlock.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@thread-shared-types.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@time64.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@timesize.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@types.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@types@__FILE.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@types@__fpos64_t.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@types@__fpos_t.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@types@__locale_t.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@types@__mbstate_t.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@types@__sigset_t.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@types@clock_t.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@types@clockid_t.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@types@cookie_io_functions_t.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@types@FILE.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@types@locale_t.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@types@sigset_t.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@types@struct_FILE.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@types@struct_timespec.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@types@struct_timeval.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@types@time_t.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@types@timer_t.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@typesizes.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@uintn-identity.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@waitflags.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@waitstatus.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@wordsize.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@endian.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@features-time64.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@features.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@gnu@stubs-64.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@gnu@stubs.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@math.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@stdc-predef.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@stdio.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@stdlib.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@string.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@strings.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@sys@cdefs.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@sys@select.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@sys@types.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@lhdb04f0by4qnvhhwbk64zpm70fw5piy-clang-14.0.6-lib@lib@clang@14.0.6@include@stdarg.h
        .ccls-cache/@@home@runner@3ESD/@nix@store@lhdb04f0by4qnvhhwbk64zpm70fw5piy-clang-14.0.6-lib@lib@clang@14.0.6@include@stddef.h
        .ccls-cache/@@home@runner@C/@nix@store@4m98bsvjh538p292pr4604313mjmnpc5-clang-12.0.1-lib@lib@clang@12.0.1@include@stdarg.h
        .ccls-cache/@@home@runner@C/@nix@store@4m98bsvjh538p292pr4604313mjmnpc5-clang-12.0.1-lib@lib@clang@12.0.1@include@stddef.h
        .ccls-cache/@@home@runner@C/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@floatn-common.h
        .ccls-cache/@@home@runner@C/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@floatn.h
        .ccls-cache/@@home@runner@C/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@libc-header-start.h
        .ccls-cache/@@home@runner@C/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@long-double.h
        .ccls-cache/@@home@runner@C/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@stdio_lim.h
        .ccls-cache/@@home@runner@C/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@time64.h
        .ccls-cache/@@home@runner@C/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@timesize.h
        .ccls-cache/@@home@runner@C/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@types.h
        .ccls-cache/@@home@runner@C/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@types@__FILE.h
        .ccls-cache/@@home@runner@C/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@types@__fpos64_t.h
        .ccls-cache/@@home@runner@C/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@types@__fpos_t.h
        .ccls-cache/@@home@runner@C/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@types@__mbstate_t.h
        .ccls-cache/@@home@runner@C/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@types@FILE.h
        .ccls-cache/@@home@runner@C/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@types@struct_FILE.h
        .ccls-cache/@@home@runner@C/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@typesizes.h
        .ccls-cache/@@home@runner@C/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@bits@wordsize.h
        .ccls-cache/@@home@runner@C/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@features-time64.h
        .ccls-cache/@@home@runner@C/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@features.h
        .ccls-cache/@@home@runner@C/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@gnu@stubs-64.h
        .ccls-cache/@@home@runner@C/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@gnu@stubs.h
        .ccls-cache/@@home@runner@C/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@stdc-predef.h
        .ccls-cache/@@home@runner@C/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@stdio.h
        .ccls-cache/@@home@runner@C/@nix@store@4pqv2mwdn88h7xvsm7a5zplrd8sxzvw0-glibc-2.35-163-dev@include@sys@cdefs.h
        .ccls-cache/@@home@runner@C/@nix@store@iwd8ic5hhwdxn5dga0im55g5hjl270cd-glibc-2.33-47-dev@include@bits@floatn-common.h
        .ccls-cache/@@home@runner@C/@nix@store@iwd8ic5hhwdxn5dga0im55g5hjl270cd-glibc-2.33-47-dev@include@bits@floatn.h
        .ccls-cache/@@home@runner@C/@nix@store@iwd8ic5hhwdxn5dga0im55g5hjl270cd-glibc-2.33-47-dev@include@bits@libc-header-start.h
        .ccls-cache/@@home@runner@C/@nix@store@iwd8ic5hhwdxn5dga0im55g5hjl270cd-glibc-2.33-47-dev@include@bits@long-double.h
        .ccls-cache/@@home@runner@C/@nix@store@iwd8ic5hhwdxn5dga0im55g5hjl270cd-glibc-2.33-47-dev@include@bits@stdio_lim.h
        .ccls-cache/@@home@runner@C/@nix@store@iwd8ic5hhwdxn5dga0im55g5hjl270cd-glibc-2.33-47-dev@include@bits@time64.h
        .ccls-cache/@@home@runner@C/@nix@store@iwd8ic5hhwdxn5dga0im55g5hjl270cd-glibc-2.33-47-dev@include@bits@timesize.h
        .ccls-cache/@@home@runner@C/@nix@store@iwd8ic5hhwdxn5dga0im55g5hjl270cd-glibc-2.33-47-dev@include@bits@types.h
        .ccls-cache/@@home@runner@C/@nix@store@iwd8ic5hhwdxn5dga0im55g5hjl270cd-glibc-2.33-47-dev@include@bits@types@__FILE.h
        .ccls-cache/@@home@runner@C/@nix@store@iwd8ic5hhwdxn5dga0im55g5hjl270cd-glibc-2.33-47-dev@include@bits@types@__fpos64_t.h
        .ccls-cache/@@home@runner@C/@nix@store@iwd8ic5hhwdxn5dga0im55g5hjl270cd-glibc-2.33-47-dev@include@bits@types@__fpos_t.h
        .ccls-cache/@@home@runner@C/@nix@store@iwd8ic5hhwdxn5dga0im55g5hjl270cd-glibc-2.33-47-dev@include@bits@types@__mbstate_t.h
        .ccls-cache/@@home@runner@C/@nix@store@iwd8ic5hhwdxn5dga0im55g5hjl270cd-glibc-2.33-47-dev@include@bits@types@FILE.h
        .ccls-cache/@@home@runner@C/@nix@store@iwd8ic5hhwdxn5dga0im55g5hjl270cd-glibc-2.33-47-dev@include@bits@types@struct_FILE.h
        .ccls-cache/@@home@runner@C/@nix@store@iwd8ic5hhwdxn5dga0im55g5hjl270cd-glibc-2.33-47-dev@include@bits@typesizes.h
        .ccls-cache/@@home@runner@C/@nix@store@iwd8ic5hhwdxn5dga0im55g5hjl270cd-glibc-2.33-47-dev@include@bits@wordsize.h
        .ccls-cache/@@home@runner@C/@nix@store@iwd8ic5hhwdxn5dga0im55g5hjl270cd-glibc-2.33-47-dev@include@features.h
        .ccls-cache/@@home@runner@C/@nix@store@iwd8ic5hhwdxn5dga0im55g5hjl270cd-glibc-2.33-47-dev@include@gnu@stubs-64.h
        .ccls-cache/@@home@runner@C/@nix@store@iwd8ic5hhwdxn5dga0im55g5hjl270cd-glibc-2.33-47-dev@include@gnu@stubs.h
        .ccls-cache/@@home@runner@C/@nix@store@iwd8ic5hhwdxn5dga0im55g5hjl270cd-glibc-2.33-47-dev@include@stdc-predef.h
        .ccls-cache/@@home@runner@C/@nix@store@iwd8ic5hhwdxn5dga0im55g5hjl270cd-glibc-2.33-47-dev@include@stdio.h
        .ccls-cache/@@home@runner@C/@nix@store@iwd8ic5hhwdxn5dga0im55g5hjl270cd-glibc-2.33-47-dev@include@sys@cdefs.h
        .ccls-cache/@@home@runner@C/@nix@store@lhdb04f0by4qnvhhwbk64zpm70fw5piy-clang-14.0.6-lib@lib@clang@14.0.6@include@stdarg.h
        .ccls-cache/@@home@runner@C/@nix@store@lhdb04f0by4qnvhhwbk64zpm70fw5piy-clang-14.0.6-lib@lib@clang@14.0.6@include@stddef.h
        ".ccls-cache/@home@runner@3ESD/atividades@atv 1@basico@main.c"
        ".ccls-cache/@home@runner@3ESD/atividades@atv 1@TAD ponto@main.c"
        ".ccls-cache/@home@runner@3ESD/atividades@atv 1@TAD ponto@ponto.c"
        ".ccls-cache/@home@runner@3ESD/atividades@atv 1@TAD ponto@ponto.h"
        ".ccls-cache/@home@runner@3ESD/atividades@atv 1@TAD triangulo@main.c"
        ".ccls-cache/@home@runner@3ESD/atividades@atv 1@TAD triangulo@ponto.c"
        ".ccls-cache/@home@runner@3ESD/atividades@atv 1@TAD triangulo@ponto.h"
        ".ccls-cache/@home@runner@3ESD/atividades@atv 1@TAD triangulo@triangulo.c"
        ".ccls-cache/@home@runner@3ESD/atividades@atv 1@TAD triangulo@triangulo.h"
        ".ccls-cache/@home@runner@3ESD/atividades@atv3esd2 (exames).c"
        ".ccls-cache/@home@runner@3ESD/atividades@lista TAD@6 carn�@apenas TAD data@data.c"
        ".ccls-cache/@home@runner@3ESD/atividades@lista TAD@6 carn�@apenas TAD data@data.h"
        ".ccls-cache/@home@runner@3ESD/atividades@lista TAD@6 carn�@apenas TAD data@main.c"
        ".ccls-cache/@home@runner@3ESD/atividades@lista TAD@6 carn�@com TAD boleto(completo)@boleto.c"
        ".ccls-cache/@home@runner@3ESD/atividades@lista TAD@6 carn�@com TAD boleto(completo)@boleto.h"
        ".ccls-cache/@home@runner@3ESD/atividades@lista TAD@6 carn�@com TAD boleto(completo)@data.c"
        ".ccls-cache/@home@runner@3ESD/atividades@lista TAD@6 carn�@com TAD boleto(completo)@data.h"
        ".ccls-cache/@home@runner@3ESD/atividades@lista TAD@6 carn�@com TAD boleto(completo)@main.c"
        ".ccls-cache/@home@runner@3ESD/atividades@TAD circulo@circulo.c"
        ".ccls-cache/@home@runner@3ESD/atividades@TAD circulo@circulo.h"
        ".ccls-cache/@home@runner@3ESD/atividades@TAD circulo@main.c"
        ".ccls-cache/@home@runner@3ESD/atividades@TAD circulo@ponto.c"
        ".ccls-cache/@home@runner@3ESD/atividades@TAD circulo@ponto.h"
        ".ccls-cache/@home@runner@3ESD/atividades@TAD triangulo@main.c"
        ".ccls-cache/@home@runner@3ESD/atividades@TAD triangulo@tipoPonto.c"
        ".ccls-cache/@home@runner@3ESD/atividades@TAD triangulo@tipoPonto.h"
        ".ccls-cache/@home@runner@3ESD/atividades@TAD triangulo@tipoTriangulo.c"
        ".ccls-cache/@home@runner@3ESD/atividades@TAD triangulo@tipoTriangulo.h"
        .ccls-cache/@home@runner@C/blah.h
        .ccls-cache/@home@runner@C/main.c
        "atividades/atv 1/basico/main.c"
        "atividades/atv 1/TAD ponto/main.c"
        "atividades/atv 1/TAD ponto/ponto.c"
        "atividades/atv 1/TAD ponto/ponto.h"
        "atividades/atv 1/TAD triangulo/main.c"
        "atividades/atv 1/TAD triangulo/ponto.c"
        "atividades/atv 1/TAD triangulo/ponto.h"
        "atividades/atv 1/TAD triangulo/triangulo.c"
        "atividades/atv 1/TAD triangulo/triangulo.h"
        "atividades/atv 2/atv3esd2 (exames).c"
        "atividades/lista TAD/6 carn�/apenas TAD data/data.c"
        "atividades/lista TAD/6 carn�/apenas TAD data/data.h"
        "atividades/lista TAD/6 carn�/apenas TAD data/main.c"
        "atividades/lista TAD/6 carn�/com TAD boleto(completo)/boleto.c"
        "atividades/lista TAD/6 carn�/com TAD boleto(completo)/boleto.h"
        "atividades/lista TAD/6 carn�/com TAD boleto(completo)/data.c"
        "atividades/lista TAD/6 carn�/com TAD boleto(completo)/data.h"
        "atividades/lista TAD/6 carn�/com TAD boleto(completo)/main.c"
        "atividades/TAD circulo/circulo.c"
        "atividades/TAD circulo/circulo.h"
        "atividades/TAD circulo/main.c"
        "atividades/TAD circulo/ponto.c"
        "atividades/TAD circulo/ponto.h"
        "atividades/TAD triangulo/main.c"
        "atividades/TAD triangulo/tipoPonto.c"
        "atividades/TAD triangulo/tipoPonto.h"
        "atividades/TAD triangulo/tipoTriangulo.c"
        "atividades/TAD triangulo/tipoTriangulo.h")
