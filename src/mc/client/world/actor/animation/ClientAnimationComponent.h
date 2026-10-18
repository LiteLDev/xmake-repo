#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/controller/RenderControllerToProcess.h"
#include "mc/deps/core/math/Matrix.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/AnimationComponent.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationPlayer;
class ActorRenderData;
class ApplyAnimationContext;
class BaseActorRenderContext;
class BoneOrientation;
class DataDrivenGeometry;
class DataDrivenModel;
class RenderParams;
struct AnimationComponentArguments;
// clang-format on

class ClientAnimationComponent : public ::AnimationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<RenderControllerToProcess>> mRenderControllersToProcess;
    ::ll::TypedStorage<8, 24, std::vector<SkeletalHierarchyIndex>>    mSkeletalHierarchiesToProcess;
    ::ll::TypedStorage<8, 24, std::vector<Matrix>>                    mQueryableBoneOrientations;
    ::ll::TypedStorage<8, 8, void const*>                             mLastModelInitializedWith;
    ::ll::TypedStorage<1, 1, bool>                                    mAreRenderControllersConstant;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ClientAnimationComponent();

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
    MCNAPI bool attemptToSetParentBoneMapping(::ClientAnimationComponent&, ::BoneOrientation&) const;

    MCNAPI std::vector<BoneOrientation>& getBoneOrientationsFromGeometry(::DataDrivenGeometry const&);

    MCNAPI std::vector<RenderControllerToProcess>& getRenderControllersToProcess();

    MCNAPI std::vector<SkeletalHierarchyIndex>& getSkeletalHierarchiesToProcess();

    MCNAPI ::RenderParams& prepRenderParamsForActorRendering(
        ::ActorRenderData&,
        ::BaseActorRenderContext*,
        std::shared_ptr<DataDrivenModel>,
        float
    );

    MCNAPI void updateRenderControllersToProcess(std::shared_ptr<DataDrivenModel>, ::RenderParams&);
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
#else // @header-generator platform
class ClientAnimationComponent {};
#endif // @header-generator platform
