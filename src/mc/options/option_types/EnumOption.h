#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/IntOption.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/options/option_types/OptionOwnerType.h"
#include "mc/options/option_types/OptionResetFlags.h"

// auto generated forward declare list
// clang-format off
class GameVersion;
// clang-format on

class EnumOption : public ::IntOption {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::unordered_map<int, std::string> const&> ValueNameMap;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unordered_map<int, ::std::string> const&> ValueNameMap;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EnumOption& operator=(EnumOption const&);
    EnumOption(EnumOption const&);
    EnumOption();

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnumOption();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI EnumOption(
        ::OptionID,
        ::OptionOwnerType,
        ::OptionResetFlags,
        std::string const&,
        std::string const&,
        int,
        std::vector<int> const&,
        std::unordered_map<int, std::string> const&,
        ::GameVersion
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI EnumOption(
        ::OptionID                                      id,
        ::OptionOwnerType                               ownerType,
        ::OptionResetFlags                              resetFlags,
        ::std::string const&                            captionId,
        ::std::string const&                            saveTag,
        int                                             value,
        ::std::vector<int> const&                       values,
        ::std::unordered_map<int, ::std::string> const& valueNameMap,
        ::GameVersion                                   version
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::OptionID,
        ::OptionOwnerType,
        ::OptionResetFlags,
        std::string const&,
        std::string const&,
        int,
        std::vector<int> const&,
        std::unordered_map<int, std::string> const&,
        ::GameVersion
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::OptionID                                      id,
        ::OptionOwnerType                               ownerType,
        ::OptionResetFlags                              resetFlags,
        ::std::string const&                            captionId,
        ::std::string const&                            saveTag,
        int                                             value,
        ::std::vector<int> const&                       values,
        ::std::unordered_map<int, ::std::string> const& valueNameMap,
        ::GameVersion                                   version
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
