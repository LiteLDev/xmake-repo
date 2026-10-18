#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/sound/SoundItem.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class SoundItem;
// clang-format on
#endif // @header-generator platform

class SoundEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>            mCategory;
    ::ll::TypedStorage<8, 24, std::string>            mSubtitle;
    ::ll::TypedStorage<8, 24, std::vector<SoundItem>> mAllSoundItems;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>              mCategory;
    ::ll::TypedStorage<8, 32, ::std::string>              mSubtitle;
    ::ll::TypedStorage<8, 24, ::std::vector<::SoundItem>> mAllSoundItems;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~SoundEvent();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ~SoundEvent();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
