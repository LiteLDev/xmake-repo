#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce { class MaterialPtr; }
namespace mce { class Mesh; }
// clang-format on

struct CrackRenderObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::Mesh>> mMesh;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>   mCrackMat;
    ::ll::TypedStorage<1, 1, bool>                        mAlphaTest;
    // NOLINTEND

public:
    // prevent constructor by default
    CrackRenderObject& operator=(CrackRenderObject const&);
    CrackRenderObject(CrackRenderObject const&);
    CrackRenderObject();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CrackRenderObject();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce { class MaterialPtr; }
namespace mce { class Mesh; }
// clang-format on

struct CrackRenderObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Mesh>> mMesh;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*>       mCrackMat;
    ::ll::TypedStorage<1, 1, bool>                            mAlphaTest;
    // NOLINTEND
};
#else // @header-generator platform
struct CrackRenderObject {};
#endif // @header-generator platform
#endif // @header-generator platform
