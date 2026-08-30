#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Factory.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/response/EventResponse.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
struct EventResponseCollection;
struct PackLoadInfo;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class EventResponseFactory : public ::Factory<EventResponse> {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EventResponseCollection>>> mSchema;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EventResponseFactory();

    virtual void initializeFactory(::PackLoadInfo const&) = 0;

    virtual void initSchema() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initSchema(std::string const&, ::SemVersion const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
