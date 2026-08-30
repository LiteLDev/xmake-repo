#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ILevelListCache;
struct IGameMultiplayerDisabledTextProvider;
struct IGameServerShutdown;
struct IOptionalServerInfoGetter;
struct IWorldTransfer;
struct IWorldTransferInitiationValidator;
struct IWorldTransferInitiator;
// clang-format on

class WorldTransferAgent : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<IOptionalServerInfoGetter>> mOptionalServerInfoGetter;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IGameMultiplayerDisabledTextProvider>> mGameMultiplayerDisabledTextProvider;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IWorldTransferInitiationValidator>> mTransferInitiationValidator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IWorldTransferInitiator>> mTransferInitiator;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTransferAgent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldTransferAgent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldTransferAgent(::IWorldTransfer&, ::IGameServerShutdown&, ::ILevelListCache&);

    MCNAPI ::IWorldTransferInitiator const& getWorldTransferInitiator() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IWorldTransfer&, ::IGameServerShutdown&, ::ILevelListCache&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
