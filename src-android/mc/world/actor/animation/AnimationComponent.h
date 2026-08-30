#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/molang/MolangVersion.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/MolangVariableMap.h"
#include "mc/world/actor/ModelPartLocator.h"
#include "mc/world/actor/RenderParams.h"
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/AnimationComponentGroupType.h"
#include "mc/world/actor/animation/AnimationComponentID.h"
#include "mc/world/actor/animation/AttachableSlotIndex.h"
#include "mc/world/actor/animation/BoneOrientation.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorAnimationControllerInfo;
class ActorAnimationControllerPlayer;
class ActorAnimationControllerStatePlayer;
class ActorAnimationPlayer;
class ActorRenderData;
class ActorSkeletalAnimationPtr;
class ApplyAnimationContext;
class ClientAnimationComponent;
class CommonResourceDefinitionMap;
class ExpressionNode;
class Matrix;
struct AnimationComponentArguments;
struct ApplyAnimationCache;
namespace Util { struct HashStringHashGreater; }
// clang-format on

class AnimationComponent {
public:
    // AnimationComponent inner types declare
    // clang-format off
    struct ChildAnimationComponentInfo;
    // clang-format on

    // AnimationComponent inner types define
    struct ChildAnimationComponentInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, void const*>                          mChildObjectKey;
        ::ll::TypedStorage<8, 56, ::MolangVariableMap>                 mMolangVariableMap;
        ::ll::TypedStorage<8, 16, std::shared_ptr<AnimationComponent>> mChildAnimationComponent;
        // NOLINTEND

