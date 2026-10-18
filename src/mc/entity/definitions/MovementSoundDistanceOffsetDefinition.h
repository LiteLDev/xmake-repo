#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct MovementSoundDistanceOffsetDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float> mValue;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk869e41;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    MovementSoundDistanceOffsetDefinition& operator=(MovementSoundDistanceOffsetDefinition const&);
    MovementSoundDistanceOffsetDefinition(MovementSoundDistanceOffsetDefinition const&);
    MovementSoundDistanceOffsetDefinition();
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void buildSchema(
        std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, MovementSoundDistanceOffsetDefinition>>&
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<
            ::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::MovementSoundDistanceOffsetDefinition>>& root
#endif // @header-generator platform
    );
    // NOLINTEND
};
