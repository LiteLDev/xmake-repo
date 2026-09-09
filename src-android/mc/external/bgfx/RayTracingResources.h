#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/AccelerationStructureHandle.h"
#include "mc/external/bgfx/ProgramHandle.h"
#include "mc/external/bgfx/TextureHandle.h"

// auto generated forward declare list
// clang-format off
namespace bgfx { struct PBRTextureData; }
namespace bgfx { struct RtLightInfo; }
// clang-format on

namespace bgfx {

struct RayTracingResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                mDoubleBufferWriteIdx;
    ::ll::TypedStorage<4, 8, float[2]>                                            mSubPixelJitterOffset;
    ::ll::TypedStorage<4, 8, float[2]>                                            mPreviousSubPixelJitterOffset;
    ::ll::TypedStorage<2, 2, ::bgfx::AccelerationStructureHandle>                 mAccelerationStructure;
    ::ll::TypedStorage<2, 2, ::bgfx::TextureHandle>                               mTerrainAtlasTexture;
    ::ll::TypedStorage<2, 2, ::bgfx::TextureHandle>                               mSkyTexture;
    ::ll::TypedStorage<8, 8, ::bgfx::RtLightInfo const*>                          mPointLights;
    ::ll::TypedStorage<8, 8, ulong>                                               mPointLightsCount;
    ::ll::TypedStorage<8, 8, uint*>                                               mLightDistanceHistogram;
    ::ll::TypedStorage<8, 16, std::shared_ptr<std::vector<bgfx::PBRTextureData>>> mPBRTextureData;
    ::ll::TypedStorage<4, 4, uint>                                                mPBRTextureDataCounter;
    ::ll::TypedStorage<2, 2, ::bgfx::TextureHandle>                               mMissingTexture;
    ::ll::TypedStorage<8, 8, void*>                                               mLUTMemory;
    ::ll::TypedStorage<4, 4, int>                                                 mLUTStride;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               clearVertexIrradianceCache;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               clearFaceIrradianceCache;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               resolveLightMeasurement;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               accumulateInscatter;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               accumulateGIInscatter;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               blurGIInscatter;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               reproject;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               reprojectSH;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               reprojectSpecularOnly;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               filterMoments;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               atrous;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               blendCheckerboardFields;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               filterMomentsSH;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               atrousSH;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               blendCheckerboardFieldsSH;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               finalCombine;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               diffuseFireflyFilter;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               diffuseFireflyFilterSH;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               specularFireflyFilter;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               calculateFaceData;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               checkerboardUpscale;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               checkerboardUpscaleSH;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               temporalDenoising;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               shadowDenoising;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               finalizeDenoising;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               blendCheckerboardFieldsShadow;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               wfTest;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               drawLights;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               toneMappingHistogram;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               toneCurve;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               taa;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               copyToFinal;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               checkerboardInterleave;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               blurGradients;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               tileClassification;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               preBlasSkinning;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               primaryCheckerboardRayGenInline;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               sunShadowRayGenInline;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               refractionRayGenInline;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle>                               diffuseRayGenCombinedInline;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle> adaptiveDenoiserCalculateGradientsInline;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle> adaptiveDenoiserGenerateReferenceInline;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle> specularRayGenInline;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle> explicitLightSamplingInline;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle> pathTracingRayGenInline;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle> updateVertexIrradianceCacheInline;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle> updateFaceIrradianceCacheInline;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle> calculateInscatterInline;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle> calculateGIInscatterInline;
    ::ll::TypedStorage<2, 2, ::bgfx::ProgramHandle> incidentLightMeterInline;
    // NOLINTEND

public:
    // prevent constructor by default
    RayTracingResources& operator=(RayTracingResources const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RayTracingResources();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace bgfx
