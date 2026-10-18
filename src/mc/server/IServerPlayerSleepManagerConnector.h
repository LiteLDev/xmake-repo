#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

class IServerPlayerSleepManagerConnector {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(Player&)>& getPlayerWakeUpConnector() = 0;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::Player&)>& getPlayerWakeUpConnector() = 0;
#endif // @header-generator platform

    virtual ::Bedrock::PubSub::Connector<void()>& getOnWakeUpAllPlayersConnector() = 0;
    // NOLINTEND
};
