#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorFilterGroup.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GroupSizeDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>               mRadius;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mFilter;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnkba22e3;
    ::ll::UntypedStorage<8, 64> mUnka73a42;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    GroupSizeDefinition& operator=(GroupSizeDefinition const&);
    GroupSizeDefinition(GroupSizeDefinition const&);
    GroupSizeDefinition();
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, GroupSizeDefinition>>&);
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GroupSizeDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
