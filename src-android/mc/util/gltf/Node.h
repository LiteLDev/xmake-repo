#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/gltf/ObjectID.h"
#include "mc/util/gltf/OptionalField.h"

namespace glTF {

struct Node {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>      camera;
    ::ll::TypedStorage<8, 24, std::vector<int>> children;
    ::ll::TypedStorage<8, 24, std::vector<int>> skeleton;
    ::ll::TypedStorage<8, 24, std::string>      skin;
    ::ll::TypedStorage<8, 24, std::string>      jointName;
    ::ll::UntypedStorage<4, 68>                 matrix;
    ::ll::TypedStorage<4, 8, ::glTF::ObjectID>  mesh;
    ::ll::UntypedStorage<4, 20>                 rotation;
    ::ll::UntypedStorage<4, 16>                 scale;
    ::ll::UntypedStorage<4, 16>                 translation;
    ::ll::TypedStorage<8, 24, std::string>      name;
    ::ll::TypedStorage<4, 4, int>               id;
    // NOLINTEND
};

} // namespace glTF