    public:
        // prevent constructor by default
        ChildAnimationComponentInfo& operator=(ChildAnimationComponentInfo const&);
        ChildAnimationComponentInfo(ChildAnimationComponentInfo const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI std::shared_ptr<AnimationComponent>&
               getAnimationComponent(::Actor&, ::SubClientId, ::AttachableSlotIndex);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<ActorAnimationControllerStatePlayer>> mCurrentAnimationControllerStatePlayer;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<ActorAnimationPlayer>>> mComponentAnimationPlayers;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<ActorAnimationControllerInfo>>> mOwnedAnimationControllers;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ModelPartLocator>> mModelPartLocators;
    ::ll::UntypedStorage<8, 496> mRenderParams;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ActorAnimationPlayer>> mPlaySingleAnimation;
    ::ll::TypedStorage<8, 8, void*> mModelRenderControllerCacheWasBuiltFrom;
    ::ll::TypedStorage<8, 16, std::weak_ptr<CommonResourceDefinitionMap>> mCommonResourceDefinitionMap;
    ::ll::TypedStorage<8, 8, std::unordered_map<HashedString, HashedString> const*> mParticleEffectMap;
    ::ll::UntypedStorage<8, 48> mAnimationComponentInitFunction;
    ::ll::TypedStorage<8, 24, std::vector<AnimationComponent::ChildAnimationComponentInfo>> mChildAnimationComponents;
    ::ll::TypedStorage<8, 40, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>>> mBoneOrientations;
    ::ll::TypedStorage<1, 1, bool> mAnimationComponentInitialized;
    ::ll::TypedStorage<4, 4, ::AnimationComponentGroupType> mAnimationComponentGroupType;
    ::ll::TypedStorage<8, 8, ::AnimationComponentID> mOwnerUUID;
    ::ll::TypedStorage<8, 8, long> mLastUpdateFrame;
    ::ll::TypedStorage<8, 8, ulong> mLastReloadInitTimeStampClient;
    ::ll::TypedStorage<1, 1, bool> mApplyAnimations;
    ::ll::UntypedStorage<1, 15> mNeedToUpdateQueryableBoneOrientations;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    AnimationComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~AnimationComponent();

    virtual ::ClientAnimationComponent* tryGetClient();

    virtual void visitApplyContext(::brstd::function_ref<void (const ApplyAnimationContext&) const, void (const ApplyAnimationContext&)>) const;

    virtual void initializeClientAnimationComponent(std::function<void (ActorAnimationPlayer&)>);

    virtual void ensureClientAnimationComponentIsInitialized();

    virtual void setDirty();

    virtual void updateQueryableGeometryBoneOrientations();

    virtual ::Matrix const* getQueryableBoneOrientation(ulong) const;

    virtual ::gsl::span<const SkeletalHierarchyIndex> getSkeletalHierarchiesToProcess() const;

    virtual float _getActorRenderDeltaTime(::ActorRenderData const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AnimationComponent(::AnimationComponentArguments&&);

    MCNAPI void _addAnimationToStatePlayer(::HashedString const&, std::shared_ptr<ActorAnimationControllerStatePlayer>);

    MCNAPI ::RenderParams& _prepRenderParamsForActor(::Actor&);

    MCNAPI void applyAnimations(bool);

    MCNAPI std::shared_ptr<ActorAnimationPlayer> createAnimationPlayer(
        ::HashedString const&,
        ::ExpressionNode const&,
        std::set<HashedString, Util::HashStringHashGreater, std::allocator<HashedString>>&
    );

    MCNAPI std::shared_ptr<ActorAnimationControllerStatePlayer> editGlobalAnimationData(
        ::HashedString const&,
        float,
        std::string const&,
        ::MolangVersion const,
        std::string const&,
        std::string const&
    );

    MCNAPI std::shared_ptr<ActorAnimationPlayer> findAnimation(::HashedString const&);

    MCNAPI void forceNextUpdateToApplyAnimations();

    MCNAPI std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>>& getAllBoneOrientations();

    MCNAPI ::AnimationComponentGroupType getAnimationComponentType() const;

    MCNAPI std::shared_ptr<ActorAnimationControllerPlayer> getAnimationControllerPlayer(::HashedString const&, bool);

    MCNAPI std::vector<BoneOrientation>* getBoneOrientations(::SkeletalHierarchyIndex, bool);

    MCNAPI std::vector<AnimationComponent::ChildAnimationComponentInfo>& getChildAnimationComponents();

    MCNAPI std::weak_ptr<CommonResourceDefinitionMap> getCommonResourceDefinitionMap();

    MCNAPI std::shared_ptr<ActorAnimationControllerStatePlayer> const getCurrentAnimationControllerStatePlayer() const;

    MCNAPI ::ModelPartLocator* getLocator(::HashedString const&);

    MCNAPI ::ModelPartLocator* getLocator(ulong const&);

    MCNAPI std::unordered_map<HashedString, ModelPartLocator>& getLocators();

    MCNAPI float getRegisteredAnimationLength(std::string const&) const;

    MCNAPI ::RenderParams& getRenderParams();

    MCNAPI bool haveInitializedScriptsRun() const;

    MCNAPI void initInstanceSpecificAnimationData(::MolangVariableMap*);

    MCNAPI void initializeServerAnimationComponent(
        ::Actor&,
        std::shared_ptr<CommonResourceDefinitionMap>,
        std::function<void(ActorAnimationPlayer&)>
    );

    MCNAPI bool isAnimationRegistered(::HashedString const&) const;

    MCNAPI bool isInitialized() const;

    MCNAPI std::shared_ptr<ActorAnimationControllerStatePlayer>
           playAnimation(::HashedString const&, ::HashedString const&, std::string const&);

    MCNAPI void serverUpdate(::Actor&);

    MCNAPI void setInitializedScriptsRun(bool);

    MCNAPI void setLastReloadInitTimeStampClient(ulong);

    MCNAPI void setShouldApplyAnimations(bool);

    MCNAPI void setupDeltaTimeAndLifeTimeParams(bool);

    MCNAPI bool shouldReloadBasedOnLastReloadInitTimeStamp() const;

    MCNAPI bool tryRegisterAnimation(::HashedString const&, ::ActorSkeletalAnimationPtr);

    MCNAPI bool usesLastReloadInitTimeStampClient() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ApplyAnimationCache createBase(::Actor const*);

    MCNAPI static ulong getReloadTimeStampClient();

    MCNAPI static void incrementCurrentClientFrameIndex();

    MCNAPI static void incrementCurrentServerFrameIndex();

    MCNAPI static ulong incrementReloadTimeStampClient();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const* const& DEFAULT_RUNTIME_CONTROLLER();

    MCNAPI static std::atomic<long>& mClientFrameIndex();

    MCNAPI static std::atomic<long>& mReloadTimeStampClient();

    MCNAPI static std::atomic<long>& mServerFrameIndex();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AnimationComponentArguments&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ClientAnimationComponent* $tryGetClient();

    MCNAPI void $visitApplyContext(
        ::brstd::function_ref<void(const ApplyAnimationContext&) const, void(const ApplyAnimationContext&)>
    ) const;

    MCNAPI void $initializeClientAnimationComponent(std::function<void(ActorAnimationPlayer&)>);

    MCNAPI void $ensureClientAnimationComponentIsInitialized();

    MCNAPI void $setDirty();

    MCNAPI void $updateQueryableGeometryBoneOrientations();

    MCNAPI ::Matrix const* $getQueryableBoneOrientation(ulong) const;

    MCNAPI ::gsl::span<const SkeletalHierarchyIndex> $getSkeletalHierarchiesToProcess() const;

    MCNAPI float $_getActorRenderDeltaTime(::ActorRenderData const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
