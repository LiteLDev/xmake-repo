#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class IsotropicFaceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> mFaceTextureIsotropic;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IsotropicFaceData();

    MCNAPI bool isTextureIsotropic(uchar) const;

    MCNAPI bool setTextureIsotropic(::Json::Value const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class IsotropicFaceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> mFaceTextureIsotropic;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool setTextureIsotropic(::Json::Value const& isotropicData);
    // NOLINTEND
};
#else // @header-generator platform
class IsotropicFaceData {};
#endif // @header-generator platform
#endif // @header-generator platform
