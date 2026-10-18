#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorDefinitionTrigger.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class EntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
class Item;
#else // @header-generator platform
#endif // @header-generator platform
struct TrustingComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class TrustingDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                     mTrustProbability;
    ::ll::TypedStorage<8, 24, std::set<const Item*>>    mTrustItems;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnTrust;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>   mUnk8b60f5;
    ::ll::UntypedStorage<8, 16>  mUnkc2c83e;
    ::ll::UntypedStorage<8, 104> mUnk907038;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    TrustingDefinition& operator=(TrustingDefinition const&);
    TrustingDefinition(TrustingDefinition const&);
    TrustingDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI TrustingDefinition();
#else // @header-generator platform
    MCAPI void addTrustItemByName(::std::string const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addTrustItemByName(std::string const&);

    MCNAPI void initialize(::EntityContext&, ::TrustingComponent&) const;
#else // @header-generator platform
    MCAPI void initialize(::EntityContext&, ::TrustingComponent& component) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, TrustingDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::TrustingDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
