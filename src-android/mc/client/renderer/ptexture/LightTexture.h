#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
