#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/molang/ExpressionNode.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class EntityContext;
struct HeartbeatServerComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class HeartbeatDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>      mSoundEventName;
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mHeartRateExpression;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk45c731;
    ::ll::UntypedStorage<8, 16> mUnk6a3f0a;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    HeartbeatDefinition& operator=(HeartbeatDefinition const&);
    HeartbeatDefinition(HeartbeatDefinition const&);
    HeartbeatDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI HeartbeatDefinition();

    MCNAPI void initialize(::EntityContext&, ::HeartbeatServerComponent&) const;
#else // @header-generator platform
    MCAPI void initialize(::EntityContext& entity, ::HeartbeatServerComponent& component) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, HeartbeatDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::HeartbeatDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
