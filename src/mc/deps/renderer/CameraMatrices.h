#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
struct CameraMatrices {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::Matrix> world;
    ::ll::TypedStorage<4, 64, ::Matrix> view;
    ::ll::TypedStorage<4, 64, ::Matrix> proj;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraMatrices& operator=(CameraMatrices const&);
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CameraMatrices {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 64> mUnkefc815;
    ::ll::UntypedStorage<4, 64> mUnka1265e;
    ::ll::UntypedStorage<4, 64> mUnk421921;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraMatrices& operator=(CameraMatrices const&);
    CameraMatrices(CameraMatrices const&);
    CameraMatrices();
};
#else // @header-generator platform
struct CameraMatrices {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
