#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
class IInPackagePacks;
struct InPackagePackSourceOptions;
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
// clang-format on

class InPackagePackSource : public ::PackSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<const IInPackagePacks>>> mPacksProvider;
    ::ll::TypedStorage<1, 1, ::PackType const>                                         mPackType;
    ::ll::TypedStorage<1, 1, bool>                                                     mDiscovered;
    // NOLINTEND

public:
    // prevent constructor by default
    InPackagePackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InPackagePackSource();

    virtual ::PackOrigin getPackOrigin() const;

    virtual ::PackType getPackType() const;

    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PackOrigin $getPackOrigin() const;

    MCNAPI ::PackType $getPackType() const;

    MCNAPI ::PackSourceLoadResult $_loadImpl(::PackSourceLoadOptions&&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
