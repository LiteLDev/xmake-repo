#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/Connection__ReconnectionType.h"
#include "mc/ExperienceJoinRequestInfo.h"
#include "mc/client/gui/GameConnectionInfoEx.h"
#include "mc/client/gui/ProgressHandler.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/social/MultiplayerGameInfo.h"

class ReconnectGameProgressHandler : public ::ProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 704, std::variant<GameConnectionInfoEx, Social::MultiplayerGameInfo, ExperienceJoinRequestInfo, Realms::RealmId>> mCookie;
    ::ll::TypedStorage<1, 1, ::Connection::ReconnectionType> mType;
    ::ll::TypedStorage<8, 16, std::optional<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>>> mSuspendTime;
    ::ll::TypedStorage<8, 16, std::optional<std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>>> mReconnectInitiated;
    // clang-format on
    // NOLINTEND
};
