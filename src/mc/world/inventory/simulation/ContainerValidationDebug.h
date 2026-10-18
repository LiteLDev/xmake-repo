#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerValidationCaller.h"
#else // @header-generator platform
#endif // @header-generator platform

class ContainerValidationDebug {
public:
    // ContainerValidationDebug inner types declare
    // clang-format off
    class Client;
    class ServerAuth;
    class ServerScript;
    // clang-format on

    // ContainerValidationDebug inner types define
    class Client {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, ::ContainerValidationCaller const> mCaller;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4> mUnk5c5185;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        Client& operator=(Client const&);
        Client(Client const&);
#endif // @header-generator platform
        Client();
    };

    class ServerAuth {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, ::ContainerValidationCaller const> mCaller;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4> mUnk5a0a61;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        ServerAuth& operator=(ServerAuth const&);
        ServerAuth(ServerAuth const&);
#endif // @header-generator platform
        ServerAuth();
    };

    class ServerScript {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, ::ContainerValidationCaller const> mCaller;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4> mUnk65e57a;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        ServerScript& operator=(ServerScript const&);
        ServerScript(ServerScript const&);
#endif // @header-generator platform
        ServerScript();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ContainerValidationDebug::Client const>       mClient;
    ::ll::TypedStorage<4, 4, ::ContainerValidationDebug::ServerAuth const>   mServerAuth;
    ::ll::TypedStorage<4, 4, ::ContainerValidationDebug::ServerScript const> mServerScript;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ContainerValidationDebug();
#else // @header-generator platform
#endif // @header-generator platform
};
