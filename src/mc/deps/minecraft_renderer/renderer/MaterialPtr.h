#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
#if defined(LL_PLAT_A) // @header-generator platform
namespace mce { class RenderMaterial; }
#else // @header-generator platform
#endif // @header-generator platform
namespace mce { class RenderMaterialGroupBase; }
namespace mce { class RenderMaterialInfo; }
// clang-format on

namespace mce {

class MaterialPtr {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<mce::RenderMaterialInfo>> mRenderMaterialInfoPtr;
#else // @header-generator platform
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::RenderMaterialInfo>> mRenderMaterialInfoPtr;
#endif
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    MaterialPtr();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MaterialPtr(::mce::RenderMaterialGroupBase&, ::HashedString const&);

    MCNAPI ::HashedString const& getHashedName() const;

    MCNAPI bool isNull() const;

    MCNAPI explicit operator bool() const;

    MCNAPI ::mce::RenderMaterial const& operator*() const;

    MCNAPI ::mce::RenderMaterial const* operator->() const;

    MCNAPI ::mce::RenderMaterial* operator->();

    MCNAPI ::mce::MaterialPtr& operator=(::mce::MaterialPtr const&);

    MCNAPI bool operator==(::mce::MaterialPtr const&) const;

    MCNAPI ~MaterialPtr();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI MaterialPtr(::mce::RenderMaterialGroupBase& group, ::HashedString const& name);

    MCAPI ~MaterialPtr();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::mce::RenderMaterialGroupBase&, ::HashedString const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::mce::RenderMaterialGroupBase& group, ::HashedString const& name);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace mce
