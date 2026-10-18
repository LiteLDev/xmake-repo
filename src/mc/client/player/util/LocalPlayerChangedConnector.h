#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class LocalPlayer;
// clang-format on

struct LocalPlayerChangedConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk27af58;
    ::ll::UntypedStorage<8, 8> mUnk6d5e5b;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalPlayerChangedConnector& operator=(LocalPlayerChangedConnector const&);
    LocalPlayerChangedConnector(LocalPlayerChangedConnector const&);
    LocalPlayerChangedConnector();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::function<void(::LocalPlayer const*)>
    createLocalPlayerChangedCallback(::std::function<void()> initCallback, ::std::function<void()> resetCallback);
    // NOLINTEND
};
#else // @header-generator platform
struct LocalPlayerChangedConnector {};
#endif // @header-generator platform
#endif // @header-generator platform
