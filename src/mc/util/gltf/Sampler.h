#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/util/gltf/OptionalField.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace glTF {

struct Sampler {
public:
    // Sampler inner types define
    enum class MagFilter : int {
#if defined(LL_PLAT_A) // @header-generator platform
        NEAREST = 9728,
        LINEAR  = 9729,
#else // @header-generator platform
        Nearest = 9728,
        Linear  = 9729,
#endif // @header-generator platform
    };

    enum class MinFilter : int {
#if defined(LL_PLAT_A) // @header-generator platform
        NEAREST                = 9728,
        LINEAR                 = 9729,
        NEAREST_MIPMAP_NEAREST = 9984,
        LINEAR_MIPMAP_NEAREST  = 9985,
        NEAREST_MIPMAP_LINEAR  = 9986,
        LINEAR_MIPMAP_LINEAR   = 9987,
#else // @header-generator platform
        Nearest              = 9728,
        Linear               = 9729,
        NearestMipmapNearest = 9984,
        LinearMipmapNearest  = 9985,
        NearestMipmapLinear  = 9986,
        LinearMipmapLinear   = 9987,
#endif // @header-generator platform
    };

    enum class WrapS : int {
#if defined(LL_PLAT_A) // @header-generator platform
        CLAMP_TO_EDGE   = 33071,
        MIRRORED_REPEAT = 33648,
        REPEAT          = 10497,
#else // @header-generator platform
        ClampToEdge    = 33071,
        MirroredRepeat = 33648,
        Repeat         = 10497,
#endif // @header-generator platform
    };

    enum class WrapT : int {
#if defined(LL_PLAT_A) // @header-generator platform
        CLAMP_TO_EDGE   = 33071,
        MIRRORED_REPEAT = 33648,
        REPEAT          = 10497,
#else // @header-generator platform
        ClampToEdge    = 33071,
        MirroredRepeat = 33648,
        Repeat         = 10497,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 8>             magFilter;
    ::ll::UntypedStorage<4, 8>             minFilter;
    ::ll::UntypedStorage<4, 8>             wrapS;
    ::ll::UntypedStorage<4, 8>             wrapT;
    ::ll::TypedStorage<8, 24, std::string> name;
    ::ll::TypedStorage<4, 4, int>          id;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 8>  mUnkd31c3c;
    ::ll::UntypedStorage<4, 8>  mUnkd857e8;
    ::ll::UntypedStorage<4, 8>  mUnke8e415;
    ::ll::UntypedStorage<4, 8>  mUnkb35439;
    ::ll::UntypedStorage<8, 32> mUnk35e82d;
    ::ll::UntypedStorage<4, 4>  mUnk2ae111;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Sampler& operator=(Sampler const&);
    Sampler(Sampler const&);
    Sampler();
#endif // @header-generator platform
};

} // namespace glTF
