#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace npc {

struct ActionValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mRawText;
    ::ll::TypedStorage<8, 24, std::string> mText;
    // NOLINTEND

public:
    // prevent constructor by default
    ActionValue& operator=(ActionValue const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::npc::ActionValue& operator=(std::string_view);

    MCNAPI std::string_view rawValue() const;

    MCNAPI ~ActionValue();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace npc
