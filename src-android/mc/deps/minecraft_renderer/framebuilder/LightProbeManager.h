#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/enums/TextureFormat.h"
#include "mc/deps/minecraft_renderer/framebuilder/GameplayMetadata.h"
#include "mc/deps/minecraft_renderer/framebuilder/IBLBlendState.h"
#include "mc/external/render_dragon/frame_renderer/modules/IBLConvolutionType.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"
#include "mc/external/render_dragon/resources/TextureDescription.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

namespace mce::framebuilder {

class LightProbeManager {
public:
    // LightProbeManager inner types declare
    // clang-format off
    struct ProbeData;
    struct TextureCircularBuffer;
    struct EnvironmentCaptureJobDetails;
    struct GenerateCubmapMipsJobDetails;
    struct SpecularConvolutionJobDetails;
    struct SpecularConvolutionCallback;
    struct SwapCallback;
    struct LightProbe;
    // clang-format on

    // LightProbeManager inner types define
    struct ProbeData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>                             mEnvironmentCubemap;
        ::ll::TypedStorage<8, 64, ::dragon::TextureDescription> mEnvironmentCubemapDescription;
        ::ll::TypedStorage<1, 1, bool>                          mIsComplete;
        ::ll::TypedStorage<4, 132, ::mce::framebuilder::gamecomponents::GameplayMetadata> mGameplayMetadata;
        // NOLINTEND
    };

    struct TextureCircularBuffer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, uchar> mBeginIdx;
        ::ll::TypedStorage<1, 1, uchar> mSize;
        ::ll::UntypedStorage<8, 24>     mData;
        // NOLINTEND
    };

    struct EnvironmentCaptureJobDetails {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>                                        mCaptureCubemap;
        ::ll::TypedStorage<4, 4, ::mce::TextureFormat>                     mTextureFormat;
        ::ll::TypedStorage<2, 2, ushort>                                   mEdgeLength;
        ::ll::TypedStorage<2, 2, ushort>                                   mCurrentFace;
        ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mCameraPos;
        // NOLINTEND
    };

    struct GenerateCubmapMipsJobDetails {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>                             mCubemapTexture;
        ::ll::TypedStorage<8, 64, ::dragon::TextureDescription> mTextureDescription;
        ::ll::TypedStorage<2, 2, ushort>                        mEdgeLength;
        ::ll::TypedStorage<2, 4, std::pair<ushort, ushort>>     mMipRange;
        // NOLINTEND
    };

    struct SpecularConvolutionJobDetails {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>                                                    mSourceCubemap;
        ::ll::UntypedStorage<8, 24>                                                    mSpecularCubemapArray;
        ::ll::TypedStorage<1, 1, uchar>                                                mSpecularCubemapIdx;
        ::ll::TypedStorage<4, 4, ::dragon::framerenderer::modules::IBLConvolutionType> mConvolutionType;
        ::ll::TypedStorage<2, 2, ushort>                                               mEdgeLength;
        ::ll::TypedStorage<2, 2, ushort>                                               mNumMips;
        ::ll::TypedStorage<2, 2, ushort>                                               mCurrentMip;
        ::ll::TypedStorage<4, 4, uint>                                                 mSampleCount;
        // NOLINTEND
    };

    struct SpecularConvolutionCallback {};

    struct SwapCallback {};

    struct LightProbe {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>     mSpecularIBLRecords;
        ::ll::TypedStorage<1, 1, uchar> mLastSpecularIBLIdx;
        ::ll::TypedStorage<4, 4, uint>  mNumMips;
        ::ll::TypedStorage<4, 4, float> mBlendFactor;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mForceReset;
    ::ll::TypedStorage<8, 224, ::mce::framebuilder::LightProbeManager::ProbeData> mGeneratingProbe;
    ::ll::TypedStorage<8, 224, ::mce::framebuilder::LightProbeManager::ProbeData> mPreviousViewingProbe;
    ::ll::TypedStorage<8, 224, ::mce::framebuilder::LightProbeManager::ProbeData> mCurrentViewingProbe;
    ::ll::TypedStorage<8, 32, ::mce::framebuilder::LightProbeManager::TextureCircularBuffer> mSpecularIBLRecords;
    ::ll::TypedStorage<4, 8, ::mce::framebuilder::IBLBlendState> mBlendState;
    ::ll::TypedStorage<4, 132, ::mce::framebuilder::gamecomponents::GameplayMetadata> mLastGameplayMetadata;
    ::ll::TypedStorage<8, 48, std::queue<std::variant<mce::framebuilder::LightProbeManager::EnvironmentCaptureJobDetails, mce::framebuilder::LightProbeManager::GenerateCubmapMipsJobDetails, mce::framebuilder::LightProbeManager::SpecularConvolutionJobDetails, mce::framebuilder::LightProbeManager::SpecularConvolutionCallback, mce::framebuilder::LightProbeManager::SwapCallback>, std::deque<std::variant<mce::framebuilder::LightProbeManager::EnvironmentCaptureJobDetails, mce::framebuilder::LightProbeManager::GenerateCubmapMipsJobDetails, mce::framebuilder::LightProbeManager::SpecularConvolutionJobDetails, mce::framebuilder::LightProbeManager::SpecularConvolutionCallback, mce::framebuilder::LightProbeManager::SwapCallback>>>> mJobQueue;
    ::ll::TypedStorage<1, 1, bool> mIsSwapPending;
    ::ll::TypedStorage<1, 1, bool> mDidNewProbeCompleteSinceSwap;
    ::ll::TypedStorage<2, 2, ushort> mFramesSinceLastGen;
    // clang-format on
    // NOLINTEND
};

} // namespace mce::framebuilder
