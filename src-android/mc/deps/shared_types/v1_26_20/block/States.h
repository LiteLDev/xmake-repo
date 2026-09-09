#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        // clang-format off
        ::ll::TypedStorage<8, 32, std::variant<std::vector<std::string>, std::vector<bool>, std::vector<int>, SharedTypes::v1_26_20::BlockDefinition::States::IntegerRange>> mValues;
        // clang-format on
        // NOLINTEND
    };

    using DataType = std::unordered_map<
        std::string,
        std::variant<
            std::vector<std::string>,
            std::vector<bool>,
            std::vector<int>,
            SharedTypes::v1_26_20::BlockDefinition::States::Values>>;

    using StringState = std::vector<std::string>;

    using BooleanState = std::vector<bool>;

    using IntegerState = std::vector<int>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::vector<std::string>>> mStringStates;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::vector<bool>>> mBooleanStates;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::vector<int>>> mIntegerStates;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, SharedTypes::v1_26_20::BlockDefinition::States::IntegerRange>> mIntegerRangeStates;
    // clang-format on
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
