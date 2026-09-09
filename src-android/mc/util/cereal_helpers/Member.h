#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CerealHelpers {

struct Member {
public:
    // Member inner types define
    enum class Type : uchar {
        boolean            = 0,
        number             = 1,
        string             = 2,
        object             = 3,
        array              = 4,
        vec3               = 5,
        expression_node    = 6,
        int_range          = 7,
        item_descriptor    = 8,
        definition_trigger = 9,
        identifier_string  = 10,
        color255rgb        = 11,
        crafting_tags      = 12,
        brightness         = 13,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::string_view>                        mName;
    ::ll::TypedStorage<1, 1, ::CerealHelpers::Member::Type>            mType;
    ::ll::TypedStorage<1, 1, bool>                                     mRequired;
    ::ll::TypedStorage<4, 8, std::optional<float>>                     mMin;
    ::ll::TypedStorage<4, 8, std::optional<float>>                     mMax;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mEnumValues;
    // NOLINTEND

public:
    // prevent constructor by default
    Member();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool doCheck(
        ::rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
    ) const;

    MCNAPI ~Member();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace CerealHelpers
