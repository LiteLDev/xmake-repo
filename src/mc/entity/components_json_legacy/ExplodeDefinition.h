#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/util/FloatRange.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class ExplodeComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class ExplodeDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::FloatRange>                           mFuseLength;
    ::ll::TypedStorage<4, 4, float>                                  mExplosionPower;
    ::ll::TypedStorage<4, 4, float>                                  mMaxResistance;
    ::ll::TypedStorage<1, 1, bool>                                   mIsFuseLit;
    ::ll::TypedStorage<1, 1, bool>                                   mCausesFire;
    ::ll::TypedStorage<4, 4, float>                                  mDamageScaling;
    ::ll::TypedStorage<1, 1, bool>                                   mBreaksBlocks;
    ::ll::TypedStorage<1, 1, bool>                                   mTogglesBlocks;
    ::ll::TypedStorage<1, 1, bool>                                   mFireAffectedByGriefing;
    ::ll::TypedStorage<1, 1, bool>                                   mDestroyAffectedByGriefing;
    ::ll::TypedStorage<4, 4, float>                                  mKnockbackScaling;
    ::ll::TypedStorage<2, 2, ::SharedTypes::Legacy::LevelEvent>      mParticleType;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundEffect;
    ::ll::TypedStorage<1, 1, bool>                                   mNegatesFallDamage;
    ::ll::TypedStorage<1, 1, bool>                                   mAllowUnderwater;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ExplodeDefinition();
#else // @header-generator platform
    MCAPI void initialize(::EntityContext& entity, ::ExplodeComponent& component) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initialize(::EntityContext&, ::ExplodeComponent&) const;
#else // @header-generator platform
    MCAPI void setParticleDefinitionByName(::std::string const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setParticleDefinitionByName(std::string const&);
#else // @header-generator platform
    MCAPI void setSoundDefinitionByName(::std::string const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setSoundDefinitionByName(std::string const&);

    MCNAPI void uninitialize(::EntityContext&) const;
#else // @header-generator platform
    MCAPI void uninitialize(::EntityContext& entity) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ExplodeDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static void
    buildSchema(::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::ExplodeDefinition>>& root);
#endif // @header-generator platform
    // NOLINTEND
};
