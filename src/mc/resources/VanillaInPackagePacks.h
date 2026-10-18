#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/resources/IInPackagePacks.h"

class VanillaInPackagePacks : public ::IInPackagePacks {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~VanillaInPackagePacks();

    virtual std::vector<IInPackagePacks::MetaData> getPacks(::PackType) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::vector<::IInPackagePacks::MetaData> getPacks(::PackType packType) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<IInPackagePacks::MetaData> $getPacks(::PackType) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::std::vector<::IInPackagePacks::MetaData> $getPacks(::PackType packType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
