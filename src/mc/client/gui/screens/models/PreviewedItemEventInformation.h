#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/events/IMinecraftEventing.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/persona/ProfileType.h"

struct PreviewedItemEventInformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                    mPieceIndex;
    ::ll::TypedStorage<8, 16, ::mce::UUID>           mPieceId;
    ::ll::TypedStorage<8, 24, std::string>           mProductId;
    ::ll::TypedStorage<8, 24, std::string>           mCreatorId;
    ::ll::TypedStorage<8, 24, std::string>           mCreatorName;
    ::ll::UntypedStorage<4, 4>                       mPromotionType;
    ::ll::TypedStorage<1, 1, ::persona::ProfileType> mProfileType;
    ::ll::TypedStorage<4, 4, int>                    mRow;
    ::ll::TypedStorage<4, 4, int>                    mCol;
    ::ll::TypedStorage<8, 8, double>                 mSecondsToLoad;
    ::ll::TypedStorage<1, 1, bool>                   mIsOwned;
    ::ll::TypedStorage<1, 1, bool>                   mEventSent;
    // NOLINTEND

public:
    // prevent constructor by default
    PreviewedItemEventInformation(PreviewedItemEventInformation const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PreviewedItemEventInformation();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/events/IMinecraftEventing.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/persona/ProfileType.h"

struct PreviewedItemEventInformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                 mPieceIndex;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                        mPieceId;
    ::ll::TypedStorage<8, 32, ::std::string>                      mProductId;
    ::ll::TypedStorage<8, 32, ::std::string>                      mCreatorId;
    ::ll::TypedStorage<8, 32, ::std::string>                      mCreatorName;
    ::ll::TypedStorage<4, 4, ::IMinecraftEventing::PromotionType> mPromotionType;
    ::ll::TypedStorage<1, 1, ::persona::ProfileType>              mProfileType;
    ::ll::TypedStorage<4, 4, int>                                 mRow;
    ::ll::TypedStorage<4, 4, int>                                 mCol;
    ::ll::TypedStorage<8, 8, double>                              mSecondsToLoad;
    ::ll::TypedStorage<1, 1, bool>                                mIsOwned;
    ::ll::TypedStorage<1, 1, bool>                                mEventSent;
    // NOLINTEND
};
#else // @header-generator platform
struct PreviewedItemEventInformation {};
#endif // @header-generator platform
#endif // @header-generator platform
