#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
