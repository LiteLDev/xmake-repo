#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/util/gltf/ObjectID.h"
#include "mc/util/gltf/OptionalField.h"
#include "mc/util/gltf/Primitive.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace glTF {

struct Accessor {
public:
    // Accessor inner types define
    enum class Type : int {
#if defined(LL_PLAT_A) // @header-generator platform
        SCALAR = 0,
        VEC2   = 1,
        VEC3   = 2,
        VEC4   = 3,
        MAT2   = 4,
        MAT3   = 5,
        MAT4   = 6,
#else // @header-generator platform
        Scalar = 0,
        Vec2   = 1,
        Vec3   = 2,
        Vec4   = 3,
        Mat2   = 4,
        Mat3   = 5,
        Mat4   = 6,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<4, 8>  mUnk14b49d;
    ::ll::UntypedStorage<4, 4>  mUnkd83c28;
    ::ll::UntypedStorage<4, 8>  mUnkdda367;
    ::ll::UntypedStorage<4, 4>  mUnkb58a01;
    ::ll::UntypedStorage<4, 4>  mUnka528a2;
    ::ll::UntypedStorage<4, 4>  mUnk372894;
    ::ll::UntypedStorage<8, 24> mUnk2880ed;
    ::ll::UntypedStorage<8, 24> mUnk7bfbcc;
    ::ll::UntypedStorage<8, 32> mUnkb9cca9;
    ::ll::UntypedStorage<4, 4>  mUnkafde70;
    // NOLINTEND

public:
    // prevent constructor by default
    Accessor& operator=(Accessor const&);
    Accessor(Accessor const&);
    Accessor();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~Accessor();
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
