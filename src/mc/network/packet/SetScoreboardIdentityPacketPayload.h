#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/packet/ScoreboardIdentityPacketInfo.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/packet/ScoreboardIdentityPacketType.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
struct PlayerScoreboardId;
struct ScoreboardId;
#else // @header-generator platform
struct ScoreboardIdentityPacketInfo;
#endif // @header-generator platform
// clang-format on

class SetScoreboardIdentityPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::ScoreboardIdentityPacketType>             mType;
    ::ll::TypedStorage<8, 24, std::vector<ScoreboardIdentityPacketInfo>> mIdentityInfo;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::ScoreboardIdentityPacketType>                 mType;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScoreboardIdentityPacketInfo>> mIdentityInfo;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static functions
#else // @header-generator platform
    // member functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SetScoreboardIdentityPacketPayload change(::ScoreboardId const&, ::PlayerScoreboardId const&);
#else // @header-generator platform
    MCAPI ~SetScoreboardIdentityPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
