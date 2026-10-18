#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Factory.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/response/EventResponse.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class SemVersion;
#else // @header-generator platform
class EventResponse;
#endif // @header-generator platform
struct EventResponseCollection;
struct PackLoadInfo;
namespace JsonUtil { class EmptyClass; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class EventResponseFactory : public ::Factory<EventResponse> {
#else // @header-generator platform
class EventResponseFactory : public ::Factory<::EventResponse> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EventResponseCollection>>> mSchema;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        16,
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::EventResponseCollection>>>
        mSchema;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EventResponseFactory();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeFactory(::PackLoadInfo const&) = 0;
#else // @header-generator platform
    virtual void initializeFactory(::PackLoadInfo const& packLoadInfo) = 0;
#endif // @header-generator platform

    virtual void initSchema() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initSchema(std::string const&, ::SemVersion const&);
#else // @header-generator platform
#endif // @header-generator platform
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
