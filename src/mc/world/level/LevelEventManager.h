#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/world/level/ILevelEventManagerCoordinator.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
#else // @header-generator platform
#endif // @header-generator platform
class CompoundTag;
class IDimension;
class LevelEventCoordinator;
class PacketSender;
class UserEntityIdentifierComponent;
class Vec3;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace mce { class Color; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class LevelEventManager : public ::ILevelEventManagerCoordinator {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool const> mIsClientSide;
    ::ll::UntypedStorage<8, 24>          mLevelEventCoordinator;
    ::ll::UntypedStorage<8, 24>          mPacketSender;
    ::ll::UntypedStorage<8, 88>          mLevelEventDataPublisher;
    ::ll::UntypedStorage<8, 88>          mLevelEventCompoundTagPublisher;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool const>                                                    mIsClientSide;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> const> mLevelEventCoordinator;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PacketSender>>                   mPacketSender;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mLevelEventDataPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mLevelEventCompoundTagPublisher;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    LevelEventManager();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~LevelEventManager();
#else // @header-generator platform
    virtual ~LevelEventManager() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void (SharedTypes::Legacy::LevelEvent, const Vec3&, int)>& getLevelEventDataConnector();
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int)>&
    getLevelEventDataConnector() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void (SharedTypes::Legacy::LevelEvent, const CompoundTag&)>& getLevelEventCompoundTagConnector();
    // clang-format on
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&)>&
    getLevelEventCompoundTagConnector() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void broadcastLevelEvent(
        ::SharedTypes::Legacy::LevelEvent,
        ::CompoundTag const&,
        ::UserEntityIdentifierComponent const*
#else // @header-generator platform
    MCAPI void broadcastLevelEvent(
        ::SharedTypes::Legacy::LevelEvent      type,
        ::CompoundTag const&                   tag,
        ::UserEntityIdentifierComponent const* userIdentifierToExclude
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    broadcastLevelEvent(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int, ::UserEntityIdentifierComponent const*);
#else // @header-generator platform
    MCAPI void broadcastLevelEvent(
        ::SharedTypes::Legacy::LevelEvent      type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::UserEntityIdentifierComponent const* userIdentifierToExclude
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void broadcastLocalEvent(::IDimension&, ::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void
    broadcastLocalEvent(::IDimension& dimension, ::SharedTypes::Legacy::LevelEvent type, ::Vec3 const& pos, int data);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(SharedTypes::Legacy::LevelEvent, const Vec3&, int)>&
    $getLevelEventDataConnector();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ::Bedrock::PubSub::Connector<void(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int)>&
    $getLevelEventDataConnector();
#else // LL_PLAT_C
    MCFOLD ::Bedrock::PubSub::Connector<void(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int)>&
    $getLevelEventDataConnector();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(SharedTypes::Legacy::LevelEvent, const CompoundTag&)>&
    $getLevelEventCompoundTagConnector();
    // NOLINTEND
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ::Bedrock::PubSub::Connector<void(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&)>&
    $getLevelEventCompoundTagConnector();
#else // LL_PLAT_C
    MCFOLD ::Bedrock::PubSub::Connector<void(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&)>&
    $getLevelEventCompoundTagConnector();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
