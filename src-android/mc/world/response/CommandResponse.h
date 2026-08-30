#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Factory.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/response/CommandResponseBase.h"
#include "mc/world/response/EventResponse.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct EventResponseCollection;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class CommandResponse : public ::CommandResponseBase, public ::EventResponse {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CommandResponse();

    virtual std::string const& getName() const;

    virtual void executeAction(::RenderParams&) const;

    virtual void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EventResponseCollection>>&, ::Factory<EventResponse> const&) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string const& $getName() const;

    MCNAPI void $executeAction(::RenderParams&) const;

    MCNAPI void $buildSchema(
        std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EventResponseCollection>>&,
        ::Factory<EventResponse> const&
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
