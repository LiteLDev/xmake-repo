#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/deps/minecraft_renderer/resources/ServerTexture.h"

// auto generated forward declare list
// clang-format off
namespace mce { class MaterialPtr; }
namespace mce { class Mesh; }
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/deps/minecraft_renderer/resources/ServerTexture.h"

// auto generated forward declare list
// clang-format off
namespace mce { class MaterialPtr; }
namespace mce { class Mesh; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

struct WeatherRenderObject {
public:
    // WeatherRenderObject inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct WeatherParameters;
    struct RuntimeValues;
    struct RenderRuntimeSettings;
#else // @header-generator platform
#endif // @header-generator platform
    struct PreviousPosition;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct RuntimeValues;
#if defined(LL_PLAT_C) // @header-generator platform
    struct RenderRuntimeSettings;
#else // @header-generator platform
#endif // @header-generator platform
    struct WeatherParameters;
#if defined(LL_PLAT_C) // @header-generator platform
#else // @header-generator platform
    struct RenderRuntimeSettings;
#endif // @header-generator platform
#endif // @header-generator platform
    // clang-format on

    // WeatherRenderObject inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum PrecipitationType : uint {
        PRECIPITATION_RAIN        = 0,
        PRECIPITATION_SNOW        = 1,
        PRECIPITATION_PLANKTON    = 2,
        PRECIPITATION_RED_SPORES  = 3,
        PRECIPITATION_BLUE_SPORES = 4,
        PRECIPITATION_ASH         = 5,
        PRECIPITATION_WHITE_ASH   = 6,
        PRECIPITATION_COUNT       = 7,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class PrecipitationType : int {
        Rain       = 0,
        Snow       = 1,
        Plankton   = 2,
        RedSpores  = 3,
        BlueSpores = 4,
        Ash        = 5,
        WhiteAsh   = 6,
        Count      = 7,
    };
#else // @header-generator platform
    enum class PrecipitationType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct WeatherParameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> fSpeed;
        ::ll::TypedStorage<4, 4, float> fLength;
        ::ll::TypedStorage<4, 4, float> fWidth;
        ::ll::TypedStorage<4, 4, float> fAlpha;
        ::ll::TypedStorage<4, 4, float> fWindScale;
        ::ll::TypedStorage<1, 1, bool>  bNormalizeWind;
        ::ll::TypedStorage<4, 4, float> fGravityScale;
        ::ll::TypedStorage<4, 4, float> fRandomDirScale;
        ::ll::TypedStorage<4, 4, float> fDespawnProbability;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum : int {
        Count = 10,
    };
#else // @header-generator platform
    struct PreviousPosition {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct RuntimeValues {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                                    m_fSpeedScale;
        ::ll::TypedStorage<4, 4, float>                                    m_fWindScale;
        ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> m_vWind;
        ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> m_vOffset;
        ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> m_vRandom;
        ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> m_vSnowOffset;
        ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> m_vRandomDir;
        ::ll::TypedStorage<4, 4, int>                                      m_ParticleIndexOffset;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct PreviousPosition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::glm::vec4> mPositionOffset;
        ::ll::TypedStorage<4, 16, ::glm::vec4> mForward;
        // NOLINTEND
    };
#else // @header-generator platform
    struct RuntimeValues {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct RenderRuntimeSettings {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 72, ::WeatherRenderObject::RuntimeValues> t0;
        ::ll::TypedStorage<4, 72, ::WeatherRenderObject::RuntimeValues> t;
        ::ll::TypedStorage<1, 1, bool>                                  resetMotion;
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct RuntimeValues {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>        m_fSpeedScale;
        ::ll::TypedStorage<4, 4, float>        m_fWindScale;
        ::ll::TypedStorage<4, 12, ::glm::vec3> m_vWind;
        ::ll::TypedStorage<4, 12, ::glm::vec3> m_vOffset;
        ::ll::TypedStorage<4, 12, ::glm::vec3> m_vRandom;
        ::ll::TypedStorage<4, 12, ::glm::vec3> m_vSnowOffset;
        ::ll::TypedStorage<4, 12, ::glm::vec3> m_vRandomDir;
        ::ll::TypedStorage<4, 4, int>          m_ParticleIndexOffset;
        // NOLINTEND
    };
#else // @header-generator platform
    struct WeatherParameters {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        RenderRuntimeSettings& operator=(RenderRuntimeSettings const&);
    };

