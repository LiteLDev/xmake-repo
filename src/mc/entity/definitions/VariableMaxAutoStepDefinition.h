#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext;
struct VariableMaxAutoStepComponent;
#else // @header-generator platform
#endif // @header-generator platform
namespace JsonUtil { class EmptyClass; }
// clang-format on

class VariableMaxAutoStepDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float> mBaseValue;
    ::ll::TypedStorage<4, 4, float> mControlledValue;
    ::ll::TypedStorage<4, 4, float> mJumpPreventedValue;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk825ef0;
    ::ll::UntypedStorage<4, 4> mUnkfa0d76;
    ::ll::UntypedStorage<4, 4> mUnkb88705;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI void initialize(::EntityContext&, ::VariableMaxAutoStepComponent&) const;
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    VariableMaxAutoStepDefinition& operator=(VariableMaxAutoStepDefinition const&);
    VariableMaxAutoStepDefinition(VariableMaxAutoStepDefinition const&);
    VariableMaxAutoStepDefinition();
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, VariableMaxAutoStepDefinition>>&);
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::VariableMaxAutoStepDefinition>>&
            root
    );
#endif // @header-generator platform
    // NOLINTEND
};
