#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
struct FilterInputs;
namespace Json { class Value; }
// clang-format on

class SimpleFloatFilterTest : public ::FilterTest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mValue;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool setup(::FilterTest::Definition const&, ::FilterInputs const&);

    virtual std::optional<std::variant<bool, int, float, std::string>> getValue() const;

    virtual ::Json::Value _serializeValue() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $setup(::FilterTest::Definition const&, ::FilterInputs const&);

    MCNAPI std::optional<std::variant<bool, int, float, std::string>> $getValue() const;

    MCNAPI ::Json::Value $_serializeValue() const;
    // NOLINTEND
};
