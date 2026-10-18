#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
struct FilterInputs;
namespace Json { class Value; }
// clang-format on

class SimpleBoolFilterTest : public ::FilterTest {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mValue;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnka7c087;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SimpleBoolFilterTest& operator=(SimpleBoolFilterTest const&);
    SimpleBoolFilterTest(SimpleBoolFilterTest const&);
    SimpleBoolFilterTest();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool setup(::FilterTest::Definition const&, ::FilterInputs const&);
#else // @header-generator platform
    virtual bool setup(::FilterTest::Definition const& definition, ::FilterInputs const& inputs) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<std::variant<bool, int, float, std::string>> getValue() const;
#else // @header-generator platform
    virtual ::std::optional<::std::variant<bool, int, float, ::std::string>> getValue() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Json::Value _serializeValue() const;
#else // @header-generator platform
    virtual ::Json::Value _serializeValue() const /*override*/;
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
    MCNAPI std::optional<std::variant<bool, int, float, std::string>> $getValue() const;
#else // @header-generator platform
    MCNAPI ::std::optional<::std::variant<bool, int, float, ::std::string>> $getValue() const;
#endif // @header-generator platform

    MCNAPI ::Json::Value $_serializeValue() const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND
};
