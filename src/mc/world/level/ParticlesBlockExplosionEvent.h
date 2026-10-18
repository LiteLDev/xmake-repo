#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class ParticlesBlockExplosionEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>              mRadius;
    ::ll::TypedStorage<4, 12, ::Vec3>            mOrigin;
    ::ll::TypedStorage<8, 24, std::vector<Vec3>> mPositions;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                  mRadius;
    ::ll::TypedStorage<4, 12, ::Vec3>                mOrigin;
    ::ll::TypedStorage<8, 24, ::std::vector<::Vec3>> mPositions;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addExplodePosition(::Vec3 const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void load(::CompoundTag const& data);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void load(::CompoundTag const&);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CompoundTag> save() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CompoundTag> save() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ~ParticlesBlockExplosionEvent();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
