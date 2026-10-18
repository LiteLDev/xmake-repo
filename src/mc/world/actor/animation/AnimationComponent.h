#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/molang/MolangVersion.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/MolangVariableMap.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ModelPartLocator.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/RenderParams.h"
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/AnimationComponentGroupType.h"
#include "mc/world/actor/animation/AnimationComponentID.h"
#include "mc/world/actor/animation/AttachableSlotIndex.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/animation/BoneOrientation.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class ActorAnimationControllerInfo;
class ActorAnimationControllerPlayer;
class ActorAnimationControllerStatePlayer;
class ActorAnimationPlayer;
#if defined(LL_PLAT_A) // @header-generator platform
class ActorRenderData;
#else // @header-generator platform
#endif // @header-generator platform
class ActorSkeletalAnimationPtr;
class ApplyAnimationContext;
#if defined(LL_PLAT_A) // @header-generator platform
class ClientAnimationComponent;
#else // @header-generator platform
class BoneOrientation;
#endif // @header-generator platform
class CommonResourceDefinitionMap;
class ExpressionNode;
class Matrix;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ModelPartLocator;
#endif // @header-generator platform
struct AnimationComponentArguments;
struct ApplyAnimationCache;
namespace Util { struct HashStringHashGreater; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ActorRenderData;
class ClientAnimationComponent;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, void const*>                          mChildObjectKey;
        ::ll::TypedStorage<8, 56, ::MolangVariableMap>                 mMolangVariableMap;
        ::ll::TypedStorage<8, 16, std::shared_ptr<AnimationComponent>> mChildAnimationComponent;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, void const*>                              mChildObjectKey;
        ::ll::TypedStorage<8, 56, ::MolangVariableMap>                     mMolangVariableMap;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AnimationComponent>> mChildAnimationComponent;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        ChildAnimationComponentInfo& operator=(ChildAnimationComponentInfo const&);
        ChildAnimationComponentInfo(ChildAnimationComponentInfo const&);
#else // @header-generator platform
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI std::shared_ptr<AnimationComponent>&
               getAnimationComponent(::Actor&, ::SubClientId, ::AttachableSlotIndex);
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCAPI ::std::shared_ptr<::AnimationComponent>&
        getAnimationComponent(::Actor& owner, ::SubClientId subClientId, ::AttachableSlotIndex attachableIndex);
#endif
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ActorAnimationControllerStatePlayer>>
        mCurrentAnimationControllerStatePlayer;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ActorAnimationPlayer>>> mComponentAnimationPlayers;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ActorAnimationControllerInfo>>>
                                                                                        mOwnedAnimationControllers;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::ModelPartLocator>> mModelPartLocators;
#ifdef LL_PLAT_S
    ::ll::TypedStorage<8, 504, ::RenderParams> mRenderParams;
#else // LL_PLAT_C
    ::ll::TypedStorage<8, 520, ::RenderParams> mRenderParams;
#endif
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ActorAnimationPlayer>>      mPlaySingleAnimation;
    ::ll::TypedStorage<8, 8, void*>                                           mModelRenderControllerCacheWasBuiltFrom;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::CommonResourceDefinitionMap>> mCommonResourceDefinitionMap;
    ::ll::TypedStorage<8, 8, ::std::unordered_map<::HashedString, ::HashedString> const*> mParticleEffectMap;
    ::ll::TypedStorage<8, 64, ::std::function<void(::ActorAnimationPlayer&)>> mAnimationComponentInitFunction;
    ::ll::TypedStorage<8, 24, ::std::vector<::AnimationComponent::ChildAnimationComponentInfo>>
        mChildAnimationComponents;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::SkeletalHierarchyIndex, ::std::vector<::BoneOrientation>>>
                                                            mBoneOrientations;
    ::ll::TypedStorage<1, 1, bool>                          mAnimationComponentInitialized;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::AnimationComponentGroupType> mAnimationComponentGroupType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::AnimationComponentID> mOwnerUUID;
    ::ll::TypedStorage<8, 8, long> mLastUpdateFrame;
    ::ll::TypedStorage<8, 8, ulong> mLastReloadInitTimeStampClient;
    ::ll::TypedStorage<1, 1, bool> mApplyAnimations;
    ::ll::UntypedStorage<1, 15> mNeedToUpdateQueryableBoneOrientations;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::AnimationComponentID>        mOwnerUUID;
    ::ll::TypedStorage<8, 8, int64>                         mLastUpdateFrame;
    ::ll::TypedStorage<8, 8, uint64>                        mLastReloadInitTimeStampClient;
    ::ll::TypedStorage<1, 1, bool>                          mApplyAnimations;
    ::ll::TypedStorage<1, 1, bool>                          mNeedToUpdateQueryableBoneOrientations;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    AnimationComponent();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    AnimationComponent();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~AnimationComponent();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~AnimationComponent() = default;
#else // LL_PLAT_C
    virtual ~AnimationComponent();
#endif
#endif // @header-generator platform

