#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
