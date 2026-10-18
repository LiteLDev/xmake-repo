#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/util/gltf/ObjectID.h"
#include "mc/util/gltf/OptionalField.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace glTF {

struct Texture {
public:
    // Texture inner types define
    enum class Format : int {
#if defined(LL_PLAT_A) // @header-generator platform
        ALPHA           = 6406,
        RGB             = 6407,
        RGBA            = 6408,
        LUMINANCE       = 6409,
        LUMINANCE_ALPHA = 6410,
#else // @header-generator platform
        Alpha          = 6406,
        Rgb            = 6407,
        Rgba           = 6408,
        Luminance      = 6409,
        LuminanceAlpha = 6410,
#endif // @header-generator platform
    };

    enum class Target : int {
#if defined(LL_PLAT_A) // @header-generator platform
        TEXTURE_2D = 3553,
#else // @header-generator platform
        Texture2d = 3553,
#endif // @header-generator platform
    };

    enum class Type : int {
#if defined(LL_PLAT_A) // @header-generator platform
        UNSIGNED_BYTE          = 5121,
        UNSIGNED_SHORT_5_6_5   = 33635,
        UNSIGNED_SHORT_4_4_4_4 = 32819,
        UNSIGNED_SHORT_5_5_5_1 = 32820,
#else // @header-generator platform
        Byte         = 5121,
        Short5_6_5   = 33635,
        Short4_4_4_4 = 32819,
        Short5_5_5_1 = 32820,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 8>                 format;
    ::ll::UntypedStorage<4, 8>                 internalFormat;
    ::ll::TypedStorage<4, 8, ::glTF::ObjectID> sampler;
    ::ll::TypedStorage<4, 8, ::glTF::ObjectID> source;
    ::ll::UntypedStorage<4, 8>                 target;
    ::ll::UntypedStorage<4, 8>                 type;
    ::ll::TypedStorage<8, 24, std::string>     name;
    ::ll::TypedStorage<4, 4, int>              id;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 8>  mUnk2b031b;
    ::ll::UntypedStorage<4, 8>  mUnk28ff05;
    ::ll::UntypedStorage<4, 8>  mUnka6e0d7;
    ::ll::UntypedStorage<4, 8>  mUnkbf05ae;
    ::ll::UntypedStorage<4, 8>  mUnk5e5ea8;
    ::ll::UntypedStorage<4, 8>  mUnk318a55;
    ::ll::UntypedStorage<8, 32> mUnk1ffb9f;
    ::ll::UntypedStorage<4, 4>  mUnk797435;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Texture& operator=(Texture const&);
    Texture(Texture const&);
    Texture();
#endif // @header-generator platform
};

} // namespace glTF
