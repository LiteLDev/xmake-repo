#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/NullType.h"

namespace cereal {

class DynamicValue {
public:
    // DynamicValue inner types define
    enum class Type : int {
        null    = 0,
        boolean = 1,
        integer = 2,
        number  = 3,
        string  = 4,
        array   = 5,
        object  = 6,
    };

    using Variant = std::variant<
        cereal::NullType,
        bool,
        long,
        double,
        std::string,
        std::vector<cereal::DynamicValue>,
        std::unordered_map<std::string, cereal::DynamicValue>>;

    using Bool = bool;

    using Integer = long;

    using Number = double;

    using String = std::string;

    using Object = std::unordered_map<std::string, cereal::DynamicValue>;

    using Array = std::vector<cereal::DynamicValue>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::vector<cereal::DynamicValue> const& asArray() const;

    MCNAPI std::vector<cereal::DynamicValue>& asArray();

    MCNAPI bool const& asBool() const;

    MCNAPI long const& asInteger() const;

    MCNAPI double const& asNumber() const;

    MCNAPI std::unordered_map<std::string, cereal::DynamicValue> const& asObject() const;

    MCNAPI std::unordered_map<std::string, cereal::DynamicValue>& asObject();

    MCNAPI std::string const& asString() const;

    MCNAPI std::string& asString();

    MCNAPI bool hasMember(std::string const&) const;

    MCNAPI ulong hash() const;

    MCNAPI bool operator==(::cereal::DynamicValue const&) const;

    MCNAPI ::cereal::DynamicValue const& operator[](std::string const&) const;

    MCNAPI ::cereal::DynamicValue& operator[](std::string const&);

    MCNAPI ::cereal::DynamicValue::Type type() const;

    MCNAPI ~DynamicValue();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal
