#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/LinearAllocator.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include "mc/deps/minecraft_renderer/resources/ServerTexture.h"
#include "mc/platform/NonCopyableField.h"

// auto generated forward declare list
// clang-format off
namespace mce { class MaterialPtr; }
namespace mce { class Mesh; }
// clang-format on

struct SkyRenderObject {
public:
    // member variables
    // NOLINTBEGIN
    union {
        ::ll::UntypedStorage<8, 16> mSkyMesh;
        ::ll::UntypedStorage<1, 1>  _;
    };
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::Mesh>> mStarsMesh;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::Mesh>> mSunMesh;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::Mesh>> mMoonMesh;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>          mEndSkyTex;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>          mEndFlashTex;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>          mSunTex;
    ::ll::TypedStorage<8, 32, ::mce::TexturePtr>          mMoonTex;
    ::ll::UntypedStorage<8, 40>                           mCubemapTextures;
    ::ll::UntypedStorage<1, 24>                           mCubemapTexture;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>   mCubemapMaterial;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>   mSkyMaterial;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>   mStarsMaterial;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>   mSunMoonMaterial;
    ::ll::TypedStorage<4, 4, float>                       mOrbitalOffsetDegrees;
    ::ll::TypedStorage<4, 4, float>                       mTimeOfDay;
    ::ll::TypedStorage<4, 4, float>                       mStarBrightness;
    ::ll::TypedStorage<4, 4, float>                       mSunAngleOne;
    ::ll::TypedStorage<4, 4, float>                       mFogLevel;
    ::ll::TypedStorage<4, 4, float>                       mAmbientBrightness;
    ::ll::TypedStorage<4, 4, float>                       mSkyDarken;
    // NOLINTEND

public:
    // prevent constructor by default
    SkyRenderObject& operator=(SkyRenderObject const&);
    SkyRenderObject(SkyRenderObject const&);
    SkyRenderObject();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SkyRenderObject(::SkyRenderObject&&);

    MCNAPI ~SkyRenderObject();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SkyRenderObject&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
