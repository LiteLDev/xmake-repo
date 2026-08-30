#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/options/option_types/InputModeOptionValue.h"
#include "mc/options/option_types/Option.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/options/option_types/OptionOwnerType.h"
#include "mc/options/option_types/OptionResetFlags.h"

class InputModeBoolOption : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<InputMode, bool>> mValues;
    ::ll::TypedStorage<8, 40, std::unordered_map<InputMode, bool>> mDefaultValues;
    // NOLINTEND

public:
    // prevent constructor by default
    InputModeBoolOption();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InputModeBoolOption();

    virtual void save(std::vector<std::pair<std::string, std::string>>&);

    virtual void load(std::map<std::string, std::string>&);

    virtual void load(std::string const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InputModeBoolOption(
        ::OptionID,
        ::OptionOwnerType,
        ::OptionResetFlags,
        std::string const&,
        std::string const&,
        bool
    );

    MCNAPI InputModeBoolOption(
        ::OptionID,
        ::OptionOwnerType,
        ::OptionResetFlags,
        std::string const&,
        std::string const&,
        bool,
        bool,
        bool
    );

    MCNAPI void _saveForInputMode(std::vector<std::pair<std::string, std::string>>&, ::InputMode);

    MCNAPI bool getValue(::InputMode) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OptionID, ::OptionOwnerType, ::OptionResetFlags, std::string const&, std::string const&, bool);

    MCNAPI void*
    $ctor(::OptionID, ::OptionOwnerType, ::OptionResetFlags, std::string const&, std::string const&, bool, bool, bool);
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

    MCNAPI void $load(std::map<std::string, std::string>&);

    MCNAPI void $load(std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
