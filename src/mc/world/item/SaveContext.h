#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SaveContext {
public:
    // SaveContext inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class SaveOperation : uchar {
        DeepCopy    = 0,
        ShallowCopy = 1,
    };

#endif // @header-generator platform
    enum class SaveUseCase : uchar {
        SaveToDisk               = 0,
        SendOverNetwork          = 1,
        Clone                    = 2,
        Move                     = 3,
        BlockActorToItemUserData = 4,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum class SaveOperation : uchar {
        DeepCopy    = 0,
        ShallowCopy = 1,
    };

#else // @header-generator platform
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::SaveContext::SaveUseCase> mSaveUseCase;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SaveContext::SaveOperation getOperation() const;

    MCNAPI bool isBlockActorToItemUserDataContext() const;

    MCNAPI bool isMoveContext() const;
#else // @header-generator platform
    ::SaveContext::SaveUseCase mSaveUseCase{SaveUseCase::Clone};
#endif // @header-generator platform
    // NOLINTEND
};
