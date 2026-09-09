#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/world/level/ILevelEventManagerCoordinator.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
class IDimension;
class LevelEventCoordinator;
class PacketSender;
class UserEntityIdentifierComponent;
class Vec3;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace mce { class Color; }
// clang-format on

class LevelEventManager : public ::ILevelEventManagerCoordinator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mIsClientSide;
    ::ll::UntypedStorage<8, 24>          mLevelEventCoordinator;
    ::ll::UntypedStorage<8, 24>          mPacketSender;
    ::ll::UntypedStorage<8, 88>          mLevelEventDataPublisher;
    ::ll::UntypedStorage<8, 88>          mLevelEventCompoundTagPublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelEventManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~LevelEventManager();

    virtual ::Bedrock::PubSub::Connector<void (SharedTypes::Legacy::LevelEvent, const Vec3&, int)>& getLevelEventDataConnector();

    virtual ::Bedrock::PubSub::Connector<void (SharedTypes::Legacy::LevelEvent, const CompoundTag&)>& getLevelEventCompoundTagConnector();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void broadcastLevelEvent(
        ::SharedTypes::Legacy::LevelEvent,
        ::CompoundTag const&,
        ::UserEntityIdentifierComponent const*
    );

    MCNAPI void
    broadcastLevelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int, ::UserEntityIdentifierComponent const*);

    MCNAPI void broadcastLocalEvent(::IDimension&, ::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::PubSub::Connector<void(SharedTypes::Legacy::LevelEvent, const Vec3&, int)>&
    $getLevelEventDataConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(SharedTypes::Legacy::LevelEvent, const CompoundTag&)>&
    $getLevelEventCompoundTagConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
