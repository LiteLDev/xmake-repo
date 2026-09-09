#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/resources/IInPackagePacks.h"

class VanillaInPackagePacks : public ::IInPackagePacks {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VanillaInPackagePacks();

    virtual std::vector<IInPackagePacks::MetaData> getPacks(::PackType) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::vector<IInPackagePacks::MetaData> $getPacks(::PackType) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
