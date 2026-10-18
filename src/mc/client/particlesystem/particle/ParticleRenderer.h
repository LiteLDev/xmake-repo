#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/particlesystem/particle/ParticleRenderData.h"
#include "mc/deps/core/utility/buffer_span.h"

// auto generated forward declare list
// clang-format off
class Matrix;
class ParticleRenderData;
class ScreenContext;
class Tessellator;
class Vec3;
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"

// auto generated forward declare list
// clang-format off
class ParticleRenderData;
class ScreenContext;
class Vec3;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

class ParticleRenderer {
public:
    // ParticleRenderer inner types declare
    // clang-format off
    struct RenderBucketData;
    // clang-format on

    // ParticleRenderer inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct RenderBucketData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>                           mParticleIndexList;
        ::ll::TypedStorage<8, 8, ::ScreenContext&>            mScreenContext;
        ::ll::TypedStorage<8, 8, ::Vec3 const&>               mCameraTargetPos;
        ::ll::TypedStorage<8, 8, ::Vec3 const&>               mCameraPos;
        ::ll::TypedStorage<8, 8, ::ParticleRenderData const&> mParticleRenderData;
        ::ll::TypedStorage<8, 8, ulong>                       mTextureIdx;
        ::ll::TypedStorage<8, 8, ulong>                       mMaterialIdx;
        ::ll::TypedStorage<4, 4, uint>                        mParticleType;
        // NOLINTEND

    public:
        // prevent constructor by default
        RenderBucketData& operator=(RenderBucketData const&);
        RenderBucketData(RenderBucketData const&);
        RenderBucketData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<uint, std::vector<ulong>>> mBuckets;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _renderBuckets(::ScreenContext&, ::Vec3 const&, ::Vec3 const&, ::ParticleRenderData const&);

    MCNAPI void _sortParticlesIntoBuckets(::ParticleRenderData const&);

    MCNAPI ~ParticleRenderer();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static long& mParticleRenderBucketCount();

    MCNAPI static long& mParticleRenderParticleCount();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct RenderBucketData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::buffer_span<uint64>>      mParticleIndexList;
        ::ll::TypedStorage<8, 8, ::ScreenContext&>            mScreenContext;
        ::ll::TypedStorage<8, 8, ::Vec3 const&>               mCameraTargetPos;
        ::ll::TypedStorage<8, 8, ::Vec3 const&>               mCameraPos;
        ::ll::TypedStorage<8, 8, ::ParticleRenderData const&> mParticleRenderData;
        ::ll::TypedStorage<8, 8, uint64>                      mTextureIdx;
        ::ll::TypedStorage<8, 8, uint64>                      mMaterialIdx;
        ::ll::TypedStorage<4, 4, uint>                        mParticleType;
        // NOLINTEND

    public:
        // prevent constructor by default
        RenderBucketData& operator=(RenderBucketData const&);
        RenderBucketData(RenderBucketData const&);
        RenderBucketData();
    };

    using ParticleId = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::std::vector<uint64>>> mBuckets;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _renderBuckets(
        ::ScreenContext&            screenContext,
        ::Vec3 const&               cameraTargetPos,
        ::Vec3 const&               cameraPos,
        ::ParticleRenderData const& particleRenderData
    );

    MCAPI void renderParticles(
        ::ScreenContext&            screenContext,
        ::Vec3 const&               cameraTargetPos,
        ::Vec3 const&               cameraPos,
        ::ParticleRenderData const& particleRenderData
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int64& mParticleRenderBucketCount();

    MCAPI static int64& mParticleRenderParticleCount();
    // NOLINTEND
#else // @header-generator platform
    struct RenderBucketData {};
#endif // @header-generator platform
#endif // @header-generator platform
};
