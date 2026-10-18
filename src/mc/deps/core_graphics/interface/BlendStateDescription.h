#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/enums/BlendTarget.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/enums/BlendTarget.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
struct BlendStateDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::mce::BlendTarget> blendSource;
    ::ll::TypedStorage<1, 1, ::mce::BlendTarget> blendDestination;
    ::ll::TypedStorage<1, 1, ::mce::BlendTarget> alphaSource;
    ::ll::TypedStorage<1, 1, ::mce::BlendTarget> alphaDestination;
    ::ll::TypedStorage<1, 1, uchar>              colorWriteMask;
    ::ll::TypedStorage<1, 1, bool>               enableBlend;
    ::ll::TypedStorage<1, 1, bool>               enableAlphaToCoverage;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlendStateDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct BlendStateDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::mce::BlendTarget> blendSource;
    ::ll::TypedStorage<1, 1, ::mce::BlendTarget> blendDestination;
    ::ll::TypedStorage<1, 1, ::mce::BlendTarget> alphaSource;
    ::ll::TypedStorage<1, 1, ::mce::BlendTarget> alphaDestination;
    ::ll::TypedStorage<1, 1, uchar>              colorWriteMask;
    ::ll::TypedStorage<1, 1, bool>               enableBlend;
    ::ll::TypedStorage<1, 1, bool>               enableAlphaToCoverage;
    // NOLINTEND
};
#else // @header-generator platform
struct BlendStateDescription {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
