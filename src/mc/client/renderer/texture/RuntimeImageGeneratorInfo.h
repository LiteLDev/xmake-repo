#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLocation.h"

// auto generated forward declare list
// clang-format off
class AbstractTextureAccessor;
namespace cg { class ImageBuffer; }
// clang-format on

struct RuntimeImageGeneratorInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mImageName;
    ::ll::UntypedStorage<8, 56>            mImageLocation;
    ::ll::UntypedStorage<8, 48>            mImageGenerator;
    // NOLINTEND

public:
    // prevent constructor by default
    RuntimeImageGeneratorInfo();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLocation.h"

// auto generated forward declare list
// clang-format off
class AbstractTextureAccessor;
namespace cg { class ImageBuffer; }
// clang-format on

struct RuntimeImageGeneratorInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                         mImageName;
    ::ll::TypedStorage<8, 56, ::ResourceLocation>                                                    mImageLocation;
    ::ll::TypedStorage<8, 64, ::std::function<void(::AbstractTextureAccessor&, ::cg::ImageBuffer&)>> mImageGenerator;
    // NOLINTEND
};
#else // @header-generator platform
struct RuntimeImageGeneratorInfo {};
#endif // @header-generator platform
#endif // @header-generator platform
