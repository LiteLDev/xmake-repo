#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce { class Mesh; }
// clang-format on

struct MeshGarbage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::Mesh>> mMeshPtr;
    // NOLINTEND

public:
    // prevent constructor by default
    MeshGarbage& operator=(MeshGarbage const&);
    MeshGarbage();
};
#else // @header-generator platform
struct MeshGarbage {};
#endif // @header-generator platform
