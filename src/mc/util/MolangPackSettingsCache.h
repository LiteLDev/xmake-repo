#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class HashedString;
#endif // @header-generator platform
class PackInstance;
// clang-format on

class MolangPackSettingsCache {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // MolangPackSettingsCache inner types define
    using PackSettingValueMolang = ::std::variant<bool, float, ::HashedString>;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, std::variant<bool, float, HashedString>>> mNameValueMap;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::std::variant<bool, float, ::HashedString>>> mNameValueMap;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit MolangPackSettingsCache(std::vector<PackInstance> const&);

    MCNAPI void _addToMap(std::string const&, std::variant<float, bool, std::string> const&);

    MCNAPI void _initFromPackStack(std::vector<PackInstance> const&);

    MCNAPI void updatePackSetting(std::string const&, std::variant<float, bool, std::string> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::vector<PackInstance> const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _initFromPackStack(::std::vector<::PackInstance> const& stack);

    MCAPI void updatePackSetting(::std::string const& name, ::std::variant<float, bool, ::std::string> const& value);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
