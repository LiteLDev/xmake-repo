#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/gltf/ObjectID.h"
#include "mc/util/gltf/OptionalField.h"
#include "mc/util/gltf/Primitive.h"

namespace glTF {

struct Accessor {
public:
    // Accessor inner types define
    enum class Type : int {
        SCALAR = 0,
        VEC2   = 1,
        VEC3   = 2,
        VEC4   = 3,
        MAT2   = 4,
        MAT3   = 5,
        MAT4   = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glTF::ObjectID>       bufferView;
    ::ll::TypedStorage<4, 4, int>                    byteOffset;
    ::ll::UntypedStorage<4, 8>                       byteStride;
    ::ll::UntypedStorage<4, 4>                       componentType;
    ::ll::TypedStorage<4, 4, int>                    count;
    ::ll::TypedStorage<4, 4, ::glTF::Accessor::Type> type;
    ::ll::TypedStorage<8, 24, std::vector<float>>    min;
    ::ll::TypedStorage<8, 24, std::vector<float>>    max;
    ::ll::TypedStorage<8, 24, std::string>           name;
    ::ll::TypedStorage<4, 4, int>                    id;
    // NOLINTEND
};

} // namespace glTF
