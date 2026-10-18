#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class INetworkGameConnector;
struct ExperienceJoinRequestInfo;
struct GameConnectionInfoEx;
struct PlayerJoinWorldContext;
namespace Realms { struct RealmId; }
namespace Social { class MultiplayerGameInfo; }
// clang-format on

class UniversalGameJoiner {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void joinGame(
        ::INetworkGameConnector&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>>,
        std::variant<
            GameConnectionInfoEx,
            Social::MultiplayerGameInfo,
            ExperienceJoinRequestInfo,
            Realms::RealmId> const&,
        ::PlayerJoinWorldContext
    );
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class INetworkGameConnector;
struct ExperienceJoinRequestInfo;
struct GameConnectionInfoEx;
struct PlayerJoinWorldContext;
namespace Realms { struct RealmId; }
namespace Social { class MultiplayerGameInfo; }
// clang-format on

class UniversalGameJoiner {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void joinGame(
        ::INetworkGameConnector&                         minecraftGame,
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> clientInstance,
        ::std::variant<
            ::GameConnectionInfoEx,
            ::Social::MultiplayerGameInfo,
            ::ExperienceJoinRequestInfo,
            ::Realms::RealmId> const& joinInfo,
        ::PlayerJoinWorldContext      context
    );
    // NOLINTEND
};
#else // @header-generator platform
class UniversalGameJoiner {};
#endif // @header-generator platform
#endif // @header-generator platform
