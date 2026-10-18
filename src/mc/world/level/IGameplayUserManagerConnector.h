#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Player;
// clang-format on

class IGameplayUserManagerConnector {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(EntityContext&)>& getGameplayUserAddedConnector() = 0;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::EntityContext&)>& getGameplayUserAddedConnector() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(const EntityContext&)>& getGameplayUserResumedConnector() = 0;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::EntityContext const&)>& getGameplayUserResumedConnector() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(const EntityContext&)>& getGameplayUserSuspendedConnector() = 0;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::EntityContext const&)>& getGameplayUserSuspendedConnector() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(const Player&)>& getPlayerRenamedConnector() = 0;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::Player const&)>& getPlayerRenamedConnector() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(EntityContext&)>& getGameplayUserRemovedConnector() = 0;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::EntityContext&)>& getGameplayUserRemovedConnector() = 0;
#endif // @header-generator platform

    virtual ::Bedrock::PubSub::Connector<void()>& getAnyGameplayUsersRemovedConnector() = 0;
    // NOLINTEND
};
