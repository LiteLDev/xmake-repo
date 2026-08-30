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
namespace Realms { struct RealmsServicePackSourceOptions; }
// clang-format on

namespace Realms {

class RealmsServicePackSource : public ::PackSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long const>       mRealmId;
    ::ll::TypedStorage<1, 1, ::PackType const> mPackType;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsServicePackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsServicePackSource();

    virtual ::PackOrigin getPackOrigin() const;

    virtual ::PackType getPackType() const;

    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI long getRealmId() const;

    MCNAPI void setPackContent(std::vector<gsl::not_null<std::shared_ptr<Pack>>>&&);
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

} // namespace Realms
