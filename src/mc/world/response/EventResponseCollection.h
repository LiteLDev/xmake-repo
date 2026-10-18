#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Factory.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EventResponse;
class SemVersion;
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct EventResponseCollection {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<EventResponse>>> mResponses;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::EventResponse>>> mResponses;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    EventResponseCollection& operator=(EventResponseCollection const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EventResponseCollection>>
    buildSchema(std::string const&, ::SemVersion const&, ::Factory<EventResponse> const&);
#else // @header-generator platform
    MCNAPI static ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::EventResponseCollection>>
    buildSchema(::std::string const& name, ::SemVersion const& version, ::Factory<::EventResponse> const& factory);
#endif // @header-generator platform
    // NOLINTEND
};
