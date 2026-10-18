#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/resources/PackSourceOptions.h"
#else // @header-generator platform
#endif // @header-generator platform

struct TreatmentPackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::PackSourceOptions> mBase;
    ::ll::UntypedStorage<1, 24>                   mPath;
    ::ll::TypedStorage<1, 1, ::PackType>          mType;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkca207c;
    ::ll::UntypedStorage<8, 32> mUnkb3cd51;
    ::ll::UntypedStorage<1, 1>  mUnk6f272f;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    TreatmentPackSourceOptions& operator=(TreatmentPackSourceOptions const&);
    TreatmentPackSourceOptions(TreatmentPackSourceOptions const&);
    TreatmentPackSourceOptions();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TreatmentPackSourceOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
