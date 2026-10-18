#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/util/gltf/ObjectID.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace glTF {

struct Image {
public:
    // Image inner types define
    enum class ImageMimeType : int {
#if defined(LL_PLAT_A) // @header-generator platform
        PNG = 0,
#else // @header-generator platform
        Png = 0,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                 uri;
    ::ll::TypedStorage<4, 8, ::glTF::ObjectID>             bufferView;
    ::ll::TypedStorage<4, 4, ::glTF::Image::ImageMimeType> mimeType;
    ::ll::TypedStorage<8, 24, std::string>                 name;
    ::ll::TypedStorage<4, 4, int>                          id;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkf74c3b;
    ::ll::UntypedStorage<4, 8>  mUnk6ff5fa;
    ::ll::UntypedStorage<4, 4>  mUnk8e80bf;
    ::ll::UntypedStorage<8, 32> mUnke1c26f;
    ::ll::UntypedStorage<4, 4>  mUnk6b4963;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Image& operator=(Image const&);
    Image(Image const&);
    Image();
#endif // @header-generator platform
};

} // namespace glTF
