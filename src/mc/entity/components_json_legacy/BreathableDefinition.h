#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
class BreathableComponent;
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BreathableDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                           mTotalSupply;
    ::ll::TypedStorage<4, 4, int>                           mSuffocateTime;
    ::ll::TypedStorage<4, 4, float>                         mInhaleTime;
    ::ll::TypedStorage<1, 1, bool>                          mBreathesAir;
    ::ll::TypedStorage<1, 1, bool>                          mBreathesWater;
    ::ll::TypedStorage<1, 1, bool>                          mBreathesLava;
    ::ll::TypedStorage<1, 1, bool>                          mBreathesSolids;
    ::ll::TypedStorage<1, 1, bool>                          mGeneratesBubbles;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>> mBreathableBlocks;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>> mNonBreathableBlocks;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                               mTotalSupply;
    ::ll::TypedStorage<4, 4, int>                               mSuffocateTime;
    ::ll::TypedStorage<4, 4, float>                             mInhaleTime;
    ::ll::TypedStorage<1, 1, bool>                              mBreathesAir;
    ::ll::TypedStorage<1, 1, bool>                              mBreathesWater;
    ::ll::TypedStorage<1, 1, bool>                              mBreathesLava;
    ::ll::TypedStorage<1, 1, bool>                              mBreathesSolids;
    ::ll::TypedStorage<1, 1, bool>                              mGeneratesBubbles;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mBreathableBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mNonBreathableBlocks;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BreathableDefinition();
#else // @header-generator platform
    MCAPI void addBreathableBlockDescriptor(::BlockDescriptor const& blockDescriptor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addBreathableBlockDescriptor(::BlockDescriptor const&);
#else // @header-generator platform
    MCAPI void addNonBreathableBlockDescriptor(::BlockDescriptor const& blockDescriptor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addNonBreathableBlockDescriptor(::BlockDescriptor const&);

    MCNAPI void initialize(::EntityContext&, ::BreathableComponent&) const;
#else // @header-generator platform
    MCAPI void initialize(::EntityContext& entity, ::BreathableComponent& component) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BreathableDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BreathableDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
