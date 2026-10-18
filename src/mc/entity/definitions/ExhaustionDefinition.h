#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext;
struct ExhaustionComponent;
#else // @header-generator platform
#endif // @header-generator platform
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ExhaustionDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk8dd09f;
    ::ll::UntypedStorage<4, 4> mUnk9f798a;
    ::ll::UntypedStorage<4, 4> mUnkb1ab63;
    ::ll::UntypedStorage<4, 4> mUnk35aa3f;
    ::ll::UntypedStorage<4, 4> mUnk2fdc57;
    ::ll::UntypedStorage<4, 4> mUnkf65106;
    ::ll::UntypedStorage<4, 4> mUnk8fad1c;
    ::ll::UntypedStorage<4, 4> mUnk74f282;
    ::ll::UntypedStorage<4, 4> mUnk5b0eb4;
    ::ll::UntypedStorage<4, 4> mUnkeb0195;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI void initialize(::EntityContext&, ::ExhaustionComponent&) const;
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    ExhaustionDefinition& operator=(ExhaustionDefinition const&);
    ExhaustionDefinition(ExhaustionDefinition const&);
    ExhaustionDefinition();
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ExhaustionDefinition>>&);
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ExhaustionDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
