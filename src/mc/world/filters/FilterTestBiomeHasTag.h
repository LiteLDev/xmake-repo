#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/SimpleTagIDFilterTest.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Biome;
#else // @header-generator platform
#endif // @header-generator platform
class IWorldRegistriesProvider;
struct FilterContext;
// clang-format on

class FilterTestBiomeHasTag : public ::SimpleTagIDFilterTest {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FilterTestBiomeHasTag();
#else // @header-generator platform
    virtual bool evaluate(::FilterContext const& context) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool evaluate(::FilterContext const&) const;
#else // @header-generator platform
    virtual void finalizeParsedValue(::IWorldRegistriesProvider& registries) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void finalizeParsedValue(::IWorldRegistriesProvider&);

    virtual std::string_view getName() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::string_view getName() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $evaluate(::FilterContext const&) const;
#else // @header-generator platform
    MCNAPI bool $evaluate(::FilterContext const& context) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $finalizeParsedValue(::IWorldRegistriesProvider&);
#else // @header-generator platform
    MCNAPI void $finalizeParsedValue(::IWorldRegistriesProvider& registries);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string_view $getName() const;
    // NOLINTEND
#else // @header-generator platform
    MCNAPI ::std::string_view $getName() const;
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
