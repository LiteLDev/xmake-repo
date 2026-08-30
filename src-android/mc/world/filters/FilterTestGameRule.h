#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
struct FilterContext;
struct FilterInputs;
namespace Json { class Value; }
// clang-format on

class FilterTestGameRule : public ::FilterTest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mGameRule;
    ::ll::TypedStorage<1, 1, bool>         mValue;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FilterTestGameRule();

    virtual bool setup(::FilterTest::Definition const&, ::FilterInputs const&);

    virtual bool evaluate(::FilterContext const&) const;

    virtual std::string_view getName() const;

    virtual std::optional<std::variant<bool, int, float, std::string>> getValue() const;

    virtual ::Json::Value _serializeValue() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $setup(::FilterTest::Definition const&, ::FilterInputs const&);

    MCNAPI bool $evaluate(::FilterContext const&) const;

    MCNAPI std::string_view $getName() const;

    MCNAPI std::optional<std::variant<bool, int, float, std::string>> $getValue() const;

    MCNAPI ::Json::Value $_serializeValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
