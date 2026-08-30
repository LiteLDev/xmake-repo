#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
class Pack;
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
struct RealmsUnknownPackSourceOptions;
namespace mce { class UUID; }
// clang-format on

class RealmsUnknownPackSource : public ::PackSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::PackType const>   mPackType;
    ::ll::TypedStorage<1, 1, ::PackOrigin const> mPackOrigin;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsUnknownPackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsUnknownPackSource();

    virtual ::PackOrigin getPackOrigin() const;

    virtual ::PackType getPackType() const;

    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addPack(std::unique_ptr<Pack>&&);

    MCNAPI void clearPacks();

    MCNAPI bool removePack(::mce::UUID const&);
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
