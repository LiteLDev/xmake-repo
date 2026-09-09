#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct MolangScriptArg;
// clang-format on

struct ExpressionQueries {
public:
    // ExpressionQueries inner types define
    using NotNullQueryFunction =
        ::gsl::not_null<const MolangScriptArg& (*)(RenderParams&, const std::vector<ExpressionNode>&)>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const MolangScriptArg&(*)(RenderParams&, const std::vector<ExpressionNode>&)>> mGetTargetXRotation;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const MolangScriptArg&(*)(RenderParams&, const std::vector<ExpressionNode>&)>> mGetTargetYRotation;
    ::ll::UntypedStorage<8, 16> mGetSurfaceParticleTexture;
    ::ll::UntypedStorage<8, 16> mGetSurfaceParticleTextureSize;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const MolangScriptArg&(*)(RenderParams&, const std::vector<ExpressionNode>&)>> mGetEntitiesRenderedThisFrame;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const MolangScriptArg&(*)(RenderParams&, const std::vector<ExpressionNode>&)>> mGetCameraRotation;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const MolangScriptArg&(*)(RenderParams&, const std::vector<ExpressionNode>&)>> mGetRotationToCamera;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const MolangScriptArg&(*)(RenderParams&, const std::vector<ExpressionNode>&)>> mGetEffectEmitterCount;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const MolangScriptArg&(*)(RenderParams&, const std::vector<ExpressionNode>&)>> mGetEffectParticleCount;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const MolangScriptArg&(*)(RenderParams&, const std::vector<ExpressionNode>&)>> mGetTotalEmitterCount;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const MolangScriptArg&(*)(RenderParams&, const std::vector<ExpressionNode>&)>> mGetTotalParticleCount;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const MolangScriptArg&(*)(RenderParams&, const std::vector<ExpressionNode>&)>> mGetLastFrameTime;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const MolangScriptArg&(*)(RenderParams&, const std::vector<ExpressionNode>&)>> mGetMaximumFrameTime;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const MolangScriptArg&(*)(RenderParams&, const std::vector<ExpressionNode>&)>> mGetMinimumFrameTime;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const MolangScriptArg&(*)(RenderParams&, const std::vector<ExpressionNode>&)>> mGetAverageFrameTime;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const MolangScriptArg&(*)(RenderParams&, const std::vector<ExpressionNode>&)>> mGetBoneAABB;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const MolangScriptArg&(*)(RenderParams&, const std::vector<ExpressionNode>&)>> mGetBoneOrigin;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const MolangScriptArg&(*)(RenderParams&, const std::vector<ExpressionNode>&)>> mGetBoneRotation;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const MolangScriptArg&(*)(RenderParams&, const std::vector<ExpressionNode>&)>> mGetEquippedItemIsAttachable;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const MolangScriptArg&(*)(RenderParams&, const std::vector<ExpressionNode>&)>> mGetClientMemoryTier;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const MolangScriptArg&(*)(RenderParams&, const std::vector<ExpressionNode>&)>> mGetClientMaxRenderDistance;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const MolangScriptArg&(*)(RenderParams&, const std::vector<ExpressionNode>&)>> mGetLastInputModeIsAny;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const MolangScriptArg&(*)(RenderParams&, const std::vector<ExpressionNode>&)>> mGetTouchOnlyAffectsHotbar;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const MolangScriptArg&(*)(RenderParams&, const std::vector<ExpressionNode>&)>> mGetGraphicsModeIsAny;
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::MolangScriptArg const* getTargetXRotationBase(::RenderParams&);

    MCNAPI static ::MolangScriptArg const* getTargetYRotationBase(::RenderParams&);
    // NOLINTEND
};
