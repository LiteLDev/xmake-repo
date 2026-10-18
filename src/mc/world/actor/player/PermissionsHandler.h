#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

class PermissionsHandler {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // PermissionsHandler inner types define
    using PermissionsPublisher =
        ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>;

    using PermissionsPublisherRefWrapper = ::std::reference_wrapper<
        ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::CommandPermissionLevel> mCommandPermissions;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::PlayerPermissionLevel> mPlayerPermissions;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::PubSub::Publisher<void (), Bedrock::PubSub::ThreadModel::SingleThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>> mClientPlayerPermissionsPublisher;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::PlayerPermissionLevel>  mPlayerPermissions;
    ::ll::TypedStorage<
        8,
        16,
        ::std::shared_ptr<::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>>
        mClientPlayerPermissionsPublisher;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void addSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CommandPermissionLevel getCommandPermissions() const;
#else // @header-generator platform
    MCAPI bool loadSaveData(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PlayerPermissionLevel getPlayerPermissions() const;

    MCNAPI std::optional<std::reference_wrapper<
        Bedrock::PubSub::
            Publisher<void(), Bedrock::PubSub::ThreadModel::SingleThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>>
           getPlayerPermissionsChangedPublisher() const;

    MCNAPI bool loadSaveData(::CompoundTag const&);

    MCNAPI bool operator!=(::PermissionsHandler const&) const;

    MCNAPI void setCommandPermissions(::CommandPermissionLevel);

    MCNAPI void setPlayerPermissions(::PlayerPermissionLevel);
#else // @header-generator platform
    MCAPI ~PermissionsHandler();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::PlayerPermissionLevel playerPermissionLevelFromString(std::string const&);
#else // @header-generator platform
    MCAPI static ::PlayerPermissionLevel playerPermissionLevelFromString(::std::string const& s);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string playerPermissionLevelToString(::PlayerPermissionLevel const&);
#else // @header-generator platform
    MCAPI static ::std::string playerPermissionLevelToString(::PlayerPermissionLevel const& permission);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& DIFF_COMMAND_PERMISSION();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::string const& DIFF_COMMAND_PERMISSION();

    MCAPI static ::std::string const& DIFF_PLAYER_PERMISSION();
#endif
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& DIFF_PLAYER_PERMISSION();
#else // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
