#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/DlcPerformanceTier.h"
#include "mc/resources/PackManifest.h"

class CatalogPackManifest : public ::PackManifest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>         mProductId;
    ::ll::TypedStorage<4, 4, ::DlcPerformanceTier> mPerfTier;
    // NOLINTEND

public:
    // prevent constructor by default
    CatalogPackManifest& operator=(CatalogPackManifest const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CatalogPackManifest();

    virtual std::unique_ptr<PackManifest> clone() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string getProductId() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<PackManifest> $clone() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
