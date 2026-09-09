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
    virtual ~DefaultCommandsContextProvider();

    virtual ::ILevel* getLevel();

    virtual ::NetworkIdentifier getLocalNetworkId() const;

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ILevel* $getLevel();

    MCNAPI ::NetworkIdentifier $getLocalNetworkId() const;

    MCNAPI void $onCommandExecuted(::MCRESULT, ::CommandOriginType, std::string const&, std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