    struct PreviousPosition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mPositionOffset;
        ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mForward;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::Mesh>>                             mParticleMesh;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                                      mWeatherTexture;
    ::ll::UntypedStorage<1, 24>                                                       mWeatherSnowOcclusionTexture;
    ::ll::UntypedStorage<1, 24>                                                       mWeatherOcclusionTexture;
    ::ll::UntypedStorage<1, 24>                                                       mBrightnessTexture;
    ::ll::TypedStorage<4, 4, int>                                                     mOcclusionHeightOffset;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>                               mRainMat;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>                               mSnowMat;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>                               mPlanktonMat;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>                               mRedSporesMat;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>                               mBlueSporesMat;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>                               mAshMat;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>                               mWhiteAshMat;
    ::ll::TypedStorage<4, 252, std::array<WeatherRenderObject::WeatherParameters, 7>> mParams;
    ::ll::TypedStorage<4, 10360, std::array<std::array<WeatherRenderObject::RenderRuntimeSettings, 10>, 7>> mSettings;
    ::ll::TypedStorage<4, 4, float>                                    mDensityRain;
    ::ll::TypedStorage<4, 4, float>                                    mDensitySnow;
    ::ll::TypedStorage<4, 4, float>                                    mDensityPlankton;
    ::ll::TypedStorage<4, 4, float>                                    mDensityRedSpores;
    ::ll::TypedStorage<4, 4, float>                                    mDensityBlueSpores;
    ::ll::TypedStorage<4, 4, float>                                    mDensityAsh;
    ::ll::TypedStorage<4, 4, float>                                    mDensityWhiteAsh;
    ::ll::TypedStorage<4, 4, float>                                    mParticleBoxSize;
    ::ll::TypedStorage<4, 4, float>                                    mLuminance;
    ::ll::TypedStorage<4, 4, int>                                      mParticleCount;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mLastOcclusionBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    WeatherRenderObject& operator=(WeatherRenderObject const&);
    WeatherRenderObject(WeatherRenderObject const&);
    WeatherRenderObject();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WeatherRenderObject(::WeatherRenderObject&&);

    MCNAPI ~WeatherRenderObject();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WeatherRenderObject&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct RenderRuntimeSettings {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 72, ::WeatherRenderObject::RuntimeValues> t0;
        ::ll::TypedStorage<4, 72, ::WeatherRenderObject::RuntimeValues> t;
        ::ll::TypedStorage<1, 1, bool>                                  resetMotion;
        // NOLINTEND
    };

    struct WeatherParameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> fSpeed;
        ::ll::TypedStorage<4, 4, float> fLength;
        ::ll::TypedStorage<4, 4, float> fWidth;
        ::ll::TypedStorage<4, 4, float> fAlpha;
        ::ll::TypedStorage<4, 4, float> fWindScale;
        ::ll::TypedStorage<1, 1, bool>  bNormalizeWind;
        ::ll::TypedStorage<4, 4, float> fGravityScale;
        ::ll::TypedStorage<4, 4, float> fRandomDirScale;
        ::ll::TypedStorage<4, 4, float> fDespawnProbability;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Mesh>>                             mParticleMesh;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>                                          mWeatherTexture;
    ::ll::TypedStorage<8, 24, ::mce::ServerTexture>                                       mWeatherSnowOcclusionTexture;
    ::ll::TypedStorage<8, 24, ::mce::ServerTexture>                                       mWeatherOcclusionTexture;
    ::ll::TypedStorage<8, 24, ::mce::ServerTexture>                                       mBrightnessTexture;
    ::ll::TypedStorage<4, 4, int>                                                         mOcclusionHeightOffset;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>                                   mRainMat;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>                                   mSnowMat;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>                                   mPlanktonMat;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>                                   mRedSporesMat;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>                                   mBlueSporesMat;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>                                   mAshMat;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>                                   mWhiteAshMat;
    ::ll::TypedStorage<4, 252, ::std::array<::WeatherRenderObject::WeatherParameters, 7>> mParams;
    ::ll::TypedStorage<4, 10360, ::std::array<::std::array<::WeatherRenderObject::RenderRuntimeSettings, 10>, 7>>
                                           mSettings;
    ::ll::TypedStorage<4, 4, float>        mDensityRain;
    ::ll::TypedStorage<4, 4, float>        mDensitySnow;
    ::ll::TypedStorage<4, 4, float>        mDensityPlankton;
    ::ll::TypedStorage<4, 4, float>        mDensityRedSpores;
    ::ll::TypedStorage<4, 4, float>        mDensityBlueSpores;
    ::ll::TypedStorage<4, 4, float>        mDensityAsh;
    ::ll::TypedStorage<4, 4, float>        mDensityWhiteAsh;
    ::ll::TypedStorage<4, 4, float>        mParticleBoxSize;
    ::ll::TypedStorage<4, 4, float>        mLuminance;
    ::ll::TypedStorage<4, 4, int>          mParticleCount;
    ::ll::TypedStorage<4, 12, ::glm::vec3> mLastOcclusionBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    WeatherRenderObject& operator=(WeatherRenderObject const&);
    WeatherRenderObject(WeatherRenderObject const&);
    WeatherRenderObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WeatherRenderObject(::WeatherRenderObject&&);

    MCAPI ~WeatherRenderObject();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::WeatherRenderObject&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct RenderRuntimeSettings {};
#endif // @header-generator platform
#endif // @header-generator platform
};
