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
        ::ll::TypedStorage<4, 4, float>                     mTotalTime;
        ::ll::TypedStorage<4, 4, float>                     mWaterBottleAdditionalTime;
        ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnFullyDriedOut;
        ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnStoppedDryingOut;
        ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnRecoverAfterDriedOut;
        // NOLINTEND

    public:
        // prevent constructor by default
        DryingOutTimerDefinition& operator=(DryingOutTimerDefinition const&);
        DryingOutTimerDefinition();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI DryingOutTimerDefinition(::DryingOutTimerComponent::DryingOutTimerDefinition&&);

        MCNAPI DryingOutTimerDefinition(::DryingOutTimerComponent::DryingOutTimerDefinition const&);

        MCNAPI void initialize(::EntityContext&, ::DryingOutTimerComponent&) const;

        MCNAPI ::DryingOutTimerComponent::DryingOutTimerDefinition&
        operator=(::DryingOutTimerComponent::DryingOutTimerDefinition&&);
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void buildSchema(
            std::shared_ptr<JsonUtil::JsonSchemaObjectNode<
                JsonUtil::EmptyClass,
                DryingOutTimerComponent::DryingOutTimerDefinition>>&
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::DryingOutTimerComponent::DryingOutTimerDefinition&&);

        MCNAPI void* $ctor(::DryingOutTimerComponent::DryingOutTimerDefinition const&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 296, ::DryingOutTimerComponent::DryingOutTimerDefinition> mDefinition;
    ::ll::TypedStorage<4, 4, int>                                                   mTicksRemainingUntilDryOut;
    ::ll::TypedStorage<4, 4, ::DryingOutTimerComponent::DryingOutState>             mState;
    // NOLINTEND

public:
    // prevent constructor by default
    DryingOutTimerComponent& operator=(DryingOutTimerComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI bool canBeAffectedByWaterBottle() const;

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void refillTimeWithWaterBottle();

    MCNAPI ~DryingOutTimerComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
