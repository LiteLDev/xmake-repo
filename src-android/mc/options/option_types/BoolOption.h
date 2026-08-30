#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/options/option_types/OptionOwnerType.h"
#include "mc/options/option_types/OptionResetFlags.h"

class BoolOption : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mValue;
    ::ll::UntypedStorage<1, 15>    mDefaultValue;
    ::ll::UntypedStorage<8, 48>    mCoerceValueCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    BoolOption();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BoolOption();

    virtual void save(std::vector<std::pair<std::string, std::string>>&);

    virtual void load(std::string const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void set(bool, bool);

    MCNAPI void setDefault(bool);

    MCNAPI void toggle();
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
