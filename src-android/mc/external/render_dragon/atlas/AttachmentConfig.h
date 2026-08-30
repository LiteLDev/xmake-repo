#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/enums/TextureFormat.h"
#include "mc/external/render_dragon/materials/MaterialOutputName.h"

namespace dragon::atlas {

struct AttachmentConfig {
public:
    // AttachmentConfig inner types define
    enum class Type : uchar {
        Color = 0,
        Depth = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::dragon::atlas::AttachmentConfig::Type>                     mType;
    ::ll::TypedStorage<4, 4, ::mce::TextureFormat>                                        mFormat;
    ::ll::TypedStorage<4, 4, uint>                                                        mMipLevels;
    ::ll::TypedStorage<8, 16, std::variant<ulong, dragon::materials::MaterialOutputName>> mColorBinding;
    ::ll::TypedStorage<8, 24, std::string>                                                mSuffix;
    // NOLINTEND
};

} // namespace dragon::atlas
