#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/TextboxTextUpdateReason.h"
#include "mc/entity/events/AppEventBase.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct AppSetTextboxTextEvent : public ::AppEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>              mText;
    ::ll::TypedStorage<4, 4, int>                       mControllerId;
    ::ll::TypedStorage<4, 4, ::TextboxTextUpdateReason> mTextboxTextUpdateReason;
    // NOLINTEND

public:
    // prevent constructor by default
    AppSetTextboxTextEvent& operator=(AppSetTextboxTextEvent const&);
    AppSetTextboxTextEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AppSetTextboxTextEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
