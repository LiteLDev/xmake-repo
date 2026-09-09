#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/gltf/ObjectID.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace glTF {

struct Mesh {
public:
    // Mesh inner types declare
    // clang-format off
    struct Primitive;
    // clang-format on

    // Mesh inner types define
    struct Primitive {
    public:
        // Primitive inner types define
        enum class Mode : int {
            POINT          = 0,
            LINES          = 1,
            LINE_LOOP      = 2,
            LINE_STRIP     = 3,
            TRIANGLES      = 4,
            TRIANGLE_STRIP = 5,
            TRIANGLE_FAN   = 6,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>                             attributes;
        ::ll::TypedStorage<4, 8, ::glTF::ObjectID>              indices;
        ::ll::TypedStorage<4, 8, ::glTF::ObjectID>              material;
        ::ll::TypedStorage<4, 4, ::glTF::Mesh::Primitive::Mode> mode;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<glTF::Mesh::Primitive>> primitives;
    ::ll::TypedStorage<8, 24, std::string>                        name;
    ::ll::TypedStorage<4, 4, int>                                 id;
    ::ll::UntypedStorage<8, 16>                                   extras;
    // NOLINTEND
};

} // namespace glTF
