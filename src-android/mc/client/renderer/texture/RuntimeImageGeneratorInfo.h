#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
