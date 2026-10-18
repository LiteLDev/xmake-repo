#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class MaterialVariants {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mSkinningMaterialPtr;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mSkinningColorMaterialPtr;
#else // @header-generator platform
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_S
    ::ll::TypedStorage<1, 1, ::mce::MaterialPtr> mSkinningMaterialPtr;
    ::ll::TypedStorage<1, 1, ::mce::MaterialPtr> mSkinningColorMaterialPtr;
#else // LL_PLAT_C
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mSkinningMaterialPtr;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mSkinningColorMaterialPtr;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MaterialVariants();

    MCNAPI explicit MaterialVariants(::mce::MaterialPtr const&);

    MCNAPI bool operator==(::MaterialVariants const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI MaterialVariants();

    MCAPI explicit MaterialVariants(::mce::MaterialPtr const& skinningMaterial);

    MCAPI ~MaterialVariants();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor();

    MCAPI void* $ctor(::mce::MaterialPtr const& skinningMaterial);
#endif
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::mce::MaterialPtr const&);
#else // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
