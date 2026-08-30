#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Factory.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct ActorEventResponseCollection;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ActorEventResponse {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ActorEventResponse();

    virtual std::string const& getName() const;

    virtual void executeAction(::RenderParams&) const = 0;

    virtual void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ActorEventResponseCollection>>&, ::Factory<ActorEventResponse> const&) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
