/* src/config.h.  Generated from config.h.in by configure.  */
/* src/config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Hardware and OS version for build host */
#define BUILD_MACHINE "Linux 4.15.0-122-generic x86_64"

/* Date and time for build */
#define BUILD_TIME "Wed Oct 28 12:03:26 CET 2020"

/* User doing build */
#define BUILD_USER "emanuel@emanuel-HP-Pavilion-Notebook"

/* Turn off water-water neighborlist optimization only */
/* #undef DISABLE_WATERWATER_NLIST */

/* Turn off all water neighborlist optimization */
/* #undef DISABLE_WATER_NLIST */

/* Define to dummy `main' function (if any) required to link to the Fortran
   libraries. */
/* #undef F77_DUMMY_MAIN */

/* Define to a macro mangling the given C identifier (in lower and upper
   case), which must not contain underscores, for linking with Fortran. */
/* #undef F77_FUNC */

/* As F77_FUNC, but for C identifiers containing underscores. */
/* #undef F77_FUNC_ */

/* Set to F77_FUNC(name,NAME) if Fortran used, otherwise 'name' for C. */
#define F77_OR_C_FUNC(name,NAME) name

/* Set to F77_FUNC_(name,NAME) if Fortran used, otherwise 'name' for C. */
#define F77_OR_C_FUNC_(name,NAME) name

/* Define if F77 and FC dummy `main' functions are identical. */
/* #undef FC_DUMMY_MAIN_EQ_F77 */

/* Use the d prefix on fftw2 includes */
/* #undef FFTW2_NAME_DFFTW */

/* Dont use any prefix on fftw2 includes */
/* #undef FFTW2_NAME_FFTW */

/* Use the s prefix on fftw2 includes */
/* #undef FFTW2_NAME_SFFTW */

/* IBM HEX floating-point format if set (s390?) */
/* #undef FLOAT_FORMAT_IBM_HEX */

/* IEEE754 floating-point format. Memory layout is defined by macros
   IEEE754_BIG_ENDIAN_BYTE_ORDER and IEEE754_BIG_ENDIAN_WORD_ORDER. */
#define FLOAT_FORMAT_IEEE754 /**/

/* VAX floating-point format if set */
/* #undef FLOAT_FORMAT_VAX */

/* Use assembly intrinsics kernels for BlueGene */
/* #undef GMX_BLUEGENE */

/* Don't use calloc(3) */
/* #undef GMX_BROKEN_CALLOC */

/* If defined, only start MPI runs when this variable is set */
/* #undef GMX_CHECK_MPI_ENV */

/* Enable special hacks for Cray XT3 */
/* #undef GMX_CRAY_XT3 */

/* Do not optimize FFTW setups (not needed with SSE FFT kernels) */
/* #undef GMX_DISABLE_FFTW_MEASURE */

/* Compile with dlopen */
#define GMX_DLOPEN /**/

/* Compile in double precision */
#define GMX_DOUBLE /**/

/* Use Built-in FFTPACK FFT library */
/* #undef GMX_FFT_FFTPACK */

/* Use FFTW2 FFT library */
/* #undef GMX_FFT_FFTW2 */

/* Use FFTW3 FFT library */
#define GMX_FFT_FFTW3 /**/

/* Use Intel MKL FFT library */
/* #undef GMX_FFT_MKL */

/* Enable Fortran support */
/* #undef GMX_FORTRAN */

/* Single-precision SSE instructions on ia32 */
/* #undef GMX_IA32_SSE */

/* Double-precision SSE2 instructions on ia32 */
/* #undef GMX_IA32_SSE2 */

/* Use ia64 assembly tuned for Itanium2 */
/* #undef GMX_IA64_ASM */

/* Integer byte order is big endian. */
/* #undef GMX_INTEGER_BIG_ENDIAN */

/* Use our own instead of system XDR libraries */
/* #undef GMX_INTERNAL_XDR */

/* Use a real MPI library */
#define GMX_LIB_MPI /**/

/* Make a parallel version of GROMACS using MPI */
#define GMX_MPI /**/

/* Ignore calls to nice(3) */
/* #undef GMX_NO_NICE */

/* Ignore calls to system(3) */
/* #undef GMX_NO_SYSTEM */

