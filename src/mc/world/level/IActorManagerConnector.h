#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/world/actor/ActorInitializationMethod.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class IActorManagerConnector {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ::Bedrock::PubSub::Connector<void (Actor&)>& getRegisterEntityAddedConnector() = 0;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::Actor&)>& getRegisterEntityAddedConnector() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void (Actor&, ActorInitializationMethod)>& getRegisterPostReloadActorConnector() = 0;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::Actor&, ::ActorInitializationMethod)>&
    getRegisterPostReloadActorConnector() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void (Actor&)>& getRegisterOnRemoveActorEntityReferenceConnector() = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::Actor&)>& getRegisterOnRemoveActorEntityReferenceConnector() = 0;
#endif // @header-generator platform
    // NOLINTEND
};
