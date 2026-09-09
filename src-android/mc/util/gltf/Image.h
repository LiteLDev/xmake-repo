#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/gltf/ObjectID.h"

namespace glTF {

struct Image {
public:
    // Image inner types define
    enum class ImageMimeType : int {
        PNG = 0,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                 uri;
    ::ll::TypedStorage<4, 8, ::glTF::ObjectID>             bufferView;
    ::ll::TypedStorage<4, 4, ::glTF::Image::ImageMimeType> mimeType;
    ::ll::TypedStorage<8, 24, std::string>                 name;
    ::ll::TypedStorage<4, 4, int>                          id;
    // NOLINTEND
};

} // namespace glTF
