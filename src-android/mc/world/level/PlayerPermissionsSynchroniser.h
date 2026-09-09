#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
class PlayerAbilitiesManager;
struct ActorUniqueID;
// clang-format on

class PlayerPermissionsSynchroniser {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mPacketSender;
    ::ll::UntypedStorage<8, 24> mPlayerAbilitiesManager;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerPermissionsSynchroniser();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayerPermissionsSynchroniser(::Bedrock::NonOwnerPointer<PlayerAbilitiesManager>);

    MCNAPI void sendPermissionsRequest(::ActorUniqueID);

    MCNAPI void setPacketSender(::PacketSender&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<PlayerAbilitiesManager>);
    // NOLINTEND
};
