#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CerealHelpers {

struct Member {
public:
    // Member inner types define
    enum class Type : uchar {
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        Boolean           = 0,
        Number            = 1,
        String            = 2,
        Object            = 3,
        Array             = 4,
        Vec3              = 5,
        ExpressionNode    = 6,
        IntRange          = 7,
        ItemDescriptor    = 8,
        DefinitionTrigger = 9,
        IdentifierString  = 10,
        Color255rgb       = 11,
        CraftingTags      = 12,
        Brightness        = 13,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::string_view>                        mName;
    ::ll::TypedStorage<1, 1, ::CerealHelpers::Member::Type>            mType;
    ::ll::TypedStorage<1, 1, bool>                                     mRequired;
    ::ll::TypedStorage<4, 8, std::optional<float>>                     mMin;
    ::ll::TypedStorage<4, 8, std::optional<float>>                     mMax;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>> mEnumValues;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk43e167;
    ::ll::UntypedStorage<1, 1>  mUnk64f20d;
    ::ll::UntypedStorage<1, 1>  mUnkebe7f3;
    ::ll::UntypedStorage<4, 8>  mUnkf02687;
    ::ll::UntypedStorage<4, 8>  mUnk49b864;
    ::ll::UntypedStorage<8, 32> mUnk4020a9;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    Member& operator=(Member const&);
    Member(Member const&);
#endif // @header-generator platform
    Member();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool doCheck(
        ::rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
#else // @header-generator platform
    MCNAPI bool check(
        ::rapidjson::GenericValue<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~Member();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI bool doCheck(
        ::rapidjson::GenericValue<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& value
    ) const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace CerealHelpers
