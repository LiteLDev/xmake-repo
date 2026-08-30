#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ExperienceJoinRequestInfo.h"
#include "mc/client/gui/GameConnectionInfoEx.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/social/MultiplayerGameInfo.h"

// auto generated forward declare list
// clang-format off
struct IWorldTransferHandler;
struct WorldTransferActionContext;
// clang-format on

struct ExternalWorldTransferActionFunc {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 48> mFunc;
    ::ll::TypedStorage<8, 704, std::variant<GameConnectionInfoEx, Social::MultiplayerGameInfo, ExperienceJoinRequestInfo, Realms::RealmId>> mDestinationReconnectInfo;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalWorldTransferActionFunc& operator=(ExternalWorldTransferActionFunc const&);
    ExternalWorldTransferActionFunc(ExternalWorldTransferActionFunc const&);
    ExternalWorldTransferActionFunc();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ExternalWorldTransferActionFunc();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
