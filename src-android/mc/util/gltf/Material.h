#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace glTF {

struct Material {
public:
    // Material inner types define
    enum class AlphaMode : int {
        OPAQUE_MODE = 0,
        MASK        = 1,
        BLEND       = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                technique;
    ::ll::UntypedStorage<8, 16>                           values;
    ::ll::UntypedStorage<8, 16>                           extensions;
    ::ll::UntypedStorage<8, 16>                           pbrMetallicRoughness;
    ::ll::TypedStorage<4, 4, ::glTF::Material::AlphaMode> alphaMode;
    ::ll::TypedStorage<8, 24, std::string>                name;
    ::ll::TypedStorage<4, 4, int>                         id;
    // NOLINTEND
};

} // namespace glTF
