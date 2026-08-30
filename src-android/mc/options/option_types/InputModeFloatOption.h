#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/options/option_types/Option.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/options/option_types/OptionOwnerType.h"
#include "mc/options/option_types/OptionResetFlags.h"

class InputModeFloatOption : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float const>                           VALUE_MIN;
    ::ll::TypedStorage<4, 4, float const>                           VALUE_MAX;
    ::ll::TypedStorage<8, 40, std::unordered_map<InputMode, float>> mValues;
    ::ll::TypedStorage<8, 40, std::unordered_map<InputMode, float>> mDefaultValues;
    ::ll::TypedStorage<4, 4, float const>                           DELTA;
    // NOLINTEND

public:
    // prevent constructor by default
    InputModeFloatOption();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InputModeFloatOption();

    virtual void save(std::vector<std::pair<std::string, std::string>>&);

    virtual void load(std::map<std::string, std::string>&);

    virtual void load(std::string const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InputModeFloatOption(
        ::OptionID,
        ::OptionOwnerType,
        ::OptionResetFlags,
        std::string const&,
        std::string const&,
        float,
        float,
        float
    );

    MCNAPI void _saveForInputMode(std::vector<std::pair<std::string, std::string>>&, ::InputMode);

    MCNAPI void set(::InputMode, float, bool);
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
        float,
        float,
        float
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

    MCNAPI void $load(std::map<std::string, std::string>&);

    MCNAPI void $load(std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
