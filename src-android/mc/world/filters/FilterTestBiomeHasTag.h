#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/SimpleTagIDFilterTest.h"

// auto generated forward declare list
// clang-format off
class Biome;
class IWorldRegistriesProvider;
struct FilterContext;
// clang-format on

class FilterTestBiomeHasTag : public ::SimpleTagIDFilterTest {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FilterTestBiomeHasTag();

    virtual bool evaluate(::FilterContext const&) const;

    virtual void finalizeParsedValue(::IWorldRegistriesProvider&);

    virtual std::string_view getName() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $evaluate(::FilterContext const&) const;

    MCNAPI void $finalizeParsedValue(::IWorldRegistriesProvider&);

    MCNAPI std::string_view $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
