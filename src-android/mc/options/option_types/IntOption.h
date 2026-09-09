#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/options/option_types/OptionOwnerType.h"
#include "mc/options/option_types/OptionResetFlags.h"

// auto generated forward declare list
// clang-format off
class GameVersion;
// clang-format on

class IntOption : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const>         VALUE_MAX;
    ::ll::TypedStorage<4, 4, int const>         VALUE_MIN;
    ::ll::TypedStorage<4, 4, int>               mValue;
    ::ll::TypedStorage<4, 4, int>               mDefaultValue;
    ::ll::TypedStorage<1, 1, bool>              mClampToRange;
    ::ll::TypedStorage<8, 24, std::vector<int>> mPossibleValues;
    ::ll::UntypedStorage<8, 48>                 mCoerceSaveValueCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    IntOption();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IntOption();

    virtual void save(std::vector<std::pair<std::string, std::string>>&);

    virtual void load(std::string const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IntOption(
        ::OptionID,
        ::OptionOwnerType,
        ::OptionResetFlags,
        std::string const&,
        std::string const&,
        int,
        std::vector<int> const&,
        bool,
        ::GameVersion
    );

    MCNAPI IntOption(
        ::OptionID,
        ::OptionOwnerType,
        ::OptionResetFlags,
        std::string const&,
        std::string const&,
        int,
        bool,
        int,
        int,
        ::GameVersion
    );

    MCNAPI void set(int, bool);

    MCNAPI void setValues(std::vector<int> const);
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
        bool,
        ::GameVersion
    );

    MCNAPI void* $ctor(
        ::OptionID,
        ::OptionOwnerType,
        ::OptionResetFlags,
        std::string const&,
        std::string const&,
        int,
        bool,
        int,
        int,
        ::GameVersion
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $save(std::vector<std::pair<std::string, std::string>>&);

    MCNAPI void $load(std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
