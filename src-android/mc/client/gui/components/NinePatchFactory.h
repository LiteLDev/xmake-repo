#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLocation.h"

// auto generated forward declare list
// clang-format off
class NinePatchLayer;
struct IntRectangle;
namespace mce { class TextureGroup; }
// clang-format on

class NinePatchFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::TextureGroup>> mTextureGroup;
    ::ll::TypedStorage<8, 48, ::ResourceLocation>                 mResourceLocation;
    ::ll::TypedStorage<4, 4, int>                                 mWidth;
    ::ll::TypedStorage<4, 4, int>                                 mHeight;
    // NOLINTEND

public:
    // prevent constructor by default
    NinePatchFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NinePatchFactory(std::shared_ptr<mce::TextureGroup>, ::ResourceLocation const&);

    MCNAPI std::unique_ptr<NinePatchLayer> createSymmetrical(::IntRectangle const&, int, int, float, float);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<mce::TextureGroup>, ::ResourceLocation const&);
    // NOLINTEND
};
