#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Factory.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/level/CommandOriginSystem.h"
#include "mc/world/response/ActorEventResponse.h"
#include "mc/world/response/CommandResponseBase.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct ActorEventResponseCollection;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ActorQueueCommandResponse : public ::CommandResponseBase, public ::ActorEventResponse {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ActorQueueCommandResponse();

    virtual ::CommandOriginSystem _getCommandOriginSystem() const;

    virtual std::string const& getName() const;

    virtual void executeAction(::RenderParams&) const;

    virtual void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ActorEventResponseCollection>>&, ::Factory<ActorEventResponse> const&) const;
    // clang-format on
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& NameID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::CommandOriginSystem $_getCommandOriginSystem() const;

    MCNAPI std::string const& $getName() const;

    MCNAPI void $executeAction(::RenderParams&) const;

    MCNAPI void $buildSchema(
        std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ActorEventResponseCollection>>&,
        ::Factory<ActorEventResponse> const&
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
