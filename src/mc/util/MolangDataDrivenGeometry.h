#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class DataDrivenGeometry;
// clang-format on

struct MolangDataDrivenGeometry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::weak_ptr<DataDrivenGeometry>> mGeometry;
    ::ll::TypedStorage<8, 40, ::HashedString>                    mName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::DataDrivenGeometry>> mGeometry;
    ::ll::TypedStorage<8, 48, ::HashedString>                        mName;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    MolangDataDrivenGeometry();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    MolangDataDrivenGeometry();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MolangDataDrivenGeometry& operator=(::MolangDataDrivenGeometry const&);

    MCNAPI ~MolangDataDrivenGeometry();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI MolangDataDrivenGeometry(::std::shared_ptr<::DataDrivenGeometry> geometry, ::HashedString const& name);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static functions
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::MolangDataDrivenGeometry const& getDefaultErrorValue();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::shared_ptr<::DataDrivenGeometry> geometry, ::HashedString const& name);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
