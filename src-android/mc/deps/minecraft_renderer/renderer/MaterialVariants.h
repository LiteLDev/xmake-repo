#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

class MaterialVariants {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mSkinningMaterialPtr;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mSkinningColorMaterialPtr;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MaterialVariants();

    MCNAPI explicit MaterialVariants(::mce::MaterialPtr const&);

    MCNAPI bool operator==(::MaterialVariants const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::mce::MaterialPtr const&);
    // NOLINTEND
};
