#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

struct DeferredSound {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<4, 12, ::Vec3>      mPos;
    ::ll::TypedStorage<4, 4, float>        mVolume;
    ::ll::TypedStorage<4, 4, float>        mPitch;
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredSound& operator=(DeferredSound const&);
    DeferredSound(DeferredSound const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DeferredSound(std::string const&, ::Vec3 const&, float, float);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, ::Vec3 const&, float, float);
    // NOLINTEND
};
#else // @header-generator platform
struct DeferredSound {};
#endif // @header-generator platform
