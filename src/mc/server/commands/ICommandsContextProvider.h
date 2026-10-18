#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOriginType.h"

// auto generated forward declare list
// clang-format off
class ILevel;
class NetworkIdentifier;
struct MCRESULT;
// clang-format on

class ICommandsContextProvider {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ICommandsContextProvider();
#else // @header-generator platform
    virtual ~ICommandsContextProvider() = default;
#endif // @header-generator platform

    virtual ::ILevel* getLevel() = 0;

    virtual ::NetworkIdentifier getLocalNetworkId() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onCommandExecuted(::MCRESULT, ::CommandOriginType, std::string const&, std::string const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void onCommandExecuted(
        ::MCRESULT           result,
        ::CommandOriginType  originType,
        ::std::string const& commandName,
        ::std::string const& commandString
    ) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
