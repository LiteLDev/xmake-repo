#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/IDType.h"
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
class BiomeRegistry;
struct FilterInputs;
namespace Json { class Value; }
// clang-format on

class SimpleTagIDFilterTest : public ::FilterTest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>               mCachedIDValue;
    ::ll::TypedStorage<8, 40, ::HashedString> mValueString;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SimpleTagIDFilterTest();

    virtual bool setup(::FilterTest::Definition const&, ::FilterInputs const&);

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

    MCNAPI std::optional<std::variant<bool, int, float, std::string>> $getValue() const;

    MCNAPI ::Json::Value $_serializeValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
