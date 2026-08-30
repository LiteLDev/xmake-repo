#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/gltf/ObjectID.h"
#include "mc/util/gltf/OptionalField.h"

namespace glTF {

struct Texture {
public:
    // Texture inner types define
    enum class Format : int {
        ALPHA           = 6406,
        RGB             = 6407,
        RGBA            = 6408,
        LUMINANCE       = 6409,
        LUMINANCE_ALPHA = 6410,
    };

    enum class Target : int {
        TEXTURE_2D = 3553,
    };

    enum class Type : int {
        UNSIGNED_BYTE          = 5121,
        UNSIGNED_SHORT_5_6_5   = 33635,
        UNSIGNED_SHORT_4_4_4_4 = 32819,
        UNSIGNED_SHORT_5_5_5_1 = 32820,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>                 format;
    ::ll::UntypedStorage<4, 8>                 internalFormat;
    ::ll::TypedStorage<4, 8, ::glTF::ObjectID> sampler;
    ::ll::TypedStorage<4, 8, ::glTF::ObjectID> source;
    ::ll::UntypedStorage<4, 8>                 target;
    ::ll::UntypedStorage<4, 8>                 type;
    ::ll::TypedStorage<8, 24, std::string>     name;
    ::ll::TypedStorage<4, 4, int>              id;
    // NOLINTEND
};

} // namespace glTF
