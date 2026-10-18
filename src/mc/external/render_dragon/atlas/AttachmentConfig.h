#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core_graphics/enums/TextureFormat.h"
#include "mc/external/render_dragon/materials/MaterialOutputName.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace dragon::atlas {

struct AttachmentConfig {
public:
    // AttachmentConfig inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    enum class Type : uchar {};
#endif // @header-generator platform
};

} // namespace dragon::atlas
