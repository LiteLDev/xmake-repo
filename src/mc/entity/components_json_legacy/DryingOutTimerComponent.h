#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class DryingOutTimerComponent {
public:
    // DryingOutTimerComponent inner types declare
    // clang-format off
    class DryingOutTimerDefinition;
    // clang-format on

    // DryingOutTimerComponent inner types define
    enum class DryingOutState : int {
        DryingOut             = 0,
        ExceededDryingOutTime = 1,
        StoppedDryingOut      = 2,
    };

    class DryingOutTimerDefinition {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, float>                     mTotalTime;
        ::ll::TypedStorage<4, 4, float>                     mWaterBottleAdditionalTime;
        ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnFullyDriedOut;
        ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnStoppedDryingOut;
        ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnRecoverAfterDriedOut;
#else // @header-generator platform
        ::ll::TypedStorage<4, 4, float>                      mTotalTime;
        ::ll::TypedStorage<4, 4, float>                      mWaterBottleAdditionalTime;
        ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnFullyDriedOut;
        ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnStoppedDryingOut;
        ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnRecoverAfterDriedOut;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
        DryingOutTimerDefinition& operator=(DryingOutTimerDefinition const&);
#else // @header-generator platform
        DryingOutTimerDefinition(DryingOutTimerDefinition const&);
#endif // @header-generator platform
        DryingOutTimerDefinition();

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI DryingOutTimerDefinition(::DryingOutTimerComponent::DryingOutTimerDefinition&&);
#else // @header-generator platform
        MCAPI DryingOutTimerDefinition(::DryingOutTimerComponent::DryingOutTimerDefinition&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI DryingOutTimerDefinition(::DryingOutTimerComponent::DryingOutTimerDefinition const&);
#else // @header-generator platform
        MCAPI void initialize(::EntityContext& entity, ::DryingOutTimerComponent& dryingOutComponent) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void initialize(::EntityContext&, ::DryingOutTimerComponent&) const;
#else // @header-generator platform
        MCAPI ::DryingOutTimerComponent::DryingOutTimerDefinition&
        operator=(::DryingOutTimerComponent::DryingOutTimerDefinition const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::DryingOutTimerComponent::DryingOutTimerDefinition&
        operator=(::DryingOutTimerComponent::DryingOutTimerDefinition&&);
#else // @header-generator platform
        MCAPI ~DryingOutTimerDefinition();
#endif // @header-generator platform
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static void buildSchema(
            std::shared_ptr<JsonUtil::JsonSchemaObjectNode<
                JsonUtil::EmptyClass,
                DryingOutTimerComponent::DryingOutTimerDefinition>>&
#else // @header-generator platform
        MCAPI static void buildSchema(
            ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<
                ::JsonUtil::EmptyClass,
                ::DryingOutTimerComponent::DryingOutTimerDefinition>>& root
#endif // @header-generator platform
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(::DryingOutTimerComponent::DryingOutTimerDefinition&&);
#else // @header-generator platform
        MCAPI void* $ctor(::DryingOutTimerComponent::DryingOutTimerDefinition&&);
        // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(::DryingOutTimerComponent::DryingOutTimerDefinition const&);
#else // @header-generator platform
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 296, ::DryingOutTimerComponent::DryingOutTimerDefinition> mDefinition;
#else // @header-generator platform
    ::ll::TypedStorage<8, 320, ::DryingOutTimerComponent::DryingOutTimerDefinition> mDefinition;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                   mTicksRemainingUntilDryOut;
    ::ll::TypedStorage<4, 4, ::DryingOutTimerComponent::DryingOutState>             mState;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    DryingOutTimerComponent& operator=(DryingOutTimerComponent const&);

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canBeAffectedByWaterBottle() const;

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void refillTimeWithWaterBottle();

    MCNAPI ~DryingOutTimerComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper&);
#endif // @header-generator platform
    // NOLINTEND
};
