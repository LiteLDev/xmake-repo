#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct FrameDebugData {
public:
    // FrameDebugData inner types declare
    // clang-format off
    struct DrawcallDebugData;
    struct SubmissionDebugData;
    // clang-format on

    // FrameDebugData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class FlushTrigger : int {
        RenderTargetChange  = 0,
        ViewportChange      = 1,
        PipelineStateChange = 2,
        EndOfFrame          = 3,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class FlushTrigger : int {
        RenderTargetChange  = 0,
        ViewportChange      = 1,
        PipelineStateChange = 2,
        EndOfFrame          = 3,
    };
#else // @header-generator platform
    enum class FlushTrigger : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct DrawcallDebugData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mLogicalShader;
        ::ll::TypedStorage<4, 4, int> mShaderType;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct DrawcallDebugData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mLogicalShader;
        ::ll::TypedStorage<4, 4, int> mShaderType;
        // NOLINTEND
    };
#else // @header-generator platform
    struct DrawcallDebugData {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct SubmissionDebugData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                                   mDrawCount;
        ::ll::TypedStorage<4, 4, ::OreUI::FrameDebugData::FlushTrigger> mTrigger;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                      mDrawCount;
    ::ll::TypedStorage<4, 4, int>                                                      mMaxDraws;
    ::ll::TypedStorage<1, 1, bool>                                                     mDebugDraws;
    ::ll::TypedStorage<1, 1, bool>                                                     mLimitDraws;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::FrameDebugData::DrawcallDebugData>>   mDrawcallDebugData;
    ::ll::TypedStorage<4, 4, int>                                                      mRenderTargetSwitches;
    ::ll::TypedStorage<4, 4, int>                                                      mViewportChanges;
    ::ll::TypedStorage<4, 4, int>                                                      mPipelineStateChanges;
    ::ll::TypedStorage<4, 4, int>                                                      mFlushCalls;
    ::ll::TypedStorage<4, 4, int>                                                      mSubmittedBatches;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::FrameDebugData::SubmissionDebugData>> mSubmissionDebugData;
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct SubmissionDebugData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                                   mDrawCount;
        ::ll::TypedStorage<4, 4, ::OreUI::FrameDebugData::FlushTrigger> mTrigger;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                          mDrawCount;
    ::ll::TypedStorage<4, 4, int>                                                          mMaxDraws;
    ::ll::TypedStorage<1, 1, bool>                                                         mDebugDraws;
    ::ll::TypedStorage<1, 1, bool>                                                         mLimitDraws;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::FrameDebugData::DrawcallDebugData>>   mDrawcallDebugData;
    ::ll::TypedStorage<4, 4, int>                                                          mRenderTargetSwitches;
    ::ll::TypedStorage<4, 4, int>                                                          mViewportChanges;
    ::ll::TypedStorage<4, 4, int>                                                          mPipelineStateChanges;
    ::ll::TypedStorage<4, 4, int>                                                          mFlushCalls;
    ::ll::TypedStorage<4, 4, int>                                                          mSubmittedBatches;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::FrameDebugData::SubmissionDebugData>> mSubmissionDebugData;
    // NOLINTEND
#else // @header-generator platform
    struct SubmissionDebugData {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
