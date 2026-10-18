#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Pack;
#else // @header-generator platform
#endif // @header-generator platform
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Realms { struct RealmsServicePackSourceOptions; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Realms {

class RealmsServicePackSource : public ::PackSource {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, long const>       mRealmId;
    ::ll::TypedStorage<1, 1, ::PackType const> mPackType;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkf14443;
    ::ll::UntypedStorage<1, 1> mUnk32d08d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    RealmsServicePackSource& operator=(RealmsServicePackSource const&);
    RealmsServicePackSource(RealmsServicePackSource const&);
#endif // @header-generator platform
    RealmsServicePackSource();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~RealmsServicePackSource();
#else // @header-generator platform
    virtual ~RealmsServicePackSource() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PackOrigin getPackOrigin() const;
#else // @header-generator platform
    virtual ::PackOrigin getPackOrigin() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PackType getPackType() const;
#else // @header-generator platform
    virtual ::PackType getPackType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&&) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PackOrigin $getPackOrigin() const;

    MCNAPI ::PackType $getPackType() const;

    MCNAPI ::PackSourceLoadResult $_loadImpl(::PackSourceLoadOptions&&);
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
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

} // namespace Realms
