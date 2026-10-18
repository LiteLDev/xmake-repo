#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glTF {

struct Shader {
public:
    // Shader inner types define
    enum class Type : int {
#if defined(LL_PLAT_A) // @header-generator platform
        FRAGMENT_SHADER = 35632,
        VERTEX_SHADER   = 35633,
#else // @header-generator platform
        FragmentShader = 35632,
        VertexShader   = 35633,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>         uri;
    ::ll::TypedStorage<4, 4, ::glTF::Shader::Type> type;
    ::ll::TypedStorage<8, 24, std::string>         name;
    ::ll::TypedStorage<4, 4, int>                  id;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk4c1920;
    ::ll::UntypedStorage<4, 4>  mUnk38e2d1;
    ::ll::UntypedStorage<8, 32> mUnke56583;
    ::ll::UntypedStorage<4, 4>  mUnk34516e;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Shader& operator=(Shader const&);
    Shader(Shader const&);
    Shader();
#endif // @header-generator platform
};

} // namespace glTF
