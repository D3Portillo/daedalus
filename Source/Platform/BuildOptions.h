#ifndef BUILDOPTIONS_H_
#define BUILDOPTIONS_H_

//
//	Platform options
//
#undef  DAEDALUS_COMPRESSED_ROM_SUPPORT			// Define this to enable support for compressed Roms(zip'ed). If you define this, you will need to add unzip.c and ioapi.c to the project too. (Located at Source/Utility/Zip/)

#undef  DAEDALUS_BREAKPOINTS_ENABLED			// Define this to enable breakpoint support
#undef	DAEDALUS_ENDIAN_MODE					// Define this to specify whether the platform is big or little endian

// DAEDALUS_ENDIAN_MODE should be defined as one of:
//
#define DAEDALUS_ENDIAN_LITTLE 1
#define DAEDALUS_ENDIAN_BIG 2

//
//	Set up your preprocessor flags to search Source/SysXYZ/Include first, where XYZ is your target platform
//	If certain options are not defined, defaults are provided below
//
#include "Platform.h"

// The endianness should really be defined
#ifndef DAEDALUS_ENDIAN_MODE
#error DAEDALUS_ENDIAN_MODE was not specified in Platform.h
#endif

#ifndef MAKE_UNCACHED_PTR
#define MAKE_UNCACHED_PTR(x)	(x)
#endif


//	Configuration options. These are not really platform-specific, but control various features
//

#if defined(DAEDALUS_CONFIG_RELEASE)
#include "Base/Release/BuildConfig.h"
#elif defined(DAEDALUS_CONFIG_PROFILE)
#include "Base/Profile/BuildConfig.h"
#elif defined(DAEDALUS_CONFIG_DEV)
#include "Base/Dev/BuildConfig.h"
#else
#error Unknown compilation mode
#endif


#endif // BUILDOPTIONS_H_