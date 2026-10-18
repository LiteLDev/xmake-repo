#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Factory.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class ActorEventResponse;
class SemVersion;
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct ActorEventResponseCollection {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<ActorEventResponse>>> mResponses;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ActorEventResponse>>> mResponses;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ActorEventResponseCollection>>
    buildSchema(std::string const&, ::SemVersion const&, ::Factory<ActorEventResponse> const&);
#else // @header-generator platform
    MCNAPI static ::std::shared_ptr<
        ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ActorEventResponseCollection>>
    buildSchema(::std::string const& name, ::SemVersion const& version, ::Factory<::ActorEventResponse> const& factory);
#endif // @header-generator platform
    // NOLINTEND
};
