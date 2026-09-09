#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/gltf/ObjectID.h"

namespace glTF {

struct BufferView {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glTF::ObjectID> buffer;
    ::ll::TypedStorage<4, 4, int>              byteOffset;
    ::ll::TypedStorage<4, 4, int>              byteLength;
    ::ll::TypedStorage<8, 24, std::string>     name;
    ::ll::TypedStorage<4, 4, int>              id;
    // NOLINTEND
};

} // namespace glTF
