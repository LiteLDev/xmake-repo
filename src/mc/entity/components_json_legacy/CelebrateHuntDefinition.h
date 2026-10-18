#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/FloatRange.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorFilterGroup.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class CelebrateHuntDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                mBroadcast;
    ::ll::TypedStorage<4, 4, float>               mRadius;
    ::ll::TypedStorage<4, 4, int>                 mDuration;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mCelebrationTargets;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>        mCelebrateSound;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>      mCelebrateSound;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 8, ::FloatRange>        mSoundInterval;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, CelebrateHuntDefinition>>&);
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::CelebrateHuntDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
