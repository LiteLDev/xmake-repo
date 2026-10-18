#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace glTF {

struct Material {
public:
    // Material inner types define
    enum class AlphaMode : int {
#if defined(LL_PLAT_A) // @header-generator platform
        OPAQUE_MODE = 0,
        MASK        = 1,
        BLEND       = 2,
#else // @header-generator platform
        OpaqueMode = 0,
        Mask       = 1,
        Blend      = 2,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                technique;
    ::ll::UntypedStorage<8, 16>                           values;
    ::ll::UntypedStorage<8, 16>                           extensions;
    ::ll::UntypedStorage<8, 16>                           pbrMetallicRoughness;
    ::ll::TypedStorage<4, 4, ::glTF::Material::AlphaMode> alphaMode;
    ::ll::TypedStorage<8, 24, std::string>                name;
    ::ll::TypedStorage<4, 4, int>                         id;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkf0b0ae;
    ::ll::UntypedStorage<8, 16> mUnk9b9260;
    ::ll::UntypedStorage<8, 16> mUnk8e0bb7;
    ::ll::UntypedStorage<8, 16> mUnk460894;
    ::ll::UntypedStorage<4, 4>  mUnk5afaba;
    ::ll::UntypedStorage<8, 32> mUnkd1e7b8;
    ::ll::UntypedStorage<4, 4>  mUnkc1f094;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    Material& operator=(Material const&);
    Material(Material const&);
    Material();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    Material& operator=(Material const&);
    Material(Material const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI Material();

    MCNAPI ~Material();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace glTF
