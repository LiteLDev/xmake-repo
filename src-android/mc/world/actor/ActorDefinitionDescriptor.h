#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector_base.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/entity/factory/DefinitionInstanceGroup.h"
#include "mc/entity/factory/GoalDefinitionInstanceGroup.h"
#include "mc/world/actor/ActorAliasDescription.h"
#include "mc/world/actor/ActorDefinitionAttribute.h"
#include "mc/world/actor/ActorDefinitionEvent.h"
#include "mc/world/actor/ActorPropertiesDescription.h"
#include "mc/world/actor/AnimationScriptsDescription.h"
#include "mc/world/actor/AnimationsDescription.h"
#include "mc/world/actor/IdentifierDescription.h"
#include "mc/world/actor/IsSpawnableDescription.h"
#include "mc/world/actor/IsSummonableDescription.h"
#include "mc/world/actor/RuntimeIdentifierDescription.h"
#include "mc/world/actor/SpawnCategoryDescription.h"
#include "mc/world/actor/ai/goal/LegacyGoalDefinition.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionTrigger;
struct ActorDefinitionEventStackEntry;
struct AmphibiousMoveControlDescription;
struct AttackDescription;
struct BehaviorTreeDescription;
struct BreakBlocksDescription;
struct BreakDoorAnnotationDescription;
struct CommandBlockDescription;
struct ContainerDescription;
struct DwellerDescription;
struct EconomyTradeableDescription;
struct GenericMoveControlDescription;
struct GlideMoveControlDescription;
struct IllagerBeastBlockedDescription;
struct MobEffectChangeDescription;
struct MoveControlBasicDescription;
struct MoveControlDolphinDescription;
struct MoveControlFlyDescription;
struct MoveControlHoverDescription;
struct MoveControlSkipDescription;
struct MoveControlSwayDescription;
struct NavigationClimbDescription;
struct NavigationFloatDescription;
struct NavigationFlyDescription;
struct NavigationGenericDescription;
struct NavigationHoverDescription;
struct NavigationSwimDescription;
struct NavigationWalkDescription;
struct PreferredPathDescription;
struct ProjectileDescription;
struct SlimeMoveControlDescription;
struct StrengthDescription;
struct TeleportDescription;
struct TrailDescription;
struct TransformationDescription;
struct VariantParameterList;
namespace SharedTypes::v1_21_100 { struct TickWorldDefinition; }
namespace SharedTypes::v1_26_40 { struct BucketableComponentDefinition; }
namespace SharedTypes::v1_26_40 { struct DynamicJumpControlComponentDefinition; }
namespace SharedTypes::v1_26_40 { struct HideComponentDefinition; }
namespace SharedTypes::v1_26_40 { struct JumpControlComponentDefinition; }
namespace SharedTypes::v1_26_40 { struct ManagedWanderingTraderComponentDefinition; }
namespace SharedTypes::v1_26_40 { struct OpenDoorAnnotationComponentDefinition; }
namespace SharedTypes::v1_26_40 { struct PersistentComponentDefinition; }
namespace SharedTypes::v1_26_40 { struct TradeResupplyComponentDefinition; }
namespace SharedTypes::v1_26_40 { struct TrustComponentDefinition; }
// clang-format on

class ActorDefinitionDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_set<HashedString>> mComponentNames;
    ::ll::TypedStorage<8, 32, ::IdentifierDescription> mIdentifier;
    ::ll::TypedStorage<8, 32, ::RuntimeIdentifierDescription> mRuntimeIdentifier;
    ::ll::TypedStorage<8, 16, ::IsSpawnableDescription> mIsSpawnable;
    ::ll::TypedStorage<8, 16, ::IsSummonableDescription> mIsSummonable;
    ::ll::TypedStorage<8, 48, ::AnimationsDescription> mAnimationsDescription;
    ::ll::TypedStorage<8, 32, ::AnimationScriptsDescription> mAnimationScriptsDescription;
    ::ll::TypedStorage<8, 24, ::ActorPropertiesDescription> mActorPropertiesDescription;
    ::ll::TypedStorage<8, 32, ::ActorAliasDescription> mActorAliasDescription;
    ::ll::TypedStorage<8, 16, ::SpawnCategoryDescription> mSpawnCategoryDescription;
    ::ll::TypedStorage<8, 24, std::vector<LegacyGoalDefinition>> mGoalDefinitions;
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionAttribute>> mAttributes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ActorDefinitionEvent>> mEventHandlers;
    ::ll::TypedStorage<8, 56, ::DefinitionInstanceGroup> mDefinitionGroup;
    ::ll::TypedStorage<8, 112, ::GoalDefinitionInstanceGroup> mGoalDefinitionGroup;
    ::ll::TypedStorage<8, 8, ::AttackDescription const*> mAttack;
    ::ll::TypedStorage<8, 8, ::MobEffectChangeDescription const*> mMobEffects;
    ::ll::TypedStorage<8, 8, ::AmphibiousMoveControlDescription const*> mAmphibiousMoveControl;
    ::ll::TypedStorage<8, 8, ::BehaviorTreeDescription const*> mBehavior;
    ::ll::TypedStorage<8, 8, ::BreakBlocksDescription const*> mBreakBlocks;
    ::ll::TypedStorage<8, 8, ::BreakDoorAnnotationDescription const*> mBreakDoorAnnotation;
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_26_40::BucketableComponentDefinition const*> mBucketable;
    ::ll::TypedStorage<8, 8, ::CommandBlockDescription const*> mCommandBlock;
    ::ll::TypedStorage<8, 8, ::ContainerDescription const*> mContainer;
    ::ll::TypedStorage<8, 8, ::DwellerDescription const*> mDweller;
    ::ll::TypedStorage<8, 8, ::GenericMoveControlDescription const*> mGenericMoveControl;
    ::ll::TypedStorage<8, 8, ::GlideMoveControlDescription const*> mGlideMoveControl;
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_26_40::HideComponentDefinition const*> mHide;
    ::ll::TypedStorage<8, 8, ::IllagerBeastBlockedDescription const*> mIllagerBeastBlocked;
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_26_40::ManagedWanderingTraderComponentDefinition const*> mManagedWanderingTrader;
    ::ll::TypedStorage<8, 8, ::MoveControlBasicDescription const*> mMoveControl;
    ::ll::TypedStorage<8, 8, ::MoveControlDolphinDescription const*> mDolphinSwimControl;
    ::ll::TypedStorage<8, 8, ::MoveControlFlyDescription const*> mFlyControl;
    ::ll::TypedStorage<8, 8, ::MoveControlSkipDescription const*> mHopControl;
    ::ll::TypedStorage<8, 8, ::MoveControlHoverDescription const*> mHoverControl;
    ::ll::TypedStorage<8, 8, ::MoveControlSwayDescription const*> mSwimControl;
    ::ll::TypedStorage<8, 8, ::NavigationClimbDescription const*> mWallClimberNavigation;
    ::ll::TypedStorage<8, 8, ::NavigationFloatDescription const*> mFloatNavigation;
    ::ll::TypedStorage<8, 8, ::NavigationFlyDescription const*> mFlyingNavigation;
    ::ll::TypedStorage<8, 8, ::NavigationHoverDescription const*> mHoverNavigation;
    ::ll::TypedStorage<8, 8, ::NavigationGenericDescription const*> mGenericNavigation;
    ::ll::TypedStorage<8, 8, ::NavigationSwimDescription const*> mWaterboundNavigation;
    ::ll::TypedStorage<8, 8, ::NavigationWalkDescription const*> mNavigation;
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_26_40::PersistentComponentDefinition const*> mPersistent;
    ::ll::TypedStorage<8, 8, ::PreferredPathDescription const*> mPreferredPath;
    ::ll::TypedStorage<8, 8, ::ProjectileDescription const*> mProjectile;
    ::ll::TypedStorage<8, 8, ::SlimeMoveControlDescription const*> mSlimeMoveControl;
    ::ll::TypedStorage<8, 8, ::StrengthDescription const*> mStrength;
    ::ll::TypedStorage<8, 8, ::TrailDescription const*> mTrail;
    ::ll::TypedStorage<8, 8, ::TeleportDescription const*> mTeleport;
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_21_100::TickWorldDefinition const*> mTickWorld;
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_26_40::TradeResupplyComponentDefinition const*> mTradeResupply;
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_26_40::TrustComponentDefinition const*> mTrust;
    ::ll::TypedStorage<8, 8, ::EconomyTradeableDescription const*> mEconomyTradeable;
    ::ll::TypedStorage<8, 8, ::TransformationDescription const*> mTransformation;
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_26_40::DynamicJumpControlComponentDefinition const*> mDynamicJumpControl;
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_26_40::JumpControlComponentDefinition const*> mJumpControl;
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_26_40::OpenDoorAnnotationComponentDefinition const*> mOpenDoorAnnotation;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionDescriptor& operator=(ActorDefinitionDescriptor const&);
    ActorDefinitionDescriptor(ActorDefinitionDescriptor const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorDefinitionDescriptor();

    MCNAPI ActorDefinitionDescriptor(::ActorDefinitionDescriptor&&);

    MCNAPI ::ActorDefinitionDescriptor& combine(::ActorDefinitionDescriptor const&);

    MCNAPI std::optional<ActorDefinitionAttribute> findAttributeByName(std::string const&) const;

    MCNAPI bool hasJumpSubComponent();

    MCNAPI bool hasMovementSubComponent();

    MCNAPI bool hasNavigationSubComponent();

    MCNAPI ::ActorDefinitionDescriptor& operator=(::ActorDefinitionDescriptor&&);

    MCNAPI ::ActorDefinitionDescriptor& subtract(::ActorDefinitionDescriptor const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool executeEvent(::Actor&, std::string const&, ::VariantParameterList const&);

    MCNAPI static bool executeTrigger(::Actor&, ::ActorDefinitionTrigger const&, ::VariantParameterList const&);

    MCNAPI static void forceExecuteTrigger(::Actor&, ::ActorDefinitionTrigger const&, ::VariantParameterList const&);

    MCNAPI static void forceExecuteTriggerChain(
        ::Actor&,
        ::ActorDefinitionTrigger const&,
        ::Bedrock::small_vector_base<ActorDefinitionEventStackEntry>&,
        ::VariantParameterList const&
    );

    MCNAPI static bool hasEvent(::Actor const&, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ActorDefinitionDescriptor&&);
    // NOLINTEND
};
