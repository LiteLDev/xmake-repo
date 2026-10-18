#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/ICommandsContextProvider.h"

// auto generated forward declare list
// clang-format off
class ILevel;
class Minecraft;
class NetworkIdentifier;
struct MCRESULT;
// clang-format on

class DefaultCommandsContextProvider : public ::ICommandsContextProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Minecraft&> mMinecraft;
    // NOLINTEND

public:
    // prevent constructor by default
    DefaultCommandsContextProvider& operator=(DefaultCommandsContextProvider const&);
    DefaultCommandsContextProvider(DefaultCommandsContextProvider const&);
    DefaultCommandsContextProvider();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DefaultCommandsContextProvider();
#else // @header-generator platform
    virtual ~DefaultCommandsContextProvider() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ILevel* getLevel();
#else // @header-generator platform
    virtual ::ILevel* getLevel() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::NetworkIdentifier getLocalNetworkId() const;
#else // @header-generator platform
    virtual ::NetworkIdentifier getLocalNetworkId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onCommandExecuted(::MCRESULT, ::CommandOriginType, std::string const&, std::string const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DefaultCommandsContextProvider(::Minecraft&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Minecraft&);
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
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ILevel* $getLevel();
#else // @header-generator platform
    MCAPI ::ILevel* $getLevel();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::NetworkIdentifier $getLocalNetworkId() const;
#else // @header-generator platform
    MCAPI ::NetworkIdentifier $getLocalNetworkId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onCommandExecuted(::MCRESULT, ::CommandOriginType, std::string const&, std::string const&);
#else // @header-generator platform
    MCAPI void $onCommandExecuted(
        ::MCRESULT           result,
        ::CommandOriginType  originType,
        ::std::string const& commandName,
        ::std::string const& commandString
    );


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
