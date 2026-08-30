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
    ::ll::TypedStorage<8, 16, std::unordered_map<int, std::string> const&> ValueNameMap;
    // NOLINTEND

public:
    // prevent constructor by default
    EnumOption& operator=(EnumOption const&);
    EnumOption(EnumOption const&);
    EnumOption();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnumOption();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
