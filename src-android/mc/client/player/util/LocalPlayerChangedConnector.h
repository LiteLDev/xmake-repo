#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
// clang-format on

struct LocalPlayerChangedConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Bedrock::PubSub::Connector<void(const LocalPlayer*)>&> mConnector;
    ::ll::TypedStorage<8, 8, ::LocalPlayer const*>                                    mInitialValue;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalPlayerChangedConnector& operator=(LocalPlayerChangedConnector const&);
    LocalPlayerChangedConnector(LocalPlayerChangedConnector const&);
    LocalPlayerChangedConnector();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::function<void(const LocalPlayer*)>
        createLocalPlayerChangedCallback(std::function<void()>, std::function<void()>);
    // NOLINTEND
};
