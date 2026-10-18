#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/ptexture/BaseLightData.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/minecraft_renderer/renderer/DynamicTexture.h"

// auto generated forward declare list
// clang-format off
class BaseLightTextureImageBuilder;
class Dimension;
class FrameUpdateContext;
class IClientInstance;
class MinecraftGameplayGraphicsResources;
class Vec2;
struct BrightnessPair;
namespace mce { class Color; }
namespace mce { struct ClientTexture; }
namespace mce { struct Image; }
// clang-format on

class LightTexture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::Image>>         mBrightnessImage;
    ::ll::TypedStorage<1, 1, ::mce::DynamicTexture const>          mBrightnessTextureId;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::ClientTexture>> mBrightnessTexture;
    ::ll::TypedStorage<1, 1, bool>                                 mIsTextureDirty;
    ::ll::TypedStorage<1, 1, bool>                                 mIsDeferredShading;
    ::ll::TypedStorage<1, 1, bool>                                 mIsPrevTextureDeferred;
    ::ll::TypedStorage<4, 68, ::BaseLightData>                     mLightData;
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::Image>>         mBrightnessImageVanilla;
    // NOLINTEND

public:
    // prevent constructor by default
    LightTexture();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LightTexture(::MinecraftGameplayGraphicsResources&, ::SubClientId const);

    MCNAPI void frameUpdate(::FrameUpdateContext&);

    MCNAPI ::mce::ClientTexture const& getClientHandle() const;

    MCNAPI ::mce::Color getColorForUV(::BrightnessPair) const;

    MCNAPI ::mce::Color getColorForUV(::glm::vec<2, float, (glm::qualifier)0> const&) const;

    MCNAPI ::BaseLightData const& getLightData() const;

    MCNAPI void refresh(::Dimension const&, ::BaseLightTextureImageBuilder*, ::IClientInstance*, float, float, bool);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Vec2 brightnessToUV(::BrightnessPair);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& TEXTURE_LENGTH();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MinecraftGameplayGraphicsResources&, ::SubClientId const);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/common/SubClientId.h"

// auto generated forward declare list
// clang-format off
class BaseLightTextureImageBuilder;
class Dimension;
class FrameUpdateContext;
class IClientInstance;
class MinecraftGameplayGraphicsResources;
namespace mce { class Color; }
// clang-format on

class LightTexture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk6fbdad;
    ::ll::UntypedStorage<1, 1>  mUnkd27bbb;
    ::ll::UntypedStorage<8, 16> mUnk815074;
    ::ll::UntypedStorage<1, 1>  mUnk4bdd8d;
    ::ll::UntypedStorage<1, 1>  mUnkf5db3e;
    ::ll::UntypedStorage<1, 1>  mUnkddd289;
    ::ll::UntypedStorage<4, 68> mUnk3dfec9;
    ::ll::UntypedStorage<8, 16> mUnkd3656a;
    // NOLINTEND

public:
    // prevent constructor by default
    LightTexture& operator=(LightTexture const&);
    LightTexture(LightTexture const&);
    LightTexture();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    LightTexture(::MinecraftGameplayGraphicsResources& minecraftGameplayGraphicsResources, ::SubClientId subClientId);

    MCNAPI void frameUpdate(::FrameUpdateContext& frameUpdateContext);

    MCNAPI ::mce::Color getColorForUV(::glm::vec2 const& lightColor) const;

    MCNAPI void refresh(
        ::Dimension const&,
        ::BaseLightTextureImageBuilder* imageBuilder,
        ::IClientInstance*              client,
        float                           a,
        float                           ambientBoost,
        bool                            clampToMinimum
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::MinecraftGameplayGraphicsResources& minecraftGameplayGraphicsResources, ::SubClientId subClientId);
    // NOLINTEND
};
#else // @header-generator platform
class LightTexture {};
#endif // @header-generator platform
#endif // @header-generator platform
