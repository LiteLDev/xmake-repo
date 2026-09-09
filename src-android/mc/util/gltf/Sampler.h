#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/gltf/OptionalField.h"

namespace glTF {

struct Sampler {
public:
    // Sampler inner types define
    enum class MagFilter : int {
        NEAREST = 9728,
        LINEAR  = 9729,
    };

    enum class MinFilter : int {
        NEAREST                = 9728,
        LINEAR                 = 9729,
        NEAREST_MIPMAP_NEAREST = 9984,
        LINEAR_MIPMAP_NEAREST  = 9985,
        NEAREST_MIPMAP_LINEAR  = 9986,
        LINEAR_MIPMAP_LINEAR   = 9987,
    };

    enum class WrapS : int {
        CLAMP_TO_EDGE   = 33071,
        MIRRORED_REPEAT = 33648,
        REPEAT          = 10497,
    };

    enum class WrapT : int {
        CLAMP_TO_EDGE   = 33071,
        MIRRORED_REPEAT = 33648,
        REPEAT          = 10497,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>             magFilter;
    ::ll::UntypedStorage<4, 8>             minFilter;
    ::ll::UntypedStorage<4, 8>             wrapS;
    ::ll::UntypedStorage<4, 8>             wrapT;
    ::ll::TypedStorage<8, 24, std::string> name;
    ::ll::TypedStorage<4, 4, int>          id;
    // NOLINTEND
};

} // namespace glTF