    virtual ::ClientAnimationComponent* tryGetClient();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void visitApplyContext(::brstd::function_ref<void (const ApplyAnimationContext&) const, void (const ApplyAnimationContext&)>) const;
#else // @header-generator platform
    virtual void visitApplyContext(
        ::brstd::function_ref<void(::ApplyAnimationContext const&) const, void(::ApplyAnimationContext const&)> visitor
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeClientAnimationComponent(std::function<void (ActorAnimationPlayer&)>);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void initializeClientAnimationComponent(::std::function<void(::ActorAnimationPlayer&)>);
#else // LL_PLAT_C
    virtual void
    initializeClientAnimationComponent(::std::function<void(::ActorAnimationPlayer&)> animationComponentInitFunction);
#endif
#endif // @header-generator platform

    virtual void ensureClientAnimationComponentIsInitialized();

    virtual void setDirty();

    virtual void updateQueryableGeometryBoneOrientations();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Matrix const* getQueryableBoneOrientation(ulong) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ::Matrix const* getQueryableBoneOrientation(uint64) const;
#else // LL_PLAT_C
    virtual ::Matrix const* getQueryableBoneOrientation(uint64 boneNameHash) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::span<const SkeletalHierarchyIndex> getSkeletalHierarchiesToProcess() const;
#else // @header-generator platform
    virtual ::gsl::span<::SkeletalHierarchyIndex const> getSkeletalHierarchiesToProcess() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float _getActorRenderDeltaTime(::ActorRenderData const&) const;
    // clang-format on
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual float _getActorRenderDeltaTime(::ActorRenderData const&) const;
#else // LL_PLAT_C
    virtual float _getActorRenderDeltaTime(::ActorRenderData const& data) const;
#endif

#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit AnimationComponent(::AnimationComponentArguments&&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI explicit AnimationComponent(::AnimationComponentArguments&& args);

    MCAPI void _addAnimationToStatePlayer(
        ::HashedString const&                                    friendlyName,
        ::std::shared_ptr<::ActorAnimationControllerStatePlayer> player
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addAnimationToStatePlayer(::HashedString const&, std::shared_ptr<ActorAnimationControllerStatePlayer>);
#else // @header-generator platform
    MCAPI ::RenderParams& _prepRenderParamsForActor(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::RenderParams& _prepRenderParamsForActor(::Actor&);

    MCNAPI void applyAnimations(bool);

    MCNAPI std::shared_ptr<ActorAnimationPlayer> createAnimationPlayer(
        ::HashedString const&,
        ::ExpressionNode const&,
        std::set<HashedString, Util::HashStringHashGreater, std::allocator<HashedString>>&
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::ActorAnimationPlayer> createAnimationPlayer(
        ::HashedString const&                                      friendlyName,
        ::ExpressionNode const&                                    blendExpression,
        ::std::set<::HashedString, ::Util::HashStringHashGreater>& animationControllerNameStack
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<ActorAnimationControllerStatePlayer> editGlobalAnimationData(
        ::HashedString const&,
        float,
        std::string const&,
        ::MolangVersion const,
        std::string const&,
        std::string const&
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::shared_ptr<::ActorAnimationControllerStatePlayer> editGlobalAnimationData(
        ::HashedString const& friendlyName,
        float                 blendOutTime,
        ::std::string const&  stopExpression,
        ::MolangVersion       stopExpressionVersion,
        ::std::string const&  nextStateName,
        ::std::string const&  runtimeController
    );

    MCAPI ::std::shared_ptr<::ActorAnimationPlayer> findAnimation(::HashedString const& rawAnimationName);

    MCAPI ::std::shared_ptr<::ActorAnimationControllerPlayer>
    getAnimationControllerPlayer(::HashedString const& destControllerName, bool createIfMissing);

    MCAPI ::ModelPartLocator* getLocator(::HashedString const& locatorNameHash);

    MCAPI float getRegisteredAnimationLength(::std::string const& friendlyName) const;

    MCAPI void initInstanceSpecificAnimationData(::MolangVariableMap* variableMap);
#endif

    MCAPI void initializeServerAnimationComponent(
        ::Actor&                                         actor,
        ::std::shared_ptr<::CommonResourceDefinitionMap> animationResourceDefinition,
        ::std::function<void(::ActorAnimationPlayer&)>   animationComponentInitFunction
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<ActorAnimationPlayer> findAnimation(::HashedString const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool isAnimationRegistered(::HashedString const& friendlyName) const;

    MCAPI ::std::shared_ptr<::ActorAnimationControllerStatePlayer> playAnimation(
        ::HashedString const& friendlyName,
        ::HashedString const& owningStateName,
        ::std::string const&  runtimeController
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forceNextUpdateToApplyAnimations();
#else // @header-generator platform
    MCAPI void serverUpdate(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void setInitializedScriptsRun(bool);

    MCAPI void setupDeltaTimeAndLifeTimeParams(bool incrementLifetime);

    MCAPI bool tryRegisterAnimation(::HashedString const& friendlyName, ::ActorSkeletalAnimationPtr animation);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ApplyAnimationCache createBase(::Actor const*);

    MCNAPI static ulong getReloadTimeStampClient();

    MCNAPI static void incrementCurrentClientFrameIndex();

    MCNAPI static void incrementCurrentServerFrameIndex();

    MCNAPI static ulong incrementReloadTimeStampClient();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::ApplyAnimationCache createBase(::Actor const* actor);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static char const* const& DEFAULT_RUNTIME_CONTROLLER();
#else // @header-generator platform
    MCAPI static ::std::atomic<int64>& mClientFrameIndex();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::atomic<long>& mClientFrameIndex();
#else // @header-generator platform
    MCAPI static ::std::atomic<int64>& mReloadTimeStampClient();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::atomic<long>& mReloadTimeStampClient();

    MCNAPI static std::atomic<long>& mServerFrameIndex();
#else // @header-generator platform
    MCAPI static ::std::atomic<int64>& mServerFrameIndex();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::AnimationComponentArguments&&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::AnimationComponentArguments&& args);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ClientAnimationComponent* $tryGetClient();
#else // @header-generator platform
    MCFOLD ::ClientAnimationComponent* $tryGetClient();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $visitApplyContext(
        ::brstd::function_ref<void(const ApplyAnimationContext&) const, void(const ApplyAnimationContext&)>
#else // @header-generator platform
    MCAPI void $visitApplyContext(
        ::brstd::function_ref<void(::ApplyAnimationContext const&) const, void(::ApplyAnimationContext const&)> visitor
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeClientAnimationComponent(std::function<void(ActorAnimationPlayer&)>);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $initializeClientAnimationComponent(::std::function<void(::ActorAnimationPlayer&)>);
#else // LL_PLAT_C
    MCFOLD void
    $initializeClientAnimationComponent(::std::function<void(::ActorAnimationPlayer&)> animationComponentInitFunction);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $ensureClientAnimationComponentIsInitialized();
#else // @header-generator platform
    MCFOLD void $ensureClientAnimationComponentIsInitialized();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setDirty();
#else // @header-generator platform
    MCAPI void $setDirty();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updateQueryableGeometryBoneOrientations();
#else // @header-generator platform
    MCFOLD void $updateQueryableGeometryBoneOrientations();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Matrix const* $getQueryableBoneOrientation(ulong) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD ::Matrix const* $getQueryableBoneOrientation(uint64) const;
#else // LL_PLAT_C
    MCFOLD ::Matrix const* $getQueryableBoneOrientation(uint64 boneNameHash) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::span<const SkeletalHierarchyIndex> $getSkeletalHierarchiesToProcess() const;
#else // @header-generator platform
    MCFOLD ::gsl::span<::SkeletalHierarchyIndex const> $getSkeletalHierarchiesToProcess() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $_getActorRenderDeltaTime(::ActorRenderData const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD float $_getActorRenderDeltaTime(::ActorRenderData const&) const;
#else // LL_PLAT_C
    MCFOLD float $_getActorRenderDeltaTime(::ActorRenderData const& data) const;
#endif


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
