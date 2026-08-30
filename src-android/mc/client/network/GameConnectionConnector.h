#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"

struct GameConnectionConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Bedrock::PubSub::Connector<void(bool)>&> mConnector;
    ::ll::TypedStorage<1, 1, bool>                                      mInitialValue;
    // NOLINTEND

public:
    // prevent constructor by default
    GameConnectionConnector& operator=(GameConnectionConnector const&);
    GameConnectionConnector(GameConnectionConnector const&);
    GameConnectionConnector();
};
