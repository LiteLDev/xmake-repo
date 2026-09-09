#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glTF {

struct Shader {
public:
    // Shader inner types define
    enum class Type : int {
        FRAGMENT_SHADER = 35632,
        VERTEX_SHADER   = 35633,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>         uri;
    ::ll::TypedStorage<4, 4, ::glTF::Shader::Type> type;
    ::ll::TypedStorage<8, 24, std::string>         name;
    ::ll::TypedStorage<4, 4, int>                  id;
    // NOLINTEND
};

} // namespace glTF
