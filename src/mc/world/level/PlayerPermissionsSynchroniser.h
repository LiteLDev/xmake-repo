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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mPacketSender;
    ::ll::UntypedStorage<8, 24> mPlayerAbilitiesManager;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PacketSender>>           mPacketSender;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PlayerAbilitiesManager>> mPlayerAbilitiesManager;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PlayerPermissionsSynchroniser();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit PlayerPermissionsSynchroniser(::Bedrock::NonOwnerPointer<PlayerAbilitiesManager>);

    MCNAPI void sendPermissionsRequest(::ActorUniqueID);

    MCNAPI void setPacketSender(::PacketSender&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<PlayerAbilitiesManager>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void sendPermissionsRequest(::ActorUniqueID playerId);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
