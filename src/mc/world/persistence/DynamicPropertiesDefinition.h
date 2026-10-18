#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/persistence/DynamicPropertyDefinePropertyError.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/persistence/DynamicPropertyDefinition.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ActorDefinition;
#else // @header-generator platform
struct DynamicPropertyDefinition;
#endif // @header-generator platform
// clang-format on

class DynamicPropertiesDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, DynamicPropertyDefinition>> mDynamicProperties;
    ::ll::TypedStorage<8, 8, ulong>                                                       mCost;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::DynamicPropertyDefinition>> mDynamicProperties;
    ::ll::TypedStorage<8, 8, uint64>                                                            mCost;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool
    _canMergeDefinitions(::DynamicPropertiesDefinition const&, std::string const&, ulong, std::string&) const;
#else // @header-generator platform
    MCNAPI bool _canMergeDefinitions(
        ::DynamicPropertiesDefinition const& other,
        ::std::string const&                 identifier,
        uint64                               sizeLimit,
        ::std::string&                       error
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clear();
#else // @header-generator platform
    MCNAPI ::std::optional<::DynamicPropertyDefinePropertyError>
    defineProperty(::std::string const& identifier, ::DynamicPropertyDefinition definition);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<DynamicPropertyDefinePropertyError>
           defineProperty(std::string const&, ::DynamicPropertyDefinition);
#else // @header-generator platform
    MCNAPI ::DynamicPropertyDefinition const* tryGetPropertyDefinition(::std::string const& identifier) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DynamicPropertyDefinition const* tryGetPropertyDefinition(std::string const&) const;

    MCNAPI std::optional<std::string>
           tryMergeDefinitions(::DynamicPropertiesDefinition const&, std::string const&, ulong);
#else // @header-generator platform
    MCNAPI ::std::optional<::std::string>
    tryMergeDefinitions(::DynamicPropertiesDefinition const& other, ::std::string const& identifier, uint64 sizeLimit);
#endif // @header-generator platform

    MCNAPI ~DynamicPropertiesDefinition();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void clearAll(std::unordered_map<std::string, std::unique_ptr<ActorDefinition>> const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ulong const& ACTOR_TOTAL_DYNAMIC_PROPERTY_SIZE_LIMIT();

    MCNAPI static ulong const& IDENTIFIER_SIZE_LIMIT();

    MCNAPI static ulong const& WORLD_TOTAL_DYNAMIC_PROPERTY_SIZE_LIMIT();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
