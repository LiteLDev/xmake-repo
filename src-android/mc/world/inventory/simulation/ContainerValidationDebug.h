#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerValidationCaller.h"

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
        ::ll::TypedStorage<4, 4, ::ContainerValidationCaller const> mCaller;
        // NOLINTEND

    public:
        // prevent constructor by default
        Client();
    };

    class ServerAuth {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::ContainerValidationCaller const> mCaller;
        // NOLINTEND

    public:
        // prevent constructor by default
        ServerAuth();
    };

    class ServerScript {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::ContainerValidationCaller const> mCaller;
        // NOLINTEND

    public:
        // prevent constructor by default
        ServerScript();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ContainerValidationDebug::Client const>       mClient;
    ::ll::TypedStorage<4, 4, ::ContainerValidationDebug::ServerAuth const>   mServerAuth;
    ::ll::TypedStorage<4, 4, ::ContainerValidationDebug::ServerScript const> mServerScript;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerValidationDebug();
};