/* Enable IBM Power6-specific F77 kernels */
/* #undef GMX_POWER6 */

/* Use the PowerPC hardware 1/sqrt(x) */
/* #undef GMX_POWERPC_INVSQRT */

/* Use PowerPC Altivec inner loops */
/* #undef GMX_PPC_ALTIVEC */

/* Use (modified) Gamess-UK for QM-MM calculations */
/* #undef GMX_QMMM_GAMESS */

/* Use (modified) Gaussian0x for QM-MM calculations */
#define GMX_QMMM_GAUSSIAN /**/

/* Use (modified) Mopac 7 for QM-MM calculations */
/* #undef GMX_QMMM_MOPAC */

/* Use ORCA for QM-MM calculations */
#define GMX_QMMM_ORCA /**/

/* Use the GROMACS software 1/sqrt(x) */
#define GMX_SOFTWARE_INVSQRT /**/

/* Use threads for parallelization */
/* #undef GMX_THREADS */

/* Single-precision SSE instructions on X86_64 */
/* #undef GMX_X86_64_SSE */

/* Double-precision SSE2 instructions on X86_64 */
#define GMX_X86_64_SSE2 /**/

/* Enable x86 gcc inline assembly */
/* #undef GMX_X86_GCC_INLINE_ASM */

/* Enable x86 MSVC inline assembly */
/* #undef GMX_X86_MSVC_INLINE_ASM */

/* Define to 1 if you have the <altivec.h> header file. */
/* #undef HAVE_ALTIVEC_H */

/* Define to 1 if the system has the type `bool'. */
/* #undef HAVE_BOOL */

/* Define to 1 if you have the `cbrt' function. */
#define HAVE_CBRT 1

/* Define to 1 if you have the <direct.h> header file. */
/* #undef HAVE_DIRECT_H */

/* Define to 1 if you have the <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* Define to 1 if you have the `fileno' function. */
#define HAVE_FILENO 1

/* Define to 1 if fseeko (and presumably ftello) exists and is declared. */
#define HAVE_FSEEKO 1

/* Define to 1 if you have the `fsync' function. */
#define HAVE_FSYNC 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if the system has the type `gid_t'. */
#define HAVE_GID_T 1

/* Define to 1 if you have the <gsl/gsl_version.h> header file. */
/* #undef HAVE_GSL_GSL_VERSION_H */

/* Define to 1 if you have the <inttypes.h> header file. */
/* #undef HAVE_INTTYPES_H */

/* Define to 1 if you have the `isfinite' function. */
/* #undef HAVE_ISFINITE */

/* Define to 1 if you have the `isnan' function. */
#define HAVE_ISNAN 1

/* Define to 1 if you have the `fftw3' library (-lfftw3). */
#define HAVE_LIBFFTW3 1

/* Define to 1 if you have the `fftw3f' library (-lfftw3f). */
/* #undef HAVE_LIBFFTW3F */

/* Do we have libgsl */
/* #undef HAVE_LIBGSL */

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define to 1 if you have the `mkl' library (-lmkl). */
/* #undef HAVE_LIBMKL */

/* Define to 1 if you have the `mkl_intel' library (-lmkl_intel). */
/* #undef HAVE_LIBMKL_INTEL */

/* Define to 1 if you have the `mkl_intel_lp64' library (-lmkl_intel_lp64). */
/* #undef HAVE_LIBMKL_INTEL_LP64 */

/* Define to 1 if you have the `nsl' library (-lnsl). */
#define HAVE_LIBNSL 1

/* Define to 1 if you have the `xml2' library (-lxml2). */
/* #undef HAVE_LIBXML2 */

/* Define to 1 if you have the <libxml/parser.h> header file. */
/* #undef HAVE_LIBXML_PARSER_H */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the memalign function */
#define HAVE_MEMALIGN 1

/* Define to 1 if you have the <memory.h> header file. */
/* #undef HAVE_MEMORY_H */

/* Pipes (popen/pclose) supported */
#define HAVE_PIPES /**/

/* Define to 1 if you have the posix_memalign function */
#define HAVE_POSIX_MEMALIGN 1

/* Define if you have POSIX threads libraries and header files. */
/* #undef HAVE_PTHREAD */

/* pthread_setaffinity_np is available */
/* #undef HAVE_PTHREAD_SETAFFINITY */

