#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/molang/ExpressionNode.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ExpressionNode;
#endif // @header-generator platform
class RenderParams;
struct MolangScriptArg;
// clang-format on

struct ExpressionQueries {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // ExpressionQueries inner types define
    using NotNullQueryFunction =
        ::gsl::not_null<const MolangScriptArg& (*)(RenderParams&, const std::vector<ExpressionNode>&)>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk109a8d;
    ::ll::UntypedStorage<8, 8>  mUnk753fcc;
    ::ll::UntypedStorage<8, 16> mUnka0133a;
    ::ll::UntypedStorage<8, 16> mUnk50efe3;
    ::ll::UntypedStorage<8, 8>  mUnkb4cc38;
    ::ll::UntypedStorage<8, 8>  mUnkeded20;
    ::ll::UntypedStorage<8, 8>  mUnk1d5aef;
    ::ll::UntypedStorage<8, 8>  mUnk4d7069;
    ::ll::UntypedStorage<8, 8>  mUnkd58b35;
    ::ll::UntypedStorage<8, 8>  mUnk404a9c;
    ::ll::UntypedStorage<8, 8>  mUnk2cac58;
    ::ll::UntypedStorage<8, 8>  mUnkaa55da;
    ::ll::UntypedStorage<8, 8>  mUnkc9233e;
    ::ll::UntypedStorage<8, 8>  mUnkda2734;
    ::ll::UntypedStorage<8, 8>  mUnk4f57f3;
    ::ll::UntypedStorage<8, 8>  mUnk673c27;
    ::ll::UntypedStorage<8, 8>  mUnke63051;
    ::ll::UntypedStorage<8, 8>  mUnk5eabe1;
    ::ll::UntypedStorage<8, 8>  mUnkeae3f4;
    ::ll::UntypedStorage<8, 8>  mUnk7b14d7;
    ::ll::UntypedStorage<8, 8>  mUnkc84b4f;
    ::ll::UntypedStorage<8, 8>  mUnk56a3e7;
    ::ll::UntypedStorage<8, 8>  mUnk2cf68a;
    ::ll::UntypedStorage<8, 8>  mUnka107c1;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ExpressionQueries& operator=(ExpressionQueries const&);
    ExpressionQueries(ExpressionQueries const&);
    ExpressionQueries();
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::MolangScriptArg const* getTargetXRotationBase(::RenderParams&);

    MCNAPI static ::MolangScriptArg const* getTargetYRotationBase(::RenderParams&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::MolangScriptArg const* getTargetYRotationBase(::RenderParams& renderParams);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
