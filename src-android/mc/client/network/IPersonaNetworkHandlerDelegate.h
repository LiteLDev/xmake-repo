#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class IClientInstance;
class ILevel;
class SerializedSkinRef;
namespace mce { class UUID; }
// clang-format on

class IPersonaNetworkHandlerDelegate {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPersonaNetworkHandlerDelegate() = default;

    virtual void setClientLevel(::Bedrock::NonOwnerPointer<ILevel>) = 0;

    virtual void onTick(::IClientInstance&) = 0;

    virtual void onEntityRemoved(::Actor&) = 0;

    virtual void onLevelDestruction() = 0;

    virtual void addSkinToQueue(::mce::UUID const&, ::SerializedSkinRef const&) = 0;

    virtual void eraseSessionPersona(::mce::UUID const&) = 0;
    // NOLINTEND
};
