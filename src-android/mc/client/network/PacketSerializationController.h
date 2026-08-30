#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/network/IPacketSerializationController.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"

// auto generated forward declare list
// clang-format off
class Option;
namespace cereal { struct ReflectionCtx; }
namespace flighting { class ConfigurationToggles; }
// clang-format on

class PacketSerializationController : public ::IPacketSerializationController {
public:
    // PacketSerializationController inner types declare
    // clang-format off
    struct ControlTowerConfiguration;
    // clang-format on

    // PacketSerializationController inner types define
    struct ControlTowerConfiguration {
    public:
        // ControlTowerConfiguration inner types define
        using PacketBitSet = std::bitset<351>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 48, std::bitset<351>> mOverrides;
        // NOLINTEND
    };

    using Overrides = std::map<MinecraftPacketIds, SerializationMode>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>                                mOverrides;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRemoteConfigSubscription;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PacketSerializationController();

    virtual std::optional<SerializationMode> getOverrideModeForPacket(::MinecraftPacketIds) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _onControlTowerUpdate(::Option const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<SerializationMode> $getOverrideModeForPacket(::MinecraftPacketIds) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
