#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ImageTelemetryInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                 mTotalImageCount;
    ::ll::TypedStorage<4, 4, uint>                 mImageFailCount;
    ::ll::TypedStorage<4, 4, uint>                 mImageSuccessCount;
    ::ll::TypedStorage<4, 4, uint>                 mImageCachedCount;
    ::ll::TypedStorage<8, 8, ulong>                mTotalImagesSize;
    ::ll::TypedStorage<8, 24, std::vector<ushort>> mImageResponseCodes;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk7970fc;
    ::ll::UntypedStorage<4, 4>  mUnk7c2da9;
    ::ll::UntypedStorage<4, 4>  mUnk6a84dc;
    ::ll::UntypedStorage<4, 4>  mUnk734b8f;
    ::ll::UntypedStorage<8, 8>  mUnkc71583;
    ::ll::UntypedStorage<8, 24> mUnk9c9ad5;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ImageTelemetryInfo& operator=(ImageTelemetryInfo const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ImageTelemetryInfo(ImageTelemetryInfo const&);
    ImageTelemetryInfo();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ImageTelemetryInfo& operator+=(::ImageTelemetryInfo);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ~ImageTelemetryInfo();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
