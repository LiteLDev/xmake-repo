#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct LeashableToComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class LeashableToDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mCanRetrieveFrom;
    ::ll::TypedStorage<1, 1, bool> mUnleashOnRemoval;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk9978b7;
    ::ll::UntypedStorage<1, 1> mUnkbb08c4;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    LeashableToDefinition& operator=(LeashableToDefinition const&);
    LeashableToDefinition(LeashableToDefinition const&);
    LeashableToDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initialize(::EntityContext&, ::LeashableToComponent&) const;

    MCNAPI void uninitialize(::EntityContext&, ::LeashableToComponent&) const;
#else // @header-generator platform
    MCAPI void uninitialize(::EntityContext& entity, ::LeashableToComponent&) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, LeashableToDefinition>>&);
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::LeashableToDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
