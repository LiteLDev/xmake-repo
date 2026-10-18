#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/actor/ActorType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ReflectProjectileDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ExpressionNode>       mAzimuthAngle;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>       mElevationAngle;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>       mReflectionScale;
    ::ll::TypedStorage<8, 24, std::vector<ActorType>> mProjectilesToReflect;
    ::ll::TypedStorage<8, 24, std::string>            mReflectionSound;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk77b87e;
    ::ll::UntypedStorage<8, 16> mUnk5fa002;
    ::ll::UntypedStorage<8, 16> mUnkafaef4;
    ::ll::UntypedStorage<8, 24> mUnk97eea3;
    ::ll::UntypedStorage<8, 32> mUnk63132a;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ReflectProjectileDefinition& operator=(ReflectProjectileDefinition const&);
    ReflectProjectileDefinition(ReflectProjectileDefinition const&);
    ReflectProjectileDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addProjectileToReflect(std::string const&);

    MCNAPI ~ReflectProjectileDefinition();
#else // @header-generator platform
    MCAPI void _addProjectileToReflect(::std::string const& projectileName);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ReflectProjectileDefinition>>&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ReflectProjectileDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