/* Define to 1 if you have the <regex.h> header file. */
#define HAVE_REGEX_H 1

/* Define to 1 if you have the <rpc/rpc.h> header file. */
#define HAVE_RPC_RPC_H 1

/* Define to 1 if you have the <rpc/xdr.h> header file. */
#define HAVE_RPC_XDR_H 1

/* Define to 1 if you have the <sched.h> header file. */
/* #undef HAVE_SCHED_H */

/* SIGUSR1 supported and defined */
#define HAVE_SIGUSR1 /**/

/* Define to 1 if the system has the type `sig_atomic_t'. */
#define HAVE_SIG_ATOMIC_T 1

/* Define to 1 if you have the <stdint.h> header file. */
/* #undef HAVE_STDINT_H */

/* Define to 1 if you have the <stdlib.h> header file. */
/* #undef HAVE_STDLIB_H */

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the <strings.h> header file. */
/* #undef HAVE_STRINGS_H */

/* Define to 1 if you have the <string.h> header file. */
/* #undef HAVE_STRING_H */

/* Define to 1 if you have the `sysconf' function. */
/* #undef HAVE_SYSCONF */

/* Define to 1 if you have the <sys/stat.h> header file. */
/* #undef HAVE_SYS_STAT_H */

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if the system has the type `uid_t'. */
#define HAVE_UID_T 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Define to 1 if you have the `_aligned_malloc' function. */
/* #undef HAVE__ALIGNED_MALLOC */

/* Define to 1 if you have the `_isfinite' function. */
/* #undef HAVE__ISFINITE */

/* Define to 1 if you have the `_isnan' function. */
/* #undef HAVE__ISNAN */

/* Bytes in IEEE fp word are in big-endian order if set, little-endian if not.
   Only relevant when FLOAT_FORMAT_IEEE754 is defined. */
/* #undef IEEE754_BIG_ENDIAN_BYTE_ORDER */

/* The two words in a double precision variable are in b ig-endian order if
   set, little-endian if not. Do NOT assume this is the same as the byte
   order! Only relevant when FLOAT_FORMAT_IEEE754 is defined. */
/* #undef IEEE754_BIG_ENDIAN_WORD_ORDER */

/* MPI_IN_PLACE available for collective operations */
#define MPI_IN_PLACE_EXISTS /**/

/* Name of package */
#define PACKAGE "gromacs"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "gmx-users@gromacs.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "gromacs"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "gromacs 4.5.5"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "gromacs"

/* Define to the home page for this package. */
/* #undef PACKAGE_URL */

/* Define to the version of this package. */
#define PACKAGE_VERSION "4.5.5"

/* Define to the necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long int', as computed by sizeof. */
#define SIZEOF_LONG_INT 8

/* The size of `long long int', as computed by sizeof. */
#define SIZEOF_LONG_LONG_INT 8

/* The size of `off_t', as computed by sizeof. */
#define SIZEOF_OFF_T 8

/* The size of `void*', as computed by sizeof. */
#define SIZEOF_VOIDP 8

/* Define to 1 if you have the ANSI C header files. */
/* #undef STDC_HEADERS */

/* Use pthreads for multithreading */
/* #undef THREAD_PTHREADS */

/* Enable profiling for call and wait times */
/* #undef TMPI_PROFILE */

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Use generated version info */
/* #undef USE_VERSION_H */

/* Version number of package */
#define VERSION "4.5.5"

/* Define if using the dmalloc debugging malloc package */
/* #undef WITH_DMALLOC */

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define to 1 if the X Window System is missing or not being used. */
#define X_DISPLAY_MISSING 1

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define to 1 to make fseeko visible on some hosts (e.g. glibc 2.2). */
/* #undef _LARGEFILE_SOURCE */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `long int' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#define restrict __restrict
/* Work around a bug in Sun C++: it does not support _Restrict or
   __restrict__, even though the corresponding Sun C compiler ends up with
   "#define restrict _Restrict" or "#define restrict __restrict__" in the
   previous line.  Perhaps some future version of Sun C++ will work with
   restrict; if so, hopefully it defines __RESTRICT like Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
# define __restrict__
#endif

/* Define to `int' (and hope it's atomic) if <signal.h> doesn't define it. */
/* #undef sig_atomic_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */
