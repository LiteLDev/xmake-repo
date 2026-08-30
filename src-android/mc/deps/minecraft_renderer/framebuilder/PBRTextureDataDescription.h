#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/resources/MERSTextureMode.h"

namespace mce::framebuilder {

struct PBRTextureDataDescription {
public:
    // PBRTextureDataDescription inner types define
    enum class NormalMode : int {
        None                = 0,
        NormalMap           = 1,
        HeightMap           = 2,
        HeightDifferentials = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort>                                                     mNumMipsColor;
    ::ll::TypedStorage<4, 4, float>                                                      mUniformMetalness;
    ::ll::TypedStorage<4, 4, float>                                                      mUniformEmissive;
    ::ll::TypedStorage<4, 4, float>                                                      mUniformRoughness;
    ::ll::TypedStorage<4, 4, float>                                                      mUniformSubsurface;
    ::ll::TypedStorage<1, 1, ::MERSTextureMode>                                          mMERSMode;
    ::ll::TypedStorage<4, 12, std::optional<glm::vec<2, float, (glm::qualifier)0>>>      mMERSUVScale;
    ::ll::TypedStorage<4, 12, std::optional<glm::vec<2, float, (glm::qualifier)0>>>      mMERSUVBias;
    ::ll::TypedStorage<2, 4, std::optional<ushort>>                                      mNumMipsMERS;
    ::ll::TypedStorage<4, 4, ::mce::framebuilder::PBRTextureDataDescription::NormalMode> mNormalMode;
    ::ll::TypedStorage<4, 12, std::optional<glm::vec<2, float, (glm::qualifier)0>>>      mNormalOrHeightUVScale;
    ::ll::TypedStorage<4, 12, std::optional<glm::vec<2, float, (glm::qualifier)0>>>      mNormalOrHeightUVBias;
    ::ll::TypedStorage<2, 4, std::optional<ushort>>                                      mNumMipsNormalOrHeight;
    // NOLINTEND
};

} // namespace mce::framebuilder
