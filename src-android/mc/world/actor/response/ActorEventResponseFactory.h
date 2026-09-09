#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IPackLoadScoped.h"
#include "mc/util/Factory.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/response/ActorEventResponse.h"

// auto generated forward declare list
// clang-format off
class PackLoadContext;
struct ActorEventResponseCollection;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ActorEventResponseFactory : public ::IPackLoadScoped, public ::Factory<ActorEventResponse> {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ActorEventResponseCollection>>> mSchema;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ActorEventResponseFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorEventResponseFactory();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ActorEventResponseFactory(::PackLoadContext const&);

    MCNAPI void initSchema();

    MCNAPI void initializeFactory(::PackLoadContext const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PackLoadContext const&);
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
