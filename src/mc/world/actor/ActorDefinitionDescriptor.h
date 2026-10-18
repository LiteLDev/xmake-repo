#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/container/small_vector_base.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/string/HashedString.h"
#include "mc/entity/factory/DefinitionInstanceGroup.h"
#include "mc/entity/factory/GoalDefinitionInstanceGroup.h"
#include "mc/world/actor/ActorAliasDescription.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorDefinitionAttribute.h"
#include "mc/world/actor/ActorDefinitionEvent.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ActorPropertiesDescription.h"
#include "mc/world/actor/AnimationScriptsDescription.h"
#include "mc/world/actor/AnimationsDescription.h"
#include "mc/world/actor/IdentifierDescription.h"
#include "mc/world/actor/IsSpawnableDescription.h"
#include "mc/world/actor/IsSummonableDescription.h"
#include "mc/world/actor/RuntimeIdentifierDescription.h"
#include "mc/world/actor/SpawnCategoryDescription.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ai/goal/LegacyGoalDefinition.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ActorDefinitionEvent;
#endif // @header-generator platform
class ActorDefinitionTrigger;
#if defined(LL_PLAT_A) // @header-generator platform
struct ActorDefinitionEventStackEntry;
#else // @header-generator platform
struct ActorDefinitionAttribute;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct LegacyGoalDefinition;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::HashedString>>                        mComponentNames;
    ::ll::TypedStorage<8, 40, ::IdentifierDescription>                                     mIdentifier;
    ::ll::TypedStorage<8, 40, ::RuntimeIdentifierDescription>                              mRuntimeIdentifier;
    ::ll::TypedStorage<8, 16, ::IsSpawnableDescription>                                    mIsSpawnable;
    ::ll::TypedStorage<8, 16, ::IsSummonableDescription>                                   mIsSummonable;
    ::ll::TypedStorage<8, 72, ::AnimationsDescription>                                     mAnimationsDescription;
    ::ll::TypedStorage<8, 32, ::AnimationScriptsDescription>                               mAnimationScriptsDescription;
    ::ll::TypedStorage<8, 24, ::ActorPropertiesDescription>                                mActorPropertiesDescription;
    ::ll::TypedStorage<8, 32, ::ActorAliasDescription>                                     mActorAliasDescription;
    ::ll::TypedStorage<8, 16, ::SpawnCategoryDescription>                                  mSpawnCategoryDescription;
    ::ll::TypedStorage<8, 24, ::std::vector<::LegacyGoalDefinition>>                       mGoalDefinitions;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionAttribute>>                   mAttributes;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::ActorDefinitionEvent>> mEventHandlers;
    ::ll::TypedStorage<8, 72, ::DefinitionInstanceGroup>                                   mDefinitionGroup;
    ::ll::TypedStorage<8, 144, ::GoalDefinitionInstanceGroup>                              mGoalDefinitionGroup;
    ::ll::TypedStorage<8, 8, ::AttackDescription const*>                                   mAttack;
    ::ll::TypedStorage<8, 8, ::MobEffectChangeDescription const*>                          mMobEffects;
    ::ll::TypedStorage<8, 8, ::AmphibiousMoveControlDescription const*>                    mAmphibiousMoveControl;
    ::ll::TypedStorage<8, 8, ::BehaviorTreeDescription const*>                             mBehavior;
    ::ll::TypedStorage<8, 8, ::BreakBlocksDescription const*>                              mBreakBlocks;
    ::ll::TypedStorage<8, 8, ::BreakDoorAnnotationDescription const*>                      mBreakDoorAnnotation;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_26_40::BucketableComponentDefinition const*> mBucketable;
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::CommandBlockDescription const*>                              mCommandBlock;
    ::ll::TypedStorage<8, 8, ::ContainerDescription const*>                                 mContainer;
    ::ll::TypedStorage<8, 8, ::DwellerDescription const*>                                   mDweller;
    ::ll::TypedStorage<8, 8, ::GenericMoveControlDescription const*>                        mGenericMoveControl;
    ::ll::TypedStorage<8, 8, ::GlideMoveControlDescription const*>                          mGlideMoveControl;
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_26_40::HideComponentDefinition const*>       mHide;
    ::ll::TypedStorage<8, 8, ::IllagerBeastBlockedDescription const*>                       mIllagerBeastBlocked;
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_26_40::ManagedWanderingTraderComponentDefinition const*>
                                                                                               mManagedWanderingTrader;
    ::ll::TypedStorage<8, 8, ::MoveControlBasicDescription const*>                             mMoveControl;
    ::ll::TypedStorage<8, 8, ::MoveControlDolphinDescription const*>                           mDolphinSwimControl;
    ::ll::TypedStorage<8, 8, ::MoveControlFlyDescription const*>                               mFlyControl;
    ::ll::TypedStorage<8, 8, ::MoveControlSkipDescription const*>                              mHopControl;
    ::ll::TypedStorage<8, 8, ::MoveControlHoverDescription const*>                             mHoverControl;
    ::ll::TypedStorage<8, 8, ::MoveControlSwayDescription const*>                              mSwimControl;
    ::ll::TypedStorage<8, 8, ::NavigationClimbDescription const*>                              mWallClimberNavigation;
    ::ll::TypedStorage<8, 8, ::NavigationFloatDescription const*>                              mFloatNavigation;
    ::ll::TypedStorage<8, 8, ::NavigationFlyDescription const*>                                mFlyingNavigation;
    ::ll::TypedStorage<8, 8, ::NavigationHoverDescription const*>                              mHoverNavigation;
    ::ll::TypedStorage<8, 8, ::NavigationGenericDescription const*>                            mGenericNavigation;
    ::ll::TypedStorage<8, 8, ::NavigationSwimDescription const*>                               mWaterboundNavigation;
    ::ll::TypedStorage<8, 8, ::NavigationWalkDescription const*>                               mNavigation;
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_26_40::PersistentComponentDefinition const*>    mPersistent;
    ::ll::TypedStorage<8, 8, ::PreferredPathDescription const*>                                mPreferredPath;
    ::ll::TypedStorage<8, 8, ::ProjectileDescription const*>                                   mProjectile;
    ::ll::TypedStorage<8, 8, ::SlimeMoveControlDescription const*>                             mSlimeMoveControl;
    ::ll::TypedStorage<8, 8, ::StrengthDescription const*>                                     mStrength;
    ::ll::TypedStorage<8, 8, ::TrailDescription const*>                                        mTrail;
    ::ll::TypedStorage<8, 8, ::TeleportDescription const*>                                     mTeleport;
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_21_100::TickWorldDefinition const*>             mTickWorld;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_26_40::TradeResupplyComponentDefinition const*> mTradeResupply;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_26_40::TrustComponentDefinition const*> mTrust;
    ::ll::TypedStorage<8, 8, ::EconomyTradeableDescription const*> mEconomyTradeable;
    ::ll::TypedStorage<8, 8, ::TransformationDescription const*> mTransformation;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_26_40::TrustComponentDefinition const*>         mTrust;
    ::ll::TypedStorage<8, 8, ::EconomyTradeableDescription const*>                             mEconomyTradeable;
    ::ll::TypedStorage<8, 8, ::TransformationDescription const*>                               mTransformation;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_26_40::DynamicJumpControlComponentDefinition const*> mDynamicJumpControl;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_26_40::JumpControlComponentDefinition const*> mJumpControl;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_26_40::JumpControlComponentDefinition const*>        mJumpControl;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_26_40::OpenDoorAnnotationComponentDefinition const*> mOpenDoorAnnotation;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionDescriptor& operator=(ActorDefinitionDescriptor const&);
    ActorDefinitionDescriptor(ActorDefinitionDescriptor const&);

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorDefinitionDescriptor();
#else // @header-generator platform
    MCAPI ActorDefinitionDescriptor();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorDefinitionDescriptor(::ActorDefinitionDescriptor&&);
#else // @header-generator platform
    MCAPI ActorDefinitionDescriptor(::ActorDefinitionDescriptor&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorDefinitionDescriptor& combine(::ActorDefinitionDescriptor const&);
#else // @header-generator platform
    MCAPI ::ActorDefinitionDescriptor& combine(::ActorDefinitionDescriptor const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ActorDefinitionAttribute> findAttributeByName(std::string const&) const;
#else // @header-generator platform
    MCAPI ::std::optional<::ActorDefinitionAttribute> findAttributeByName(::std::string const& attributeName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasJumpSubComponent();
#else // @header-generator platform
    MCAPI ::ActorDefinitionDescriptor& subtract(::ActorDefinitionDescriptor const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasMovementSubComponent();

    MCNAPI bool hasNavigationSubComponent();

    MCNAPI ::ActorDefinitionDescriptor& operator=(::ActorDefinitionDescriptor&&);

    MCNAPI ::ActorDefinitionDescriptor& subtract(::ActorDefinitionDescriptor const&);
#else // @header-generator platform
    MCAPI ~ActorDefinitionDescriptor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool executeEvent(::Actor&, std::string const&, ::VariantParameterList const&);
#else // @header-generator platform
    MCAPI static bool executeEvent(::Actor& entity, ::std::string const& name, ::VariantParameterList const& list);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool executeTrigger(::Actor&, ::ActorDefinitionTrigger const&, ::VariantParameterList const&);
#else // @header-generator platform
    MCAPI static bool
    executeTrigger(::Actor& entity, ::ActorDefinitionTrigger const& trigger, ::VariantParameterList const& list);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void forceExecuteTrigger(::Actor&, ::ActorDefinitionTrigger const&, ::VariantParameterList const&);

    MCNAPI static void forceExecuteTriggerChain(
        ::Actor&,
        ::ActorDefinitionTrigger const&,
        ::Bedrock::small_vector_base<ActorDefinitionEventStackEntry>&,
        ::VariantParameterList const&
    );

    MCNAPI static bool hasEvent(::Actor const&, std::string const&);
#else // @header-generator platform
    MCAPI static void
    forceExecuteTrigger(::Actor& entity, ::ActorDefinitionTrigger const& trigger, ::VariantParameterList const& list);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActorDefinitionDescriptor&&);
#else // @header-generator platform
    MCAPI void* $ctor(::ActorDefinitionDescriptor&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
