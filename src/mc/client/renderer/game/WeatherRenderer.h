#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/minecraft_renderer/objects/WeatherRenderObject.h"
#include "mc/deps/minecraft_renderer/renderer/DynamicTexture.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/LevelListener.h"
#include "mc/world/level/levelgen/synth/PerlinSimplexNoise.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockSource;
class ChunkSource;
class FrameUpdateContext;
class IClientInstance;
class LevelChunk;
class LevelRendererCamera;
class OptionRegistry;
class ScreenContext;
class Vec3;
struct ActorBlockSyncMessage;
struct ViewRenderData;
struct WeatherRenderObject;
namespace mce { class Mesh; }
namespace mce { class TextureGroup; }
namespace mce { struct ClientTexture; }
namespace mce { struct Image; }
namespace mce { struct TextureResourceService; }
// clang-format on

class WeatherRenderer : public ::LevelListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>                     mLocalUser;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                   mClientInstance;
    ::ll::TypedStorage<8, 16, std::shared_ptr<OptionRegistry>>     mOptions;
    ::ll::TypedStorage<8, 8, ::LevelRendererCamera&>               mLevelRendererCamera;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::Mesh>>          mParticleMesh;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                   mWeatherTexture;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::ClientTexture>> mWeatherSnowOcclusionTexture;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::ClientTexture>> mWeatherOcclusionTexture;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::ClientTexture>> mBrightnessTexture;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::Image>>         mWeatherSnowOcclusionImage;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::Image>>         mWeatherOcclusionImage;
    ::ll::TypedStorage<1, 1, ::mce::DynamicTexture const>          mWeatherSnowOcclusionTextureID;
    ::ll::TypedStorage<1, 1, ::mce::DynamicTexture const>          mWeatherOcclusionTextureID;
    ::ll::TypedStorage<1, 1, ::mce::DynamicTexture const>          mBrightnessTextureID;
    ::ll::TypedStorage<4, 4, int>                                  mOcclusionHeightOffset;
    ::ll::TypedStorage<4, 4, int>                                  m_nParticles;
    ::ll::UntypedStorage<4, 252>                                   mParameters;
    ::ll::UntypedStorage<4, 252>                                   mParametersDefaultValues;
    ::ll::TypedStorage<4, 4, float>                                fDensityRain;
    ::ll::TypedStorage<4, 4, float>                                fTargetDensityRain;
    ::ll::TypedStorage<4, 4, float>                                fDensitySnow;
    ::ll::TypedStorage<4, 4, float>                                fTargetDensitySnow;
    ::ll::TypedStorage<4, 4, float>                                m_fParticleBox;
    ::ll::TypedStorage<4, 4, float>                                m_fTime;
    ::ll::TypedStorage<1, 1, bool>                                 mOcclusionDirty;
    ::ll::TypedStorage<1, 1, bool>                                 mWeatherOcclusionTextureDirty;
    ::ll::TypedStorage<1, 1, bool>                                 mUseNewOcclusionTextureFormat;
    ::ll::TypedStorage<4, 12, ::BlockPos>                          mGPULastOcclusionBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos>                          mCPULastOcclusionBlock;
    ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise>                mNoise;
    ::ll::TypedStorage<8, 40, ::PerlinSimplexNoise>                mSnowNoise;
    ::ll::UntypedStorage<4, 10360>                                 m_runtime;
    ::ll::TypedStorage<4, 28, std::array<float, 7>>                precipitationAmount;
    ::ll::TypedStorage<4, 28, std::array<float, 7>>                mForcePrecipitationDensity;
    ::ll::UntypedStorage<4, 320>                                   mPreviousPosition;
    ::ll::TypedStorage<4, 4, float>                                mTargetFogLevel;
    ::ll::TypedStorage<4, 4, float>                                mFogLevel;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                  rainMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                  snowMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                  planktonMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                  redSporesMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                  blueSporesMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                  ashMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                  whiteAshMat;
    // NOLINTEND

public:
    // prevent constructor by default
    WeatherRenderer& operator=(WeatherRenderer const&);
    WeatherRenderer(WeatherRenderer const&);
    WeatherRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WeatherRenderer();

    virtual void onBlockChanged(::BlockSource&, ::BlockPos const&, uint, ::Block const&, ::Block const&, int, ::ActorBlockSyncMessage const*, ::BlockChangedEventTarget, ::Actor*);

    virtual void onChunkLoaded(::ChunkSource&, ::LevelChunk&);

    virtual void onSubChunkLoaded(::ChunkSource&, ::LevelChunk&, short, bool);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WeatherRenderer(
        ::WeakEntityRef,
        ::SubClientId const,
        std::shared_ptr<OptionRegistry>,
        ::IClientInstance&,
        std::shared_ptr<mce::TextureGroup>,
        ::LevelRendererCamera&
    );

    MCNAPI void endFrame(::mce::TextureResourceService&);

    MCNAPI ::WeatherRenderObject extract(::ScreenContext&) const;

    MCNAPI void frameUpdate(::FrameUpdateContext&);

    MCNAPI float getPrecipitationAmount(::WeatherRenderObject::PrecipitationType, float) const;

    MCNAPI ::gsl::span<WeatherRenderObject::PreviousPosition> getPreviousPositionCache();

    MCNAPI void tickWeather(::BlockSource&, float, ::Vec3 const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void render(
        ::ScreenContext&,
        ::ViewRenderData const&,
        ::WeatherRenderObject const&,
        ::gsl::span<WeatherRenderObject::PreviousPosition>
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& TEXTURE_LENGTH();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::WeakEntityRef,
        ::SubClientId const,
        std::shared_ptr<OptionRegistry>,
        ::IClientInstance&,
        std::shared_ptr<mce::TextureGroup>,
        ::LevelRendererCamera&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onBlockChanged(
        ::BlockSource&,
        ::BlockPos const&,
        uint,
        ::Block const&,
        ::Block const&,
        int,
        ::ActorBlockSyncMessage const*,
        ::BlockChangedEventTarget,
        ::Actor*
    );

    MCNAPI void $onChunkLoaded(::ChunkSource&, ::LevelChunk&);

    MCNAPI void $onSubChunkLoaded(::ChunkSource&, ::LevelChunk&, short, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class WeatherRenderer {};
#endif // @header-generator platform
