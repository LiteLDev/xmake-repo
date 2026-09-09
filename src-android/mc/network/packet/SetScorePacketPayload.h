#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ChangeEntityScore.h"
#include "mc/ChangeFakePlayerScore.h"
#include "mc/ChangePlayerScore.h"
#include "mc/RemoveScore.h"

// auto generated forward declare list
// clang-format off
class Objective;
struct ScoreboardId;
// clang-format on

struct SetScorePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::variant<RemoveScore, ChangePlayerScore, ChangeEntityScore, ChangeFakePlayerScore>>> mScoreInfo;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SetScorePacketPayload();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SetScorePacketPayload
        change(std::vector<std::variant<RemoveScore, ChangePlayerScore, ChangeEntityScore, ChangeFakePlayerScore>>);

    MCNAPI static ::SetScorePacketPayload change(::ScoreboardId const&, ::Objective const&);

    MCNAPI static ::SetScorePacketPayload remove(::ScoreboardId const&, ::Objective const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
