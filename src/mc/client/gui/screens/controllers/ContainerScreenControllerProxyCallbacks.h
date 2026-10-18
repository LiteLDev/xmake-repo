#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/ButtonEventType.h"
#include "mc/client/gui/screens/NodeId.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on

struct ContainerScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetItemInstance;
    ::ll::UntypedStorage<8, 48> mAutoPlace;
    ::ll::UntypedStorage<8, 48> mReceiveEvent;
    ::ll::UntypedStorage<8, 48> mLeave;
    ::ll::UntypedStorage<8, 48> mCanBeClosedByServer;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerScreenControllerProxyCallbacks& operator=(ContainerScreenControllerProxyCallbacks const&);
    ContainerScreenControllerProxyCallbacks(ContainerScreenControllerProxyCallbacks const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ContainerScreenControllerProxyCallbacks();
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
#include "mc/client/gui/screens/ButtonEventType.h"
#include "mc/client/gui/screens/NodeId.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on

struct ContainerScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::ItemStack const&(::std::string const&, int)>> mGetItemInstance;
    ::ll::TypedStorage<8, 64, ::std::function<void(int, ::std::string const&, int)>>          mAutoPlace;
    ::ll::TypedStorage<8, 64, ::std::function<::NodeId(uint, ::ButtonEventType, ::std::string const&, int)>>
                                                       mReceiveEvent;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mLeave;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>> mCanBeClosedByServer;
    // NOLINTEND
};
#else // @header-generator platform
struct ContainerScreenControllerProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
