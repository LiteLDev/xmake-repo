#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/entity/definitions/DynamicAmbientSound.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct DynamicAmbientSound;
// clang-format on
#endif // @header-generator platform

class AmbientSoundServerComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<DynamicAmbientSound>> mDynamicSounds;
    ::ll::TypedStorage<8, 24, std::string>                      mDefaultEventName;
    ::ll::TypedStorage<4, 4, uint>                              mReevaluationTimeTicks;
    ::ll::TypedStorage<4, 4, uint>                              mTicksSinceReevaluation;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::DynamicAmbientSound>> mDynamicSounds;
    ::ll::TypedStorage<8, 32, ::std::string>                        mDefaultEventName;
    ::ll::TypedStorage<4, 4, uint>                                  mReevaluationTimeTicks;
    ::ll::TypedStorage<4, 4, uint>                                  mTicksSinceReevaluation;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AmbientSoundServerComponent& operator=(AmbientSoundServerComponent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AmbientSoundServerComponent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AmbientSoundServerComponent(::AmbientSoundServerComponent const&);
#else // @header-generator platform
    MCAPI AmbientSoundServerComponent(::AmbientSoundServerComponent const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::AmbientSoundServerComponent const&);
#else // @header-generator platform
    MCAPI void* $ctor(::AmbientSoundServerComponent const&);
#endif // @header-generator platform
    // NOLINTEND
};
