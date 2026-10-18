#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/ChangeEntityScore.h"
#include "mc/ChangeFakePlayerScore.h"
#include "mc/ChangePlayerScore.h"
#include "mc/RemoveScore.h"
#else // @header-generator platform
#include "mc/network/packet/ChangeEntityScore.h"
#include "mc/network/packet/ChangeFakePlayerScore.h"
#include "mc/network/packet/ChangePlayerScore.h"
#include "mc/network/packet/RemoveScore.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Objective;
struct ScoreboardId;
// clang-format on

struct SetScorePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::variant<RemoveScore, ChangePlayerScore, ChangeEntityScore, ChangeFakePlayerScore>>> mScoreInfo;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SetScorePacketPayload();
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::variant<::RemoveScore, ::ChangePlayerScore, ::ChangeEntityScore, ::ChangeFakePlayerScore>>>
        mScoreInfo;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SetScorePacketPayload
        change(std::vector<std::variant<RemoveScore, ChangePlayerScore, ChangeEntityScore, ChangeFakePlayerScore>>);
#else // @header-generator platform
    MCAPI static ::SetScorePacketPayload change(
        ::std::vector<::std::variant<::RemoveScore, ::ChangePlayerScore, ::ChangeEntityScore, ::ChangeFakePlayerScore>>
            info
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SetScorePacketPayload change(::ScoreboardId const&, ::Objective const&);
#else // @header-generator platform
    MCAPI static ::SetScorePacketPayload change(::ScoreboardId const& id, ::Objective const& objective);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SetScorePacketPayload remove(::ScoreboardId const&, ::Objective const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::SetScorePacketPayload remove(::ScoreboardId const& id, ::Objective const& objective);
#endif // @header-generator platform
    // NOLINTEND
};
