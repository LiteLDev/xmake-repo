#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v1_26_20::BlockDefinition {

struct States {
public:
    // States inner types declare
    // clang-format off
    struct IntegerRange;
    struct Values;
    // clang-format on

    // States inner types define
    struct IntegerRange {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mMin;
        ::ll::TypedStorage<4, 4, int> mMax;
        // NOLINTEND
    };

    struct Values {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 32, std::variant<std::vector<std::string>, std::vector<bool>, std::vector<int>, SharedTypes::v1_26_20::BlockDefinition::States::IntegerRange>> mValues;
        // clang-format on
#else // @header-generator platform
        ::ll::TypedStorage<
            8,
            40,
            ::std::variant<
                ::std::vector<::std::string>,
                ::std::vector<bool>,
                ::std::vector<int>,
                ::SharedTypes::v1_26_20::BlockDefinition::States::IntegerRange>>
            mValues;
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using DataType = std::unordered_map<
        std::string,
        std::variant<
            std::vector<std::string>,
            std::vector<bool>,
            std::vector<int>,
            SharedTypes::v1_26_20::BlockDefinition::States::Values>>;
#else // @header-generator platform
    using BooleanState = ::std::vector<bool>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using StringState = std::vector<std::string>;
#else // @header-generator platform
    using DataType = ::std::unordered_map<
        ::std::string,
        ::std::variant<
            ::std::vector<::std::string>,
            ::std::vector<bool>,
            ::std::vector<int>,
            ::SharedTypes::v1_26_20::BlockDefinition::States::Values>>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using BooleanState = std::vector<bool>;
#else // @header-generator platform
    using IntegerRangeState = ::SharedTypes::v1_26_20::BlockDefinition::States::IntegerRange;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using IntegerState = std::vector<int>;
#else // @header-generator platform
    using IntegerState = ::std::vector<int>;

    using StatesVariant = ::std::variant<
        ::std::vector<::std::string>,
        ::std::vector<bool>,
        ::std::vector<int>,
        ::SharedTypes::v1_26_20::BlockDefinition::States::Values>;

    using StringState = ::std::vector<::std::string>;

    using ValuesState = ::SharedTypes::v1_26_20::BlockDefinition::States::Values;

    using ValuesVariant = ::std::variant<
        ::std::vector<::std::string>,
        ::std::vector<bool>,
        ::std::vector<int>,
        ::SharedTypes::v1_26_20::BlockDefinition::States::IntegerRange>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::vector<std::string>>> mStringStates;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::vector<bool>>> mBooleanStates;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::vector<int>>> mIntegerStates;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, SharedTypes::v1_26_20::BlockDefinition::States::IntegerRange>> mIntegerRangeStates;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::vector<::std::string>>> mStringStates;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::vector<bool>>>          mBooleanStates;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::vector<int>>>           mIntegerStates;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::std::string, ::SharedTypes::v1_26_20::BlockDefinition::States::IntegerRange>>
        mIntegerRangeStates;
    // NOLINTEND

public:
    // prevent constructor by default
    States(States const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI States();

    MCAPI ::SharedTypes::v1_26_20::BlockDefinition::States&
    operator=(::SharedTypes::v1_26_20::BlockDefinition::States&&);

    MCAPI ::SharedTypes::v1_26_20::BlockDefinition::States&
    operator=(::SharedTypes::v1_26_20::BlockDefinition::States const&);

    MCAPI ~States();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
