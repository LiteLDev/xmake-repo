#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct ExhaustionComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ExhaustionDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mHeal;
    ::ll::TypedStorage<4, 4, float> mJump;
    ::ll::TypedStorage<4, 4, float> mSprintJump;
    ::ll::TypedStorage<4, 4, float> mMine;
    ::ll::TypedStorage<4, 4, float> mAttack;
    ::ll::TypedStorage<4, 4, float> mDamage;
    ::ll::TypedStorage<4, 4, float> mWalk;
    ::ll::TypedStorage<4, 4, float> mSprint;
    ::ll::TypedStorage<4, 4, float> mSwim;
    ::ll::TypedStorage<4, 4, float> mLunge;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initialize(::EntityContext&, ::ExhaustionComponent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ExhaustionDefinition>>&);
    // NOLINTEND
};
