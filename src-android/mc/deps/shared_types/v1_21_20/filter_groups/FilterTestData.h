#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20 {

struct FilterTestData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                                mTest;
    ::ll::TypedStorage<8, 40, std::optional<std::variant<bool, int, float, std::string>>> mSubject;
    ::ll::TypedStorage<8, 40, std::optional<std::variant<bool, int, float, std::string>>> mOperator;
    ::ll::TypedStorage<8, 40, std::optional<std::variant<bool, int, float, std::string>>> mDomain;
    ::ll::TypedStorage<8, 40, std::optional<std::variant<bool, int, float, std::string>>> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    FilterTestData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FilterTestData(::SharedTypes::v1_21_20::FilterTestData const&);

    MCNAPI FilterTestData(::SharedTypes::v1_21_20::FilterTestData&&);

    MCNAPI bool operator==(::SharedTypes::v1_21_20::FilterTestData const&) const;

    MCNAPI ~FilterTestData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_20::FilterTestData const&);

    MCNAPI void* $ctor(::SharedTypes::v1_21_20::FilterTestData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
