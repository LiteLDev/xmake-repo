#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct MobEffectPane {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>          mId;
    ::ll::TypedStorage<8, 24, std::string> mTime;
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<1, 1, bool>         mIsAmbient;
    // NOLINTEND

public:
    // prevent constructor by default
    MobEffectPane& operator=(MobEffectPane const&);
    MobEffectPane(MobEffectPane const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MobEffectPane();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct MobEffectPane {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>            mId;
    ::ll::TypedStorage<8, 32, ::std::string> mTime;
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<1, 1, bool>           mIsAmbient;
    // NOLINTEND
};
#else // @header-generator platform
struct MobEffectPane {};
#endif // @header-generator platform
#endif // @header-generator platform
