#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/util/gltf/ObjectID.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace glTF {

struct BufferView {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, ::glTF::ObjectID> buffer;
    ::ll::TypedStorage<4, 4, int>              byteOffset;
    ::ll::TypedStorage<4, 4, int>              byteLength;
    ::ll::TypedStorage<8, 24, std::string>     name;
    ::ll::TypedStorage<4, 4, int>              id;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 8>  mUnk36aa81;
    ::ll::UntypedStorage<4, 4>  mUnk16272b;
    ::ll::UntypedStorage<4, 4>  mUnk4da122;
    ::ll::UntypedStorage<8, 32> mUnk29bc6d;
    ::ll::UntypedStorage<4, 4>  mUnk74b307;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BufferView& operator=(BufferView const&);
    BufferView(BufferView const&);
    BufferView();
#endif // @header-generator platform
};

} // namespace glTF
