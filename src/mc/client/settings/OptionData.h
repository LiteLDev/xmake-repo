#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/LocStringData.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/LocStringData.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Settings {

#if defined(LL_PLAT_A) // @header-generator platform
struct OptionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> value;
    ::ll::UntypedStorage<8, 64> label;
    ::ll::UntypedStorage<8, 80> description;
    ::ll::UntypedStorage<1, 16> disabled;
    // NOLINTEND

public:
    // prevent constructor by default
    OptionData& operator=(OptionData const&);
    OptionData(OptionData const&);
    OptionData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~OptionData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct OptionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> value;
    ::ll::
        TypedStorage<8, 72, ::std::variant<::std::string, ::std::function<::std::string()>, ::Settings::LocStringData>>
            label;
    ::ll::TypedStorage<
        8,
        80,
        ::std::optional<::std::variant<::std::string, ::std::function<::std::string()>, ::Settings::LocStringData>>>
                                   description;
    ::ll::TypedStorage<1, 1, bool> disabled;
    // NOLINTEND

public:
    // prevent constructor by default
    OptionData& operator=(OptionData const&);
    OptionData(OptionData const&);
    OptionData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OptionData(::Settings::OptionData&&);

    MCAPI ::Settings::OptionData& operator=(::Settings::OptionData&&);

    MCAPI ~OptionData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Settings::OptionData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct OptionData {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings
