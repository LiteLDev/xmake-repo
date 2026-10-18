#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleIntFilterTest.h"

// auto generated forward declare list
// clang-format off
struct FilterContext;
struct FilterInputs;
// clang-format on

class FilterTestHourlyClock : public ::SimpleIntFilterTest {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int> mValue;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkde0d1e;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FilterTestHourlyClock& operator=(FilterTestHourlyClock const&);
    FilterTestHourlyClock(FilterTestHourlyClock const&);
    FilterTestHourlyClock();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FilterTestHourlyClock();
#else // @header-generator platform
    virtual bool setup(::FilterTest::Definition const& definition, ::FilterInputs const& inputs) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool setup(::FilterTest::Definition const&, ::FilterInputs const&);
#else // @header-generator platform
    virtual bool evaluate(::FilterContext const& context) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool evaluate(::FilterContext const&) const;

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
    MCNAPI bool $setup(::FilterTest::Definition const&, ::FilterInputs const&);
#else // @header-generator platform
    MCNAPI bool $setup(::FilterTest::Definition const& definition, ::FilterInputs const& inputs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $evaluate(::FilterContext const&) const;
#else // @header-generator platform
    MCNAPI bool $evaluate(::FilterContext const& context) const;
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
